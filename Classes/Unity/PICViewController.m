//
//  PICViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/12/21.
//

#import "PICViewController.h"
#import "SaveImage.h"

@interface PICViewController ()
//@property (retain, nonatomic) IBOutlet UIImageView *backImageView;
@property (retain, nonatomic) IBOutlet UIImageView *imageView;
@property (retain, nonatomic) IBOutlet UIButton *storeButton;
//@property (retain, nonatomic) IBOutlet UIButton *backButton;
//@property (retain, nonatomic) IBOutlet UILabel *backLabel;
//@property (retain, nonatomic) IBOutlet UILabel *infoLabel;

/**
@property (retain, nonatomic) IBOutlet NSLayoutConstraint *sharebuttoncenterYCon;
@property (retain, nonatomic) IBOutlet NSLayoutConstraint *backbuttonheightCon;
@property (retain, nonatomic) IBOutlet NSLayoutConstraint *backbuttonCenterYCon;
***/

@end

@implementation PICViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    //UIWindow* window = [UIApplication sharedApplication].keyWindow;
    //CGRect frame = window.bounds;
    self.view.backgroundColor = [UIColor colorWithWhite:0.f alpha:0.3];
    //手势处理
    self.view.userInteractionEnabled = YES;
    self.view.multipleTouchEnabled = YES;
    UITapGestureRecognizer* gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleSingle:)];
    gesture.numberOfTapsRequired = 1;
    //gesture.numberOfTouchesRequired = 1;
    [self.view addGestureRecognizer:gesture];
    /***
    _sharebuttoncenterYCon.constant = (frame.size.height*3/8+frame.size.width*23/64)/2;
    CGFloat constant = _backbuttonheightCon.constant;
    _backbuttonheightCon.constant = ((frame.size.height*3/8-frame.size.width*23/64)/2-constant)/2;
    _backbuttonCenterYCon.constant = (frame.size.height*3/8-frame.size.width*23/64)/2-frame.size.height/2;
     ***/
    //_imageView.layer.borderWidth = 2;
    //_imageView.layer.borderColor = [UIColor whiteColor].CGColor;
    //UIImage *image = [UIImage imageNamed:_imageName];
    //[_imageView setImage:image];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void) setImage{
    [_imageView setImage:[UIImage imageNamed:_imageName]];
    //_imageView.image = [UIImage imageNamed:_imageName];
}
/***
- (IBAction)backup:(id)sender {
    
    [self.view removeFromSuperview];
}
***/
//单指
- (void)handleSingle:(UITapGestureRecognizer*)sender
{
    [self.view removeFromSuperview];
}

- (IBAction)store:(id)sender {
    UIImage* image = [UIImage imageNamed:_imageName];
    SaveImage* saveImage = [[SaveImage alloc] init];
    saveImage.clearFlag = NO;
    NSString* msg;
    msg = [saveImage saveImageToPhotos:image];
    UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"照片保存结果" message:msg preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil];
    [ac addAction:okAction];
    [self presentViewController:ac animated:YES completion:nil ];
    [saveImage release];
    //_storeButton.enabled = NO;
}


/****
//屏蔽触摸
-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}
***/
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (void)dealloc {
    [_imageView release];
    [_storeButton release];
    //[_sharebuttoncenterYCon release];
    //[_backbuttonheightCon release];
    //[_backbuttonCenterYCon release];
    //[_backLabel release];
    //[_backImageView release];
    //[_backButton release];
    //[_infoLabel release];
    [super dealloc];
}
@end
