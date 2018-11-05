//
//  ShareChoosenViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/11/15.
//

#import "ShareChoosenViewController.h"
#import "UnityAppController.h"
#import "WXApi.h"

@interface ShareChoosenViewController ()
@property (retain, nonatomic) IBOutlet UILabel *firstLabel;
@property (retain, nonatomic) IBOutlet UILabel *secondLabel;

@end

@implementation ShareChoosenViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    self.view.backgroundColor = [UIColor colorWithWhite:0.f alpha:0.3];
    _firstLabel.adjustsFontSizeToFitWidth = YES;
    _secondLabel.adjustsFontSizeToFitWidth = YES;
    //手势处理
    self.view.userInteractionEnabled = YES;
    self.view.multipleTouchEnabled = YES;
    UITapGestureRecognizer* gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleSingle:)];
    gesture.numberOfTapsRequired = 1;
    //gesture.numberOfTouchesRequired = 1;
    [self.view addGestureRecognizer:gesture];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

//单指
- (void)handleSingle:(UITapGestureRecognizer*)sender
{
    [self.view removeFromSuperview];
}

//分享给朋友
- (IBAction)shareToFriend:(id)sender {
    
    WXMediaMessage *message = [WXMediaMessage message];
    UIImage* image = [[UIImage alloc] initWithContentsOfFile:self.path];
    CGSize size = {150,150};
    UIImage* thumb_image = [self imageByScalingAndCroppingForSize:size withSourceImage:image];
    [message setThumbImage:thumb_image];
    WXImageObject *imageObject = [WXImageObject object];
    imageObject.imageData = [NSData dataWithContentsOfFile:self.path];
    message.mediaObject = imageObject;
    
    SendMessageToWXReq* req =[[SendMessageToWXReq alloc] init];
    req.bText = NO;
    req.message = message;
    req.scene = WXSceneSession;
    [WXApi sendReq:req];
    NSLog(@"分享给朋友");
    
    //
    //[self release];
    [self.view removeFromSuperview];
    UnityAppController* uac = GetAppController();
    [uac setWXSCVCImage:nil];
    [uac bringROOTVFirst];
    //uac.window.rootViewController = uac.rootViewController;
    //UnityPause(false);
    
}

//分享到朋友圈
- (IBAction)shareToMoments:(id)sender {
    NSLog(self.path);
    WXMediaMessage *message = [WXMediaMessage message];
    UIImage* image = [[UIImage alloc] initWithContentsOfFile:self.path];
    CGSize size = {150,150};
    UIImage* thumb_image = [self imageByScalingAndCroppingForSize:size withSourceImage:image];
    [message setThumbImage:thumb_image];
    WXImageObject *imageObject = [WXImageObject object];
    imageObject.imageData = [NSData dataWithContentsOfFile:self.path];
    message.mediaObject = imageObject;
    SendMessageToWXReq* req =[[SendMessageToWXReq alloc] init];
    req.bText = NO;
    req.message = message;
    req.scene = WXSceneTimeline;
    [WXApi sendReq:req];
    NSLog(@"朋友圈");
    
    //[self.view removeFromSuperview];
    //[self release];
    [self.view removeFromSuperview];
    UnityAppController* uac = GetAppController();
    [uac setWXSCVCImage:nil];
    [uac bringROOTVFirst];
    //uac.window.rootViewController = uac.rootViewController;
    //UnityPause(false);
    
}

//缩略图
- (UIImage*)imageByScalingAndCroppingForSize:(CGSize)targetSize withSourceImage:(UIImage *)sourceImage
{
    UIImage *newImage =nil;
    CGSize imageSize = sourceImage.size;
    CGFloat width = imageSize.width;
    CGFloat height = imageSize.height;
    CGFloat targetWidth = targetSize.width;
    CGFloat targetHeight = targetSize.height;
    CGFloat scaleFactor =0.0;
    CGFloat scaledWidth = targetWidth;
    CGFloat scaledHeight = targetHeight;
    CGPoint thumbnailPoint =CGPointMake(0.0,0.0);
    if (CGSizeEqualToSize(imageSize, targetSize) ==NO)
    {
        CGFloat widthFactor = targetWidth / width;
        CGFloat heightFactor = targetHeight / height;
        if (widthFactor > heightFactor)
            scaleFactor = widthFactor; // scale to fit height
        else
            scaleFactor = heightFactor; // scale to fit width
        scaledWidth= width * scaleFactor;
        scaledHeight = height * scaleFactor;
        // center the image
        if (widthFactor > heightFactor)
        {
            thumbnailPoint.y = (targetHeight - scaledHeight) *0.5;
        }
        else if (widthFactor < heightFactor)
        {
            thumbnailPoint.x = (targetWidth - scaledWidth) *0.5;
        }
    }
    UIGraphicsBeginImageContext(targetSize);// this will crop
    CGRect thumbnailRect =CGRectZero;
    thumbnailRect.origin = thumbnailPoint;
    thumbnailRect.size.width= scaledWidth;
    thumbnailRect.size.height = scaledHeight;
    
    [sourceImage drawInRect:thumbnailRect];
    newImage = UIGraphicsGetImageFromCurrentImageContext();
    if(newImage ==nil)
        NSLog(@"could not scale image");
    
    //pop the context to get back to the default
    UIGraphicsEndImageContext();
    
    return newImage;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (void)dealloc {
    [_firstLabel release];
    [_secondLabel release];
    [super dealloc];
}
@end
