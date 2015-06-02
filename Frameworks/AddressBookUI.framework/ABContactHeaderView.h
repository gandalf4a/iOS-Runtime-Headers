/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactHeaderView : UIView {
    CNContact *_contact;
    CNContactStyle *_contactStyle;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentMargins;
    <ABPresenterDelegate> *_delegate;
    NSMutableArray *_headerConstraints;
    <ABContactHeaderViewDelegate> *_headerDelegate;
    NSDictionary *_nameTextAttributes;
    BOOL _needsReload;
    ABContactPhotoView *_photoView;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentMargins;
@property (nonatomic) <ABPresenterDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *headerConstraints;
@property (nonatomic) <ABContactHeaderViewDelegate> *headerDelegate;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic, readonly) ABContactPhotoView *photoView;

- (id)contact;
- (id)contactStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentMargins;
- (void)dealloc;
- (id)delegate;
- (id)headerConstraints;
- (id)headerDelegate;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)nameTextAttributes;
- (id)photoView;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)saveContactPhoto;
- (void)setContactStyle:(id)arg1;
- (void)setContentMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderConstraints:(id)arg1;
- (void)setHeaderDelegate:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNeedsReload;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateWithNewContact:(id)arg1;

@end