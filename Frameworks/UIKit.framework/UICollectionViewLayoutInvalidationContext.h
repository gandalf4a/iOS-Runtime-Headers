/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewLayoutInvalidationContext : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffsetAdjustment;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSizeAdjustment;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    struct { 
        unsigned int invalidateDataSource : 1; 
        unsigned int invalidateEverything : 1; 
    } _invalidationContextFlags;
    NSArray *_updateItems;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { float x1; float x2; } contentSizeAdjustment;
@property (nonatomic) BOOL invalidateDataSourceCounts;
@property (nonatomic) BOOL invalidateEverything;
@property (nonatomic, readonly) NSDictionary *invalidatedDecorationIndexPaths;
@property (nonatomic, readonly) NSArray *invalidatedItemIndexPaths;
@property (nonatomic, readonly) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (getter=_updateItems, setter=_setUpdateItems:, nonatomic) NSArray *updateItems;

- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)_invalidatedSupplementaryViews;
- (void)_setInvalidateDataSourceCounts:(BOOL)arg1;
- (void)_setInvalidateEverything:(BOOL)arg1;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (void)_setUpdateItems:(id)arg1;
- (id)_updateItems;
- (struct CGPoint { float x1; float x2; })contentOffsetAdjustment;
- (struct CGSize { float x1; float x2; })contentSizeAdjustment;
- (void)dealloc;
- (BOOL)invalidateDataSourceCounts;
- (void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (BOOL)invalidateEverything;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)invalidatedDecorationIndexPaths;
- (id)invalidatedItemIndexPaths;
- (id)invalidatedSupplementaryIndexPaths;
- (void)setContentOffsetAdjustment:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentSizeAdjustment:(struct CGSize { float x1; float x2; })arg1;

@end