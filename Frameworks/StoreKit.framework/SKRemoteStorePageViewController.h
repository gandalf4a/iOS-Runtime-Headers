/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController> {
    SKStorePageViewController *_storePageViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) SKStorePageViewController *storePageViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)setStorePageViewController:(id)arg1;
- (void)showProductPageWithItemIdentifier:(id)arg1;
- (id)storePageViewController;

@end
