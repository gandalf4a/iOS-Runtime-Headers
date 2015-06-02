/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalimeter : NSObject {
    CMNatalimeterInternal *_internal;
}

@property (nonatomic, readonly) CMNatalimeterInternal *_internal;

+ (id)defaultUserProfile;
+ (BOOL)isNatalimeterAvailable;
+ (id)maxNatalieEntries;
+ (BOOL)setUserProfile:(id)arg1 error:(id*)arg2;
+ (id)userProfile;

- (id)_internal;
- (void)dealloc;
- (unsigned int)getSupportedMetricsForSession:(int)arg1;
- (id)init;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(int)arg1 withHandler:(id /* block */)arg2;
- (void)setSession:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end