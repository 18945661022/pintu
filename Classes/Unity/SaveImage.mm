//
//  SaveImage.m
//  Unity-iPhone
//
//  Created by Apple on 2017/11/10.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "AppFileManager.h"
#import "SaveImage.h"

@implementation SaveImage : NSObject

-(NSString*)saveImageToPhotos:(UIImage*)savedImage
{
    //内存泄露
    /***
    UIImageWriteToSavedPhotosAlbum(savedImage, self, @selector(imageFunc:didFinishSavingWithError:contextInfo:),NULL);
    NSLog(@"2count is %d",savedImage.retainCount);
     ***/
    //photos框架 采用同步方式
    NSError *error = nil;
    [[PHPhotoLibrary sharedPhotoLibrary] performChangesAndWait:^{[PHAssetChangeRequest creationRequestForAssetFromImage:savedImage];} error:&error];
    //NSLog(@"2count is %d",savedImage.retainCount);
    /****
     //异步方式
    [[PHPhotoLibrary sharedPhotoLibrary] performChanges:^{[PHAssetChangeRequest creationRequestForAssetFromImage:savedImage];} completionHandler:^(BOOL success,NSError* _Nullable error){}];
     ****/
    //NSLog(@"error is %@",[error localizedDescription]);
    //删除缓存
    if(self.clearFlag){
        [AppFileManager clearFile:self.path];
    }
    NSString* msg = nil;
    if(error != nil){
        msg = @"照片保存失败";
        //NSLog(@"error is %@",[error localizedDescription]);
    }else{
        msg = @"照片已经保存到相册";
    }
    return msg;
    /***
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"照片保存结果" message:msg delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil];
    [alert show];
    ***/
    
    
}

/***
//内存泄露
//callback
-(void)imageFunc: (UIImage*)image didFinishSavingWithError:(NSError*) error contextInfo:(void*)
contextInfo
{
    NSString* msg = nil;
    if(error != NULL){
        msg = @"照片保存失败";
    }else{
        msg = @"照片已经保存到相册";
    }
    //删除缓存
    if(self.clearFlag){
        NSLog(@"del file");
        [AppFileManager clearFile:self.path];
    }
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"照片保存结果" message:msg delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil];
    [alert show];
}
****/
@end
