/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {
    GEOPDAutocompleteParameters *_autocompleteParameters;
    GEOPDCanonicalLocationSearchParameters *_canonicalLocationSearchParameters;
    GEOPDGeocodingParameters *_geocodingParameters;
    GEOPDLocationDirectedSearchParameters *_locationDirectedSearchParameters;
    GEOPDMerchantLookupParameters *_merchantLookupParameters;
    GEOPDPlaceLookupParameters *_placeLookupParameters;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOPDReverseGeocodingParameters *_reverseGeocodingParameters;
    GEOPDSearchParameters *_searchParameters;
    GEOPDSiriSearchParameters *_siriSearchParameters;
}

@property (nonatomic, retain) GEOPDAutocompleteParameters *autocompleteParameters;
@property (nonatomic, retain) GEOPDCanonicalLocationSearchParameters *canonicalLocationSearchParameters;
@property (nonatomic, retain) GEOPDGeocodingParameters *geocodingParameters;
@property (nonatomic, readonly) BOOL hasAutocompleteParameters;
@property (nonatomic, readonly) BOOL hasCanonicalLocationSearchParameters;
@property (nonatomic, readonly) BOOL hasGeocodingParameters;
@property (nonatomic, readonly) BOOL hasLocationDirectedSearchParameters;
@property (nonatomic, readonly) BOOL hasMerchantLookupParameters;
@property (nonatomic, readonly) BOOL hasPlaceLookupParameters;
@property (nonatomic, readonly) BOOL hasPlaceRefinementParameters;
@property (nonatomic, readonly) BOOL hasReverseGeocodingParameters;
@property (nonatomic, readonly) BOOL hasSearchParameters;
@property (nonatomic, readonly) BOOL hasSiriSearchParameters;
@property (nonatomic, retain) GEOPDLocationDirectedSearchParameters *locationDirectedSearchParameters;
@property (nonatomic, retain) GEOPDMerchantLookupParameters *merchantLookupParameters;
@property (nonatomic, retain) GEOPDPlaceLookupParameters *placeLookupParameters;
@property (nonatomic, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, retain) GEOPDReverseGeocodingParameters *reverseGeocodingParameters;
@property (nonatomic, retain) GEOPDSearchParameters *searchParameters;
@property (nonatomic, retain) GEOPDSiriSearchParameters *siriSearchParameters;

- (id)autocompleteParameters;
- (id)canonicalLocationSearchParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geocodingParameters;
- (BOOL)hasAutocompleteParameters;
- (BOOL)hasCanonicalLocationSearchParameters;
- (BOOL)hasGeocodingParameters;
- (BOOL)hasLocationDirectedSearchParameters;
- (BOOL)hasMerchantLookupParameters;
- (BOOL)hasPlaceLookupParameters;
- (BOOL)hasPlaceRefinementParameters;
- (BOOL)hasReverseGeocodingParameters;
- (BOOL)hasSearchParameters;
- (BOOL)hasSiriSearchParameters;
- (unsigned int)hash;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;
- (id)initWithCoordinateHint:(struct { double x1; double x2; })arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)locationDirectedSearchParameters;
- (id)merchantLookupParameters;
- (void)mergeFrom:(id)arg1;
- (id)placeLookupParameters;
- (id)placeRefinementParameters;
- (BOOL)readFrom:(id)arg1;
- (id)reverseGeocodingParameters;
- (id)searchParameters;
- (void)setAutocompleteParameters:(id)arg1;
- (void)setCanonicalLocationSearchParameters:(id)arg1;
- (void)setGeocodingParameters:(id)arg1;
- (void)setLocationDirectedSearchParameters:(id)arg1;
- (void)setMerchantLookupParameters:(id)arg1;
- (void)setPlaceLookupParameters:(id)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setReverseGeocodingParameters:(id)arg1;
- (void)setSearchParameters:(id)arg1;
- (void)setSiriSearchParameters:(id)arg1;
- (id)siriSearchParameters;
- (void)writeTo:(id)arg1;

@end