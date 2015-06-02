/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKJoystickButtonItem : NSObject {
    SEL _action;
    UIView<CKJoystickButton> *_button;
    BOOL _highlighted;
    UIImage *_image;
    SEL _tapAction;
    id _target;
    NSString *_title;
    UIView *_view;
}

@property (nonatomic) SEL action;
@property (nonatomic, retain) UIView<CKJoystickButton> *button;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) SEL tapAction;
@property (nonatomic) id target;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIView *view;

- (SEL)action;
- (id)button;
- (void)dealloc;
- (id)image;
- (id)initWithImage:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tapAction:(SEL)arg5;
- (BOOL)isHighlighted;
- (id)loadButton;
- (void)sendActionFrom:(id)arg1 forEvent:(id)arg2;
- (void)sendTapActionFrom:(id)arg1 forEvent:(id)arg2;
- (void)setAction:(SEL)arg1;
- (void)setButton:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setTapAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setView:(id)arg1;
- (SEL)tapAction;
- (id)target;
- (id)title;
- (id)view;

@end