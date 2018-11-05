//
//  UnityIOS.m
//  Unity-iPhone
//
//  Created by Apple on 2017/11/9.
//

#import <Foundation/Foundation.h>
#import "UnityIOS.h"
#import "SaveImage.h"
#import "UnityAppController.h"
#import "MainViewController.h"
#import "WXShareViewController.h"
#import "WXApi.h"
#import "AppFileManager.h"


@implementation UnityIOS
+(NSString*)getFileName
{
    NSDate* now = [NSDate date];
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd-HH-mm-ss"];
    NSString* date = [formatter stringFromDate:now];
    return [date stringByAppendingString:@".jpg"];
}

-(bool)IsWXWork
{
    bool flag = [WXApi isWXAppInstalled];
    if(!flag)
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"" message:@"没有安装微信" delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil];
        [alert show];
        return flag;
    }else{
        flag = [WXApi isWXAppSupportApi];
        if(!flag)
        {
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"" message:@"微信不支持" delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil];
            [alert show];
        }
    }
    return flag;
}
@end

#if defined(__cplusplus)
extern "C" {
#endif
    char* getPath(){
        NSString *fileName = [UnityIOS getFileName];
        NSLog(@"filename is %@",fileName);
        char* x = (char*)malloc(strlen([fileName UTF8String])+1);   //bixufenpeikongjian
        strcpy(x,[fileName UTF8String]);
        return x;
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void notifyPhotos(char* path){
        NSString* imagePath = [NSString stringWithUTF8String:path];
        UIImage* image = [[UIImage alloc] initWithContentsOfFile:imagePath];
        //NSLog(@"1count is %d",image.retainCount);
        /**/
        SaveImage* saveImage = [[SaveImage alloc] init];
        //saveImage.clearFlag = YES;
        saveImage.path = imagePath;
        NSString*  msg = [saveImage saveImageToPhotos:image];
        [image release];
        UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"照片保存结果" message:msg preferredStyle:UIAlertControllerStyleAlert];
        UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil];
        [ac addAction:okAction];
        UnityAppController* uac = GetAppController();
        [uac.rootViewController presentViewController:ac animated:YES completion:nil ];
         /***/
        //NSLog(@"4count is %d",image.retainCount);
        //[AppFileManager clearFile:imagePath];
        [saveImage release];
     }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void getUnityTargetShare(char* path){
        
        //判断微信是否存在
        UnityIOS* unityIOS = [[UnityIOS alloc] init];
        if(!unityIOS.IsWXWork){
            [unityIOS release];
            return;
        }else{
            [unityIOS release];
        }
        UnityAppController* uac = GetAppController();
        //WXShareViewController* wxvc = [[WXShareViewController alloc] init];
        NSString* imagePath = [NSString stringWithUTF8String:path];
        UIImage* image = [[UIImage alloc] initWithContentsOfFile:imagePath];
        [uac setWXSVCPath:imagePath];
        [uac setWXSCVCImage:image];
        NSLog(@"1count is %u",image.retainCount);
        [image release];
        image = nil;
        [uac bringWXSVFirst];
        
        //NSLog(_wxvc.path);
        // (true);
        //[uac.window addSubview:wxvc.view];
        //uac.window.rootViewController = wxvc;
        //[wxvc.imageView setImage:image];
        
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    char* getMessageFromUnity3d(int orderId,char* msg){
        return NULL;
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void unityInitialize(){

    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void backIOS(){
        UnityAppController* uac = GetAppController();
        [uac bringMVFirst];
        /**
        MainViewController* mv = [[MainViewController alloc] init];
        uac.rootView.autoresizesSubviews=YES;
        CGRect parentBounds = uac.rootView.bounds;
        CGFloat x = parentBounds.origin.x;
        CGFloat y = parentBounds.origin.y;
        CGFloat width = parentBounds.size.width;
        CGFloat height = parentBounds.size.height;
        //子视图在父视图中的大小
        mv.view.frame = CGRectMake(x, y, width, height);
        //mv.view.backgroundColor = [UIColor colorWithRed:128.0f/255.0f green:128.0f/255.0f blue:1.0f  alpha:1];
        [uac.rootView addSubview:mv.view];
        ***/
    }
#if defined(__cplusplus)
}
#endif








