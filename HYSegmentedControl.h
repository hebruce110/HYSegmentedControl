//
//  ICPSegmentedControl.h
//  iCardPayment
//
//  Created by Yuan on 13-9-3.
//

#import <UIKit/UIKit.h>

typedef void(^selectedBlcok) (NSInteger  segmentIndex);

@interface HYSegmentedControl : UIView
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic,strong) UIFont *font;
@property (nonatomic,strong) UIColor *bgColor;
@property (nonatomic,strong) UIColor *itemBackGroundColor;
@property (nonatomic,strong) UIColor *textColor;
@property (nonatomic,strong) UIColor *textSelectColor;

- (id)initWithFrame:(CGRect)frame items:(NSArray*)items andSelectionBlock:(selectedBlcok)block;

@end
