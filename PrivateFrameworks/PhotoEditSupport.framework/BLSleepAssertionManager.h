/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLSleepAssertionManager : NSObject {
    int m_assertionCount;
    int m_assertionLock;
    NSObject<OS_dispatch_semaphore> *m_assertionSemaphore;
    int m_idleCount;
    int m_idleLock;
    BOOL m_waiting;
}

+ (id)sharedInstance;

- (id)autorelease;
- (void)dealloc;
- (id)hidden;
- (id)init;
- (oneway void)release;
- (void)releaseIdleAssertion;
- (void)releaseSleepAssertion;
- (id)retain;
- (void)takeIdleAssertion;
- (void)takeSleepAssertion;
- (void)waitForOutstandingSleepAssertions;

@end
