//
//  MyView.h
//  DrawWall
//
//  Created by gll on 13-1-2.
//  Copyright (c) 2013年 gll. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface MyView : UIView

//@property (nonatomic,strong) NSMutableArray *pointArray;
//static NSMutableArray *pointArray;
// get point  in view
-(void)addPA:(CGPoint)nPoint;//更新坐标
-(void)addLA;

-(void)revocation;//撤销
-(void)refrom;//重绘
-(void)clear;//全部清除
-(void)setLineColor:(UIColor *)color;//线条颜色
-(void)setlineWidth:(CGFloat)width;//线条宽度

@end
