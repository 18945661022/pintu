//
//  ViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/12/11.
//

#import "SplashViewController.h"
#import "UnityAppController.h"

#define IMAGECOUNT 2

@interface SplashViewController ()
//@property (retain, nonatomic) IBOutlet NSLayoutConstraint *viewHeightConstraint;
//@property (retain, nonatomic) IBOutlet NSLayoutConstraint *viewWidthConstraint;
@property (nonatomic, strong) UIPageControl *pageControl;
@property (nonatomic, strong) UIScrollView *sv;


@end

@implementation SplashViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    _sv = [[UIScrollView alloc] init];
    _sv.frame = self.view.bounds;
    //边缘不弹跳
    _sv.bounces = NO;
    //整页滚动
    _sv.pagingEnabled = YES;
    _sv.showsHorizontalScrollIndicator = NO;
    
    for(NSInteger i=0; i<IMAGECOUNT; i++){
        NSString* name = [NSString stringWithFormat:@"%1d",i+1];
        NSString *path = [[NSBundle mainBundle] pathForResource:name ofType:@"jpg"];
        UIImage* image = [[UIImage alloc] initWithContentsOfFile:path];
        UIImageView* imageView = [[UIImageView alloc]initWithImage:image];
        CGRect frame = CGRectZero;
        frame.origin.x = i*_sv.frame.size.width;
        frame.size = _sv.frame.size;
        imageView.frame = frame;
        [_sv addSubview:imageView];
        
        //最后一页增加"立即体验"
        if(i == IMAGECOUNT-1){
            imageView.userInteractionEnabled = YES;
            
            UIButton *button = [[UIButton alloc] init];
            
            button.frame = CGRectMake((imageView.frame.size.width-150)/2,imageView.frame.size.height*0.8,150,40);
            button.backgroundColor = [UIColor orangeColor];
            [button setTitle:@"立即体验" forState:UIControlStateNormal];
            button.titleLabel.font = [UIFont boldSystemFontOfSize:16];
            button.titleLabel.textColor = [UIColor whiteColor];
            [imageView addSubview:button];
            [button addTarget:self  action:@selector(enter) forControlEvents:UIControlEventTouchUpInside];
        }
    }
    
    _sv.contentSize = CGSizeMake(IMAGECOUNT*_sv.frame.size.width,_sv.frame.size.height);
    [self.view addSubview:_sv];
    
    //加入pageControl
    UIPageControl *pageControl = [[UIPageControl alloc] init];
    self.pageControl = pageControl;
    pageControl.frame = CGRectMake(0, self.view.frame.size.height*0.8+50, self.view.frame.size.width, 20);
    pageControl.numberOfPages = IMAGECOUNT;
    pageControl.pageIndicatorTintColor = [UIColor whiteColor];
    pageControl.currentPageIndicatorTintColor = [UIColor redColor];
    
    pageControl.userInteractionEnabled = NO;
    [self.view addSubview:pageControl];
    _sv.delegate = self;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)updateViewConstraints{
    [ super updateViewConstraints];
    //self.viewWidthConstraint.constant = CGRectGetWidth([UIScreen mainScreen].bounds)*2;
    //self.viewHeightConstraint.constant = CGRectGetHeight([UIScreen mainScreen].bounds);
}

-(void) enter{
    [self.view removeFromSuperview];
}

-(void)scrollViewDidScroll:(UIScrollView*)scrollView{
    CGPoint offset = scrollView.contentOffset;
    if(offset.x<=0){
        offset.x = 0;
        scrollView.contentOffset = offset;
    }
    NSUInteger index = round(offset.x / scrollView.frame.size.width);
    self.pageControl.currentPage = index;
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
    [_pageControl release];
    [_sv release];
    [super dealloc];
}
@end
