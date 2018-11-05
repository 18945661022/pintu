//
//  SaveImage.h
//  Unity-iPhone
//
//  Created by Apple on 2017/11/10.
//

#ifndef SaveImage_h
#define SaveImage_h
#import <Foundation/Foundation.h>

@interface SaveImage : NSObject

@property(nonatomic,assign)BOOL clearFlag;
@property(nonatomic,copy)NSString* path;
-(NSString*)saveImageToPhotos:(UIImage*)savedImage;
//callback
//-(void)image: (UIImage*)image didFinishSavingWithError:(NSError*) error contextInfo:(void*)
//contextInfo;

@end

#endif /* SaveImage_h */
