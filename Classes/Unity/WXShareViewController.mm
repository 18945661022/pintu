//
//  WXShareViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/11/13.
//

#import "WXShareViewController.h"
#import "UnityIOS.h"
#import "UnityAppController.h"
#import "ShareChoosenViewController.h"

@interface WXShareViewController ()

@property (nonatomic,retain) ShareChoosenViewController* scvc;

@property (retain, nonatomic) IBOutlet UIImageView *shareImageView;
@property (retain, nonatomic) IBOutlet UIImageView *backImageView;
@property (retain, nonatomic) IBOutlet UIButton *shareButton;
@property (retain, nonatomic) IBOutlet UIButton *backButton;
@property (retain, nonatomic) IBOutlet UILabel *label;

@property (assign, nonatomic) BOOL ImageFront;

@end

@implementation WXShareViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    UIWindow* window = [UIApplication sharedApplication].keyWindow;
    CGRect frame = window.bounds;
    _scvc = [[ShareChoosenViewController alloc] init];
    _scvc.view.frame = frame;
    _imageView.frame = frame;
    _shareImageView.frame = CGRectMake(frame.origin.x, frame.size.height-frame.size.width/4, frame.size.width, frame.size.width/4);
    _backImageView.frame = CGRectMake(frame.origin.x, frame.origin.y, frame.size.width, frame.size.width/4);
    
    _shareButton.frame =CGRectMake(frame.size.width*0.35, frame.size.height-frame.size.width/8-frame.size.width/20, frame.size.width*0.3, frame.size.width/10);
    _backButton.frame = CGRectMake(frame.origin.x, _backImageView.frame.size.height/4,_backImageView.frame.size.height/2, _backImageView.frame.size.height/2);
    _label.frame = CGRectMake(_backButton.frame.size.width+10, _backButton.frame.size.height*3/4, _backButton.frame.size.height*4.5, _backButton.frame.size.height/2);
    _label.text = @"看一看，这张图行不？";
    _label.textColor = [UIColor whiteColor];
    _label.adjustsFontSizeToFitWidth = YES;
    
    //手势处理
    _imageView.userInteractionEnabled = YES;
    _imageView.multipleTouchEnabled = YES;
    UITapGestureRecognizer* gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleSingle:)];
    gesture.numberOfTapsRequired = 1;
    //gesture.numberOfTouchesRequired = 1;
    [_imageView addGestureRecognizer:gesture];
    _ImageFront = NO;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

//单指
- (void)handleSingle:(UITapGestureRecognizer*)sender
{
    if(NO == _ImageFront){
        [self.view bringSubviewToFront:_imageView];
        _ImageFront = YES;
    }else{
        [self.view sendSubviewToBack:_imageView];
        _ImageFront = NO;
    }
}

- (IBAction)share:(id)sender {
    //
    _scvc.path = self.path;
    [self.view addSubview:_scvc.view];
    /**
    ShareChoosenViewController* scvc = [[ShareChoosenViewController alloc] init];
    scvc.view.backgroundColor = [UIColor colorWithWhite:0.f alpha:0.3];
    scvc.path = self.path;
    self.view.autoresizesSubviews=YES;
    CGRect parentBounds = self.view.bounds;
    CGFloat x = parentBounds.origin.x;
    CGFloat y = parentBounds.origin.y;
    CGFloat width = parentBounds.size.width;
    CGFloat height = parentBounds.size.height;
    //子视图在父视图中的大小
    scvc.view.frame = CGRectMake(x, y, width, height);
    [self.view addSubview:scvc.view];
    //[uac.window addSubview:scvc.view];
     **/
}

- (IBAction)backUnity:(id)sender {
    UnityAppController* uac = GetAppController();
    [_imageView setImage:nil];
    [uac bringROOTVFirst];
    //uac.window.rootViewController = uac.rootViewController;
    //[self.view removeFromSuperview];
    //UnityPause(false);
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
    [_scvc release];
    [_imageView release];
    [_shareImageView release];
    [_backImageView release];
    [_shareButton release];
    [_backButton release];
    [_label release];
    [_label release];
    [super dealloc];
}
@end
