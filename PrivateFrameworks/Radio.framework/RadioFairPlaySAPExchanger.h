/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioFairPlaySAPExchanger : NSObject {
    RadioFairPlaySAPContext *_SAPContext;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    } _hardwareInfo;
    struct FPSAPContextOpaque_ { } *_session;
}

@property (nonatomic, readonly) RadioFairPlaySAPContext *SAPContext;

- (void).cxx_destruct;
- (id)SAPContext;
- (void)dealloc;
- (id)exchangeData:(id)arg1 error:(id*)arg2;
- (id)init;

@end