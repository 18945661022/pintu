//
//  MainViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/12/13.
//

#import "MainViewController.h"
#import "LoadViewController.h"
#import "UnityAppController.h"
#import "PICViewController.h"

#define IMAGECOUNT 8

@interface MainViewController ()

@property (nonatomic, retain) UIScrollView *sv;
@property (nonatomic, retain) UIButton *button;
//@property (nonatomic, strong) UIView *biv;
@property (nonatomic, retain) PICViewController* picvc;
@property (nonatomic, retain) NSArray* array;

//-(void)printFrame:(CGRect)frame;
-(void)backUnity;
@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
     CGRect viewBounds = self.view.bounds;
    
    //创建查看图片界面
    _picvc = [[PICViewController alloc] init];
    _picvc.view.frame = self.view.bounds;
    //放置背景(uiimageview方法)
    //UIImage* bivImage = [UIImage imageNamed:@"LaunchScreenImage-Portrait.png"];
    //_biv = [[UIImageView alloc]initWithImage:bivImage];
    //_biv.frame = CGRectMake(viewBounds.origin.x,viewBounds.origin.y,viewBounds.size.width,
    //                       viewBounds.size.height);
    //放置背景(重绘图片)
    /***
    UIImage* bivImage = [UIImage imageNamed:@"LaunchScreenImage-Portrait.png"];
    UIGraphicsBeginImageContext(CGSizeMake(viewBounds.size.width, viewBounds.size.height));
    [bivImage drawInRect:CGRectMake(viewBounds.origin.x, viewBounds.origin.y, viewBounds.size.width, viewBounds.size.height)];
    UIImage* newBivImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    self.view.backgroundColor = [UIColor colorWithPatternImage:newBivImage];
    ***/
    self.view.backgroundColor = [UIColor colorWithRed:100.0f/255.0f green:100.0f/255.0f blue:1.0f  alpha:1];
    
    
    //设置button
    _button = [[UIButton alloc] init];
    CGRect frame = CGRectZero;
    frame.size.width = 72;
    frame.size.height = 72;
    frame.origin.x = viewBounds.size.width/2-36;
    frame.origin.y = viewBounds.size.height*0.15-36;
    _button.frame = frame;
    NSString *path = [[NSBundle mainBundle] pathForResource:@"bawanglonglogo" ofType:@"png"];
    UIImage* image = [[UIImage alloc] initWithContentsOfFile:path];
    [_button setBackgroundImage:image forState:UIControlStateNormal];
    [image release];
    [self.view addSubview:_button];
    [_button addTarget:self  action:@selector(backUnity) forControlEvents:UIControlEventTouchUpInside];
    
    //0.3位置
    _sv = [[UIScrollView alloc] init];
    CGRect svFrame = CGRectZero;
    svFrame.origin.x = viewBounds.origin.x;
    svFrame.origin.y = viewBounds.size.height*0.25;
    svFrame.size.width = viewBounds.size.width;
    svFrame.size.height = viewBounds.size.height*0.7;
    _sv.frame = svFrame;
    _sv.scrollEnabled = YES;
    _sv.userInteractionEnabled = YES;
    //[self printFrame:svFrame];
    
    //边缘不弹跳
    _sv.bounces = NO;
    //整页滚动
    //sv.pagingEnabled = YES;
    _sv.showsVerticalScrollIndicator = NO;
   //_sv.backgroundColor = [UIColor colorWithRed:128.0f/255.0f green:128.0f/255.0f blue:1.0f  alpha:1];
    
    //375宽 150图片宽 111:80比例
    //@autoreleasepool{
        CGFloat width = svFrame.size.width*0.4;
        CGFloat height = width*0.72;
        CGFloat interval = (svFrame.size.width-width*2)/3;
    
    //创建buttonLabel
    UILabel* buttonLabel = [[UILabel alloc] init];
    buttonLabel.text = @"点击体验";
    buttonLabel.textAlignment = NSTextAlignmentCenter;   //居中
    buttonLabel.textColor = [UIColor whiteColor];
    buttonLabel.adjustsFontSizeToFitWidth = YES;
    CGRect butttonLabelFrame = CGRectZero;
    butttonLabelFrame.size.width = _button.frame.size.width;
    butttonLabelFrame.size.height = interval;
    butttonLabelFrame.origin.x = _button.frame.origin.x;//居中
    butttonLabelFrame.origin.y = _button.frame.origin.y+_button.frame.size.height;
    buttonLabel.frame = butttonLabelFrame;
    [self.view addSubview:buttonLabel];
    [buttonLabel release];
    
    _array = [[NSArray alloc] initWithObjects:@"霸王龙",@"食肉牛龙",@"无齿翼龙",@"梁龙",@"霸王龙2",@"混鱼龙",@"剑龙",@"腔骨龙",nil];
        for(NSInteger i=0; i<IMAGECOUNT; i++){
            NSString* name = [NSString stringWithFormat:@"%2d",i+11];
            //NSString *path = [[NSBundle mainBundle] pathForResource:name ofType:@"jpg"];
            //UIImage* image = [[UIImage alloc] initWithContentsOfFile:path];
            NSString* fullName = [name stringByAppendingString:@".jpg"];
            //不需要释放image
            UIImage* image = [UIImage imageNamed:fullName];
            UIImageView* imageView;
            imageView = [[UIImageView alloc]initWithImage:image];
            
            CGRect imageFrame = CGRectZero;
            imageFrame.size.width = width;
            imageFrame.size.height = height;
            if(i%2==0){
                imageFrame.origin.x = interval;
            }else{
                imageFrame.origin.x = interval*2+imageFrame.size.width;
            }
            NSInteger line = i/2;
            imageFrame.origin.y = (line+1)*interval+line*imageFrame.size.height;
            imageView.frame = imageFrame;
            [imageView setTag:i];
            //设置圆角 边缘颜色
            imageView.layer.cornerRadius = width/8;
            imageView.layer.borderWidth = 2;
            imageView.layer.borderColor = [UIColor whiteColor].CGColor;
            imageView.layer.masksToBounds = YES;
            [_sv addSubview:imageView];
            //手势处理 单击
            imageView.userInteractionEnabled = YES;
            imageView.multipleTouchEnabled = YES;
            UITapGestureRecognizer* gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleSingle:)];
            gesture.numberOfTapsRequired = 1;
            //gesture.numberOfTouchesRequired = 1;
            [imageView addGestureRecognizer:gesture];
            
            //设置label
            UILabel* label = [[UILabel alloc] init];
            label.text = _array[i];
            label.textAlignment = NSTextAlignmentCenter;   //居中
            label.textColor = [UIColor whiteColor];
            label.adjustsFontSizeToFitWidth = YES;
            CGRect labelFrame = CGRectZero;
            labelFrame.size.width = imageFrame.size.width/2;
            labelFrame.size.height = interval;
            labelFrame.origin.x = imageFrame.origin.x+imageFrame.size.width/4;//居中
            labelFrame.origin.y = imageFrame.origin.y+imageFrame.size.height;
            label.frame = labelFrame;
            [_sv addSubview:label];
           
            [imageView release];
            image = nil;
            imageView = nil;
            [label release];
            label = nil;
        }
    //}
   // _sv.delegate = self;
    //必须留足4个图片高度+间隔 共计sv.frame.size.width*1.418
    _sv.contentSize = CGSizeMake(_sv.frame.size.width,_sv.frame.size.width*1.5);
    //设置圆角 边缘
    _sv.layer.cornerRadius = width/8;
    //_sv.layer.borderWidth = 2;
    //_sv.layer.borderColor = [UIColor whiteColor].CGColor;
    _sv.layer.masksToBounds = YES;
    [self.view addSubview:_sv];
   
    //[self.view addSubview:_biv];

}

- (void)didReceiveMemoryWarning {
    //释放self.view
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}

//单指
- (void)handleSingle:(UITapGestureRecognizer*)sender
{
    NSInteger tag = sender.view.tag+11;
    NSString* name = [NSString stringWithFormat:@"%2d",tag];
    NSString* fullName = [name stringByAppendingString:@".jpg"];
    //不需要释放image
    /*
    UIImage* image = [UIImage imageNamed:fullName];
    UIImageView* imageView;
    imageView = [[UIImageView alloc]initWithImage:image];
    CGRect frame = CGRectZero;
    frame.size.width = _uiv.bounds.size.width;
    frame.size.height = frame.size.width*0.72;
    frame.origin.x = _uiv.bounds.origin.x;
    frame.origin.y = _uiv.bounds.size.height/5;
    imageView.frame = frame;
    
    */
    _picvc.imageName = fullName;
    [_picvc setImage];
    [self.view addSubview:_picvc.view];
}

-(void)scrollViewDidScroll:(UIScrollView*)scrollView{
    //CGPoint offset = scrollView.contentOffset;
}

-(void)backUnity{
    //第一次启动
    UnityAppController *uac = GetAppController();
    if([uac isFirstStarted]){
        
        //进度显示
        LoadViewController *lvc = [[LoadViewController alloc] init];
        CGRect lvcFrame = self.view.bounds;
        lvc.view.frame = lvcFrame;
        [uac performSelector:@selector(startUnity:) withObject:lvc afterDelay:0.2];
        [self.view addSubview:lvc.view];
        //[lvc release];
    }else{
        //[_sv.subviews makeObjectsPerformSelector:@selector(removeFromSuperview)];
        //[_button removeFromSuperview];
        //[_sv removeFromSuperview];
        //[self.view removeFromSuperview];
        //[self release];
        [uac bringROOTVFirst];
    }
}
/*
-(void)printFrame:(CGRect)frame{
    NSLog([NSString stringWithFormat:@"%g",frame.origin.x]);
    NSLog([NSString stringWithFormat:@"%g",frame.origin.y]);
    NSLog([NSString stringWithFormat:@"%g",frame.size.width]);
    NSLog([NSString stringWithFormat:@"%g",frame.size.height]);
}
*/
//屏蔽触摸
-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
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
    NSLog(@"mainview dealloc");
    [_array release];
    [_picvc release];
    [_button release];
    [_sv release];
    [super dealloc];
}
@end
