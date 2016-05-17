//
//  LYVideo.h
//  
//
//  Created by 李胜营 on 16/5/16.
//
//

#import <Foundation/Foundation.h>

@interface LYVideo : NSObject
/** ID */
@property (nonatomic, assign) NSInteger ID;
/** 视频名字 */
@property (nonatomic, copy) NSString *name;
/** 视频时长 */
@property (nonatomic, assign) NSInteger length;
/** 视频图片 */
@property (nonatomic, copy) NSString *image;
/** 视频文件路径 */
@property (nonatomic, copy) NSString *url;
@end
