/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyOperation : BROperation {
    id /* block */ _shareCopyCompletionBlock;
    NSURL *_url;
}

@property (copy) id /* block */ shareCopyCompletionBlock;
@property (nonatomic, retain) NSURL *url;

- (void)dealloc;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setShareCopyCompletionBlock:(id /* block */)arg1;
- (void)setUrl:(id)arg1;
- (id /* block */)shareCopyCompletionBlock;
- (id)url;

@end