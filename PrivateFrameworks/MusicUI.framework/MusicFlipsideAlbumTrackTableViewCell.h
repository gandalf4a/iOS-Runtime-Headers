/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicFlipsideAlbumTrackTableViewCell : MusicCollectionTrackTableViewCell {
    MPURatingControl *_ratingControl;
    BOOL _showsRatingControl;
}

@property (nonatomic, readonly) MPURatingControl *ratingControl;
@property (nonatomic) BOOL showsRatingControl;

+ (Class)contentViewClass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)ratingControl;
- (void)setContentBoundsEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setShowsRatingControl:(BOOL)arg1;
- (void)setShowsRatingControl:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showsRatingControl;

@end