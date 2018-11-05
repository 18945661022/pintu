//
//  AppFileManager.m
//  Unity-iPhone
//
//  Created by Apple on 2017/12/24.
//

#import <Foundation/Foundation.h>

@interface AppFileManager : NSObject


@end

@implementation AppFileManager: NSObject

+(BOOL)clearFile:(NSString*)path{
    NSError *error = nil;
    [[NSFileManager defaultManager] removeItemAtPath:path error:&error];
    if(error){
        NSLog(@"error is %@",[error localizedDescription]);
        return NO;
    }else{
        NSLog(@"no error");
        return YES;
    }
}

@end
