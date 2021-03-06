/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPlayerEmailInternal : GKInternalRepresentation {
    NSString *_address;
    NSString *_addressPrefix;
    NSString *_addressSHA1;
    BOOL _verified;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *addressPrefix;
@property (nonatomic, retain) NSString *addressSHA1;
@property (nonatomic) BOOL verified;

+ (id)secureCodedPropertyKeys;

- (id)address;
- (id)addressPrefix;
- (id)addressSHA1;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAddressPrefix:(id)arg1;
- (void)setAddressSHA1:(id)arg1;
- (void)setVerified:(BOOL)arg1;
- (BOOL)verified;

@end
