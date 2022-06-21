#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TableReservationKotlinThrowable, TableReservationKotlinArray<T>, TableReservationKotlinException, TableReservationMappingException, TableReservationArea, TableReservationApiAreasResponse, TableReservationCancelReservation, TableReservationApiCancelReservationByUser, TableReservationCity, TableReservationApiCitiesResponse, TableReservationReserve, TableReservationApiReservationReserveResponse, TableReservationReservation, TableReservationApiReservationResponse, TableReservationRestaurantsAvailableSlots, TableReservationApiRestaurantsAvailableSlotsResponse, TableReservationSpecialOccasion, TableReservationApiSpecialOccasionsResponse, TableReservationApiAreaCompanion, TableReservationApiArea, TableReservationApiAreasPagedCompanion, TableReservationApiAreasPaged, TableReservationApiAreasResponseCompanion, TableReservationApiCancelReservationByUserCompanion, TableReservationCitiesList, TableReservationApiCitiesResponseCompanion, TableReservationApiCuisineCompanion, TableReservationApiCuisine, TableReservationApiCuisinesResponseCompanion, TableReservationApiCuisinesResponse, TableReservationApiReservationCompanion, TableReservationApiReservation, TableReservationApiReservationReserveCompanion, TableReservationApiReservationReserve, TableReservationApiReservationReserveResponseCompanion, TableReservationApiReservationResponseCompanion, TableReservationApiRestaurantSlotsCompanion, TableReservationApiRestaurantSlots, TableReservationApiRestaurantsAvailableSlotsResponseCompanion, TableReservationApiSpecialOccasionsCompanion, TableReservationApiSpecialOccasions, TableReservationApiSpecialOccasionsResponseCompanion, TableReservationApiVenueFeature, TableReservationApiVenueParking, TableReservationApiVenuePaymentOption, TableReservationApiVenuePic, TableReservationApiVenueWorkingDays, TableReservationApiVenueCuisine, TableReservationApiVenueCompanion, TableReservationApiVenue, TableReservationApiVenueByIdResponseCompanion, TableReservationApiVenueByIdResponse, TableReservationApiVenueCuisineCompanion, TableReservationApiVenueFeatureCompanion, TableReservationApiVenuePagedCompanion, TableReservationApiVenuePaged, TableReservationApiVenueParkingCompanion, TableReservationApiVenuePaymentOptionCompanion, TableReservationApiVenuePicCompanion, TableReservationApiVenueResponseCompanion, TableReservationApiVenueResponse, TableReservationVenueWorkingHour, TableReservationApiVenueWorkingDaysCompanion, TableReservationApiZoneTypeCompanion, TableReservationApiZoneType, TableReservationApiZoneTypeResponseCompanion, TableReservationApiZoneTypeResponse, TableReservationCitiesListCompanion, TableReservationGetAreasList, TableReservationGetRestaurantsAvailableSlots, TableReservationGetVenuesList, TableReservationRemoteErrorCompanion, TableReservationRemoteError, TableReservationVenueWorkingHourCompanion, TableReservationCancelReservationByUserRequestCompanion, TableReservationCancelReservationByUserRequest, TableReservationReserveRequestModelCompanion, TableReservationReserveRequestModel, TableReservationCuisine, TableReservationVenueFeature, TableReservationVenue, TableReservationVenueFeatureCompanion, TableReservationZoneType, TableReservationCoreViewModelCompanion, TableReservationCoreViewModel, TableReservationRestaurantAvailabilityEvents, TableReservationRestaurantAvailabilityViewState, TableReservationCoreCommonFlow<T>, TableReservationHomeReservationEvents, TableReservationHomeReservationEventsFilterByArea, TableReservationHomeReservationEventsFilterVenues, TableReservationHomeReservationEventsGetAreas, TableReservationHomeReservationEventsGetCitiesList, TableReservationHomeReservationEventsGetCuisines, TableReservationHomeReservationEventsGetReservations, TableReservationHomeReservationEventsGetVenueList, TableReservationHomeReservationEventsGetZones, TableReservationHomeReservationEventsInit, TableReservationHomeReservationEventsSearchVenues, TableReservationHomeReservationViewState, TableReservationReservationDetailsEvents, TableReservationReservationDetailsEventsCancelReservation, TableReservationReservationDetailsViewState, TableReservationReservationPaymentEvents, TableReservationReservationPaymentEventsGetSpecialOccasions, TableReservationReservationPaymentEventsReserve, TableReservationReservationPaymentViewState, TableReservationRestaurantAvailabilityEventsCheckAvailability, TableReservationRestaurantDetailsEvents, TableReservationRestaurantDetailsEventsGetById, TableReservationRestaurantDetailsViewState, TableReservationConfig, TableReservationKotlinUnit, TableReservationKotlinx_serialization_coreSerializersModule, TableReservationKotlinx_serialization_coreSerialKind, TableReservationKotlinNothing, TableReservationKotlinRuntimeException, TableReservationKotlinIllegalStateException;

@protocol TableReservationCoreApiMapper, TableReservationKotlinx_serialization_coreKSerializer, TableReservationKotlinx_coroutines_coreCoroutineScope, TableReservationCoreViewState, TableReservationKotlinIterator, TableReservationKotlinx_serialization_coreEncoder, TableReservationKotlinx_serialization_coreSerialDescriptor, TableReservationKotlinx_serialization_coreSerializationStrategy, TableReservationKotlinx_serialization_coreDecoder, TableReservationKotlinx_serialization_coreDeserializationStrategy, TableReservationKotlinCoroutineContext, TableReservationKotlinx_coroutines_coreFlowCollector, TableReservationKotlinx_coroutines_coreFlow, TableReservationKtor_ioCloseable, TableReservationKotlinx_serialization_coreCompositeEncoder, TableReservationKotlinAnnotation, TableReservationKotlinx_serialization_coreCompositeDecoder, TableReservationKotlinCoroutineContextElement, TableReservationKotlinCoroutineContextKey, TableReservationKotlinx_serialization_coreSerializersModuleCollector, TableReservationKotlinKClass, TableReservationKotlinKDeclarationContainer, TableReservationKotlinKAnnotatedElement, TableReservationKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface TableReservationBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface TableReservationBase (TableReservationBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface TableReservationMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TableReservationMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorTableReservationKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface TableReservationNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface TableReservationByte : TableReservationNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface TableReservationUByte : TableReservationNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface TableReservationShort : TableReservationNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface TableReservationUShort : TableReservationNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface TableReservationInt : TableReservationNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface TableReservationUInt : TableReservationNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface TableReservationLong : TableReservationNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface TableReservationULong : TableReservationNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface TableReservationFloat : TableReservationNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface TableReservationDouble : TableReservationNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface TableReservationBoolean : TableReservationNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface TableReservationKotlinThrowable : TableReservationBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (TableReservationKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface TableReservationKotlinException : TableReservationKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MappingException")))
@interface TableReservationMappingException : TableReservationKotlinException
- (instancetype)initWithMsg:(NSString *)msg __attribute__((swift_name("init(msg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (TableReservationMappingException *)doCopyMsg:(NSString *)msg __attribute__((swift_name("doCopy(msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *msg __attribute__((swift_name("msg")));
@end;

__attribute__((swift_name("CoreApiMapper")))
@protocol TableReservationCoreApiMapper
@required
- (id _Nullable)mapToDomainApiDTO:(id _Nullable)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAreasResponseMapper")))
@interface TableReservationApiAreasResponseMapper : TableReservationBase <TableReservationCoreApiMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<TableReservationArea *> *)mapToDomainApiDTO:(TableReservationApiAreasResponse *)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCancelReservationByUserMapper")))
@interface TableReservationApiCancelReservationByUserMapper : TableReservationBase <TableReservationCoreApiMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TableReservationCancelReservation *)mapToDomainApiDTO:(TableReservationApiCancelReservationByUser *)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCitiesResponseMapper")))
@interface TableReservationApiCitiesResponseMapper : TableReservationBase <TableReservationCoreApiMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<TableReservationCity *> *)mapToDomainApiDTO:(TableReservationApiCitiesResponse *)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationReserveResponseMapper")))
@interface TableReservationApiReservationReserveResponseMapper : TableReservationBase <TableReservationCoreApiMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TableReservationReserve *)mapToDomainApiDTO:(TableReservationApiReservationReserveResponse *)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationResponseMapper")))
@interface TableReservationApiReservationResponseMapper : TableReservationBase <TableReservationCoreApiMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<TableReservationReservation *> *)mapToDomainApiDTO:(TableReservationApiReservationResponse *)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiRestaurantsAvailableSlotsMapper")))
@interface TableReservationApiRestaurantsAvailableSlotsMapper : TableReservationBase <TableReservationCoreApiMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<TableReservationRestaurantsAvailableSlots *> *)mapToDomainApiDTO:(TableReservationApiRestaurantsAvailableSlotsResponse *)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiSpecialOccasionsResponseMapper")))
@interface TableReservationApiSpecialOccasionsResponseMapper : TableReservationBase <TableReservationCoreApiMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<TableReservationSpecialOccasion *> *)mapToDomainApiDTO:(TableReservationApiSpecialOccasionsResponse *)apiDTO __attribute__((swift_name("mapToDomain(apiDTO:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiArea")))
@interface TableReservationApiArea : TableReservationBase
- (instancetype)initWithId:(TableReservationInt * _Nullable)id nameAr:(NSString * _Nullable)nameAr nameEn:(NSString * _Nullable)nameEn latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude isActive:(TableReservationBoolean * _Nullable)isActive availableFrom:(NSString * _Nullable)availableFrom availableTo:(NSString * _Nullable)availableTo picUrl:(NSString * _Nullable)picUrl __attribute__((swift_name("init(id:nameAr:nameEn:latitude:longitude:isActive:availableFrom:availableTo:picUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiAreaCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (TableReservationDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (TableReservationBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (TableReservationApiArea *)doCopyId:(TableReservationInt * _Nullable)id nameAr:(NSString * _Nullable)nameAr nameEn:(NSString * _Nullable)nameEn latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude isActive:(TableReservationBoolean * _Nullable)isActive availableFrom:(NSString * _Nullable)availableFrom availableTo:(NSString * _Nullable)availableTo picUrl:(NSString * _Nullable)picUrl __attribute__((swift_name("doCopy(id:nameAr:nameEn:latitude:longitude:isActive:availableFrom:availableTo:picUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable availableFrom __attribute__((swift_name("availableFrom")));
@property (readonly) NSString * _Nullable availableTo __attribute__((swift_name("availableTo")));
@property (readonly) TableReservationInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) TableReservationBoolean * _Nullable isActive __attribute__((swift_name("isActive")));
@property (readonly) TableReservationDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) TableReservationDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@property (readonly) NSString * _Nullable picUrl __attribute__((swift_name("picUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiArea.Companion")))
@interface TableReservationApiAreaCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiAreaCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAreasPaged")))
@interface TableReservationApiAreasPaged : TableReservationBase
- (instancetype)initWithCurrentPage:(TableReservationInt * _Nullable)currentPage pageSize:(TableReservationInt * _Nullable)pageSize totalRows:(TableReservationInt * _Nullable)totalRows pages:(TableReservationInt * _Nullable)pages result:(NSArray<TableReservationApiArea *> * _Nullable)result __attribute__((swift_name("init(currentPage:pageSize:totalRows:pages:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiAreasPagedCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (TableReservationInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<TableReservationApiArea *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (TableReservationApiAreasPaged *)doCopyCurrentPage:(TableReservationInt * _Nullable)currentPage pageSize:(TableReservationInt * _Nullable)pageSize totalRows:(TableReservationInt * _Nullable)totalRows pages:(TableReservationInt * _Nullable)pages result:(NSArray<TableReservationApiArea *> * _Nullable)result __attribute__((swift_name("doCopy(currentPage:pageSize:totalRows:pages:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable currentPage __attribute__((swift_name("currentPage")));
@property (readonly) TableReservationInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@property (readonly) TableReservationInt * _Nullable pages __attribute__((swift_name("pages")));
@property (readonly) NSArray<TableReservationApiArea *> * _Nullable result __attribute__((swift_name("result")));
@property (readonly) TableReservationInt * _Nullable totalRows __attribute__((swift_name("totalRows")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAreasPaged.Companion")))
@interface TableReservationApiAreasPagedCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiAreasPagedCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAreasResponse")))
@interface TableReservationApiAreasResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiAreasPaged * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiAreasResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiAreasPaged * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiAreasResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiAreasPaged * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationApiAreasPaged * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAreasResponse.Companion")))
@interface TableReservationApiAreasResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiAreasResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCancelReservationByUser")))
@interface TableReservationApiCancelReservationByUser : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSString * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiCancelReservationByUserCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiCancelReservationByUser *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCancelReservationByUser.Companion")))
@interface TableReservationApiCancelReservationByUserCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiCancelReservationByUserCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCitiesResponse")))
@interface TableReservationApiCitiesResponse : TableReservationBase
- (instancetype)initWithCitieslist:(NSArray<TableReservationCitiesList *> * _Nullable)citieslist __attribute__((swift_name("init(citieslist:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiCitiesResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<TableReservationCitiesList *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (TableReservationApiCitiesResponse *)doCopyCitieslist:(NSArray<TableReservationCitiesList *> * _Nullable)citieslist __attribute__((swift_name("doCopy(citieslist:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationCitiesList *> * _Nullable citieslist __attribute__((swift_name("citieslist")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCitiesResponse.Companion")))
@interface TableReservationApiCitiesResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiCitiesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCuisine")))
@interface TableReservationApiCuisine : TableReservationBase
- (instancetype)initWithId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("init(id:nameEn:nameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiCuisineCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiCuisine *)doCopyId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("doCopy(id:nameEn:nameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCuisine.Companion")))
@interface TableReservationApiCuisineCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiCuisineCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCuisinesResponse")))
@interface TableReservationApiCuisinesResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiCuisine *> * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiCuisinesResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationApiCuisine *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiCuisinesResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiCuisine *> * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationApiCuisine *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiCuisinesResponse.Companion")))
@interface TableReservationApiCuisinesResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiCuisinesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservation")))
@interface TableReservationApiReservation : TableReservationBase
- (instancetype)initWithId:(NSString * _Nullable)id startTime:(NSString * _Nullable)startTime endTime:(NSString * _Nullable)endTime totalAmount:(TableReservationDouble * _Nullable)totalAmount remarks:(NSString * _Nullable)remarks referenceNo:(NSString * _Nullable)referenceNo createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt statusAr:(NSString * _Nullable)statusAr statusEn:(NSString * _Nullable)statusEn tableTypeAr:(NSString * _Nullable)tableTypeAr tableTypeEn:(NSString * _Nullable)tableTypeEn zoneEn:(NSString * _Nullable)zoneEn zoneAr:(NSString * _Nullable)zoneAr venueAr:(NSString * _Nullable)venueAr venueEn:(NSString * _Nullable)venueEn venueId:(NSString * _Nullable)venueId latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude logoUrl:(NSString * _Nullable)logoUrl __attribute__((swift_name("init(id:startTime:endTime:totalAmount:remarks:referenceNo:createdAt:updatedAt:statusAr:statusEn:tableTypeAr:tableTypeEn:zoneEn:zoneAr:venueAr:venueEn:venueId:latitude:longitude:logoUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiReservationCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (TableReservationDouble * _Nullable)component18 __attribute__((swift_name("component18()")));
- (TableReservationDouble * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (TableReservationApiReservation *)doCopyId:(NSString * _Nullable)id startTime:(NSString * _Nullable)startTime endTime:(NSString * _Nullable)endTime totalAmount:(TableReservationDouble * _Nullable)totalAmount remarks:(NSString * _Nullable)remarks referenceNo:(NSString * _Nullable)referenceNo createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt statusAr:(NSString * _Nullable)statusAr statusEn:(NSString * _Nullable)statusEn tableTypeAr:(NSString * _Nullable)tableTypeAr tableTypeEn:(NSString * _Nullable)tableTypeEn zoneEn:(NSString * _Nullable)zoneEn zoneAr:(NSString * _Nullable)zoneAr venueAr:(NSString * _Nullable)venueAr venueEn:(NSString * _Nullable)venueEn venueId:(NSString * _Nullable)venueId latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude logoUrl:(NSString * _Nullable)logoUrl __attribute__((swift_name("doCopy(id:startTime:endTime:totalAmount:remarks:referenceNo:createdAt:updatedAt:statusAr:statusEn:tableTypeAr:tableTypeEn:zoneEn:zoneAr:venueAr:venueEn:venueId:latitude:longitude:logoUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) TableReservationDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) NSString * _Nullable logoUrl __attribute__((swift_name("logoUrl")));
@property (readonly) TableReservationDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString * _Nullable referenceNo __attribute__((swift_name("referenceNo")));
@property (readonly) NSString * _Nullable remarks __attribute__((swift_name("remarks")));
@property (readonly) NSString * _Nullable startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString * _Nullable statusAr __attribute__((swift_name("statusAr")));
@property (readonly) NSString * _Nullable statusEn __attribute__((swift_name("statusEn")));
@property (readonly) NSString * _Nullable tableTypeAr __attribute__((swift_name("tableTypeAr")));
@property (readonly) NSString * _Nullable tableTypeEn __attribute__((swift_name("tableTypeEn")));
@property (readonly) TableReservationDouble * _Nullable totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable venueAr __attribute__((swift_name("venueAr")));
@property (readonly) NSString * _Nullable venueEn __attribute__((swift_name("venueEn")));
@property (readonly) NSString * _Nullable venueId __attribute__((swift_name("venueId")));
@property (readonly) NSString * _Nullable zoneAr __attribute__((swift_name("zoneAr")));
@property (readonly) NSString * _Nullable zoneEn __attribute__((swift_name("zoneEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservation.Companion")))
@interface TableReservationApiReservationCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiReservationCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationReserve")))
@interface TableReservationApiReservationReserve : TableReservationBase
- (instancetype)initWithTotalAmount:(TableReservationDouble * _Nullable)totalAmount referenceNo:(NSString * _Nullable)referenceNo __attribute__((swift_name("init(totalAmount:referenceNo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiReservationReserveCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiReservationReserve *)doCopyTotalAmount:(TableReservationDouble * _Nullable)totalAmount referenceNo:(NSString * _Nullable)referenceNo __attribute__((swift_name("doCopy(totalAmount:referenceNo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable referenceNo __attribute__((swift_name("referenceNo")));
@property (readonly) TableReservationDouble * _Nullable totalAmount __attribute__((swift_name("totalAmount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationReserve.Companion")))
@interface TableReservationApiReservationReserveCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiReservationReserveCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationReserveResponse")))
@interface TableReservationApiReservationReserveResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiReservationReserve * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiReservationReserveResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiReservationReserve * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiReservationReserveResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiReservationReserve * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationApiReservationReserve * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationReserveResponse.Companion")))
@interface TableReservationApiReservationReserveResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiReservationReserveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationResponse")))
@interface TableReservationApiReservationResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiReservation *> * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiReservationResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationApiReservation *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiReservationResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiReservation *> * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationApiReservation *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiReservationResponse.Companion")))
@interface TableReservationApiReservationResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiReservationResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiRestaurantSlots")))
@interface TableReservationApiRestaurantSlots : TableReservationBase
- (instancetype)initWithVenueId:(TableReservationInt * _Nullable)venueId jahezId:(NSString * _Nullable)jahezId pricePerPerson:(TableReservationDouble * _Nullable)pricePerPerson venueZoneId:(TableReservationInt * _Nullable)venueZoneId nameAr:(NSString * _Nullable)nameAr nameEn:(NSString * _Nullable)nameEn slots:(NSArray<NSString *> * _Nullable)slots __attribute__((swift_name("init(venueId:jahezId:pricePerPerson:venueZoneId:nameAr:nameEn:slots:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiRestaurantSlotsCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (TableReservationApiRestaurantSlots *)doCopyVenueId:(TableReservationInt * _Nullable)venueId jahezId:(NSString * _Nullable)jahezId pricePerPerson:(TableReservationDouble * _Nullable)pricePerPerson venueZoneId:(TableReservationInt * _Nullable)venueZoneId nameAr:(NSString * _Nullable)nameAr nameEn:(NSString * _Nullable)nameEn slots:(NSArray<NSString *> * _Nullable)slots __attribute__((swift_name("doCopy(venueId:jahezId:pricePerPerson:venueZoneId:nameAr:nameEn:slots:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable jahezId __attribute__((swift_name("jahezId")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@property (readonly) TableReservationDouble * _Nullable pricePerPerson __attribute__((swift_name("pricePerPerson")));
@property (readonly) NSArray<NSString *> * _Nullable slots __attribute__((swift_name("slots")));
@property (readonly) TableReservationInt * _Nullable venueId __attribute__((swift_name("venueId")));
@property (readonly) TableReservationInt * _Nullable venueZoneId __attribute__((swift_name("venueZoneId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiRestaurantSlots.Companion")))
@interface TableReservationApiRestaurantSlotsCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiRestaurantSlotsCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiRestaurantsAvailableSlotsResponse")))
@interface TableReservationApiRestaurantsAvailableSlotsResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiRestaurantSlots *> * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiRestaurantsAvailableSlotsResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationApiRestaurantSlots *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiRestaurantsAvailableSlotsResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiRestaurantSlots *> * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationApiRestaurantSlots *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiRestaurantsAvailableSlotsResponse.Companion")))
@interface TableReservationApiRestaurantsAvailableSlotsResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiRestaurantsAvailableSlotsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiSpecialOccasions")))
@interface TableReservationApiSpecialOccasions : TableReservationBase
- (instancetype)initWithId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("init(id:nameEn:nameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiSpecialOccasionsCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiSpecialOccasions *)doCopyId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("doCopy(id:nameEn:nameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiSpecialOccasions.Companion")))
@interface TableReservationApiSpecialOccasionsCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiSpecialOccasionsCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiSpecialOccasionsResponse")))
@interface TableReservationApiSpecialOccasionsResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiSpecialOccasions *> * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiSpecialOccasionsResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationApiSpecialOccasions *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiSpecialOccasionsResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiSpecialOccasions *> * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationApiSpecialOccasions *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiSpecialOccasionsResponse.Companion")))
@interface TableReservationApiSpecialOccasionsResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiSpecialOccasionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenue")))
@interface TableReservationApiVenue : TableReservationBase
- (instancetype)initWithId:(TableReservationInt * _Nullable)id menuUrl:(NSString * _Nullable)menuUrl logoUrl:(NSString * _Nullable)logoUrl maxBookingPeriod:(TableReservationInt * _Nullable)maxBookingPeriod reservationGuidelines:(NSString * _Nullable)reservationGuidelines aboutAr:(NSString * _Nullable)aboutAr aboutEn:(NSString * _Nullable)aboutEn nameAr:(NSString * _Nullable)nameAr nameEn:(NSString * _Nullable)nameEn areaId:(TableReservationInt * _Nullable)areaId minGuests:(TableReservationInt * _Nullable)minGuests maxGuests:(TableReservationInt * _Nullable)maxGuests isCancellable:(TableReservationBoolean * _Nullable)isCancellable headerUrl:(NSString * _Nullable)headerUrl typeId:(TableReservationInt * _Nullable)typeId venueFeatures:(NSArray<TableReservationApiVenueFeature *> * _Nullable)venueFeatures venueParkings:(NSArray<TableReservationApiVenueParking *> * _Nullable)venueParkings venuePaymentOptions:(NSArray<TableReservationApiVenuePaymentOption *> * _Nullable)venuePaymentOptions venuePics:(NSArray<TableReservationApiVenuePic *> * _Nullable)venuePics venueWorkingDays:(NSArray<TableReservationApiVenueWorkingDays *> * _Nullable)venueWorkingDays distance:(TableReservationDouble * _Nullable)distance latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude cuisines:(NSArray<TableReservationApiVenueCuisine *> * _Nullable)cuisines addressEn:(NSString * _Nullable)addressEn addressAr:(NSString * _Nullable)addressAr priceScale:(NSString * _Nullable)priceScale __attribute__((swift_name("init(id:menuUrl:logoUrl:maxBookingPeriod:reservationGuidelines:aboutAr:aboutEn:nameAr:nameEn:areaId:minGuests:maxGuests:isCancellable:headerUrl:typeId:venueFeatures:venueParkings:venuePaymentOptions:venuePics:venueWorkingDays:distance:latitude:longitude:cuisines:addressEn:addressAr:priceScale:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenueCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (TableReservationInt * _Nullable)component10 __attribute__((swift_name("component10()")));
- (TableReservationInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (TableReservationInt * _Nullable)component12 __attribute__((swift_name("component12()")));
- (TableReservationBoolean * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (TableReservationInt * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSArray<TableReservationApiVenueFeature *> * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSArray<TableReservationApiVenueParking *> * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<TableReservationApiVenuePaymentOption *> * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSArray<TableReservationApiVenuePic *> * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationApiVenueWorkingDays *> * _Nullable)component20 __attribute__((swift_name("component20()")));
- (TableReservationDouble * _Nullable)component21 __attribute__((swift_name("component21()")));
- (TableReservationDouble * _Nullable)component22 __attribute__((swift_name("component22()")));
- (TableReservationDouble * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSArray<TableReservationApiVenueCuisine *> * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (TableReservationApiVenue *)doCopyId:(TableReservationInt * _Nullable)id menuUrl:(NSString * _Nullable)menuUrl logoUrl:(NSString * _Nullable)logoUrl maxBookingPeriod:(TableReservationInt * _Nullable)maxBookingPeriod reservationGuidelines:(NSString * _Nullable)reservationGuidelines aboutAr:(NSString * _Nullable)aboutAr aboutEn:(NSString * _Nullable)aboutEn nameAr:(NSString * _Nullable)nameAr nameEn:(NSString * _Nullable)nameEn areaId:(TableReservationInt * _Nullable)areaId minGuests:(TableReservationInt * _Nullable)minGuests maxGuests:(TableReservationInt * _Nullable)maxGuests isCancellable:(TableReservationBoolean * _Nullable)isCancellable headerUrl:(NSString * _Nullable)headerUrl typeId:(TableReservationInt * _Nullable)typeId venueFeatures:(NSArray<TableReservationApiVenueFeature *> * _Nullable)venueFeatures venueParkings:(NSArray<TableReservationApiVenueParking *> * _Nullable)venueParkings venuePaymentOptions:(NSArray<TableReservationApiVenuePaymentOption *> * _Nullable)venuePaymentOptions venuePics:(NSArray<TableReservationApiVenuePic *> * _Nullable)venuePics venueWorkingDays:(NSArray<TableReservationApiVenueWorkingDays *> * _Nullable)venueWorkingDays distance:(TableReservationDouble * _Nullable)distance latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude cuisines:(NSArray<TableReservationApiVenueCuisine *> * _Nullable)cuisines addressEn:(NSString * _Nullable)addressEn addressAr:(NSString * _Nullable)addressAr priceScale:(NSString * _Nullable)priceScale __attribute__((swift_name("doCopy(id:menuUrl:logoUrl:maxBookingPeriod:reservationGuidelines:aboutAr:aboutEn:nameAr:nameEn:areaId:minGuests:maxGuests:isCancellable:headerUrl:typeId:venueFeatures:venueParkings:venuePaymentOptions:venuePics:venueWorkingDays:distance:latitude:longitude:cuisines:addressEn:addressAr:priceScale:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aboutAr __attribute__((swift_name("aboutAr")));
@property (readonly) NSString * _Nullable aboutEn __attribute__((swift_name("aboutEn")));
@property (readonly) NSString * _Nullable addressAr __attribute__((swift_name("addressAr")));
@property (readonly) NSString * _Nullable addressEn __attribute__((swift_name("addressEn")));
@property (readonly) TableReservationInt * _Nullable areaId __attribute__((swift_name("areaId")));
@property (readonly) NSArray<TableReservationApiVenueCuisine *> * _Nullable cuisines __attribute__((swift_name("cuisines")));
@property (readonly) TableReservationDouble * _Nullable distance __attribute__((swift_name("distance")));
@property (readonly) NSString * _Nullable headerUrl __attribute__((swift_name("headerUrl")));
@property (readonly) TableReservationInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) TableReservationBoolean * _Nullable isCancellable __attribute__((swift_name("isCancellable")));
@property (readonly) TableReservationDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) NSString * _Nullable logoUrl __attribute__((swift_name("logoUrl")));
@property (readonly) TableReservationDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) TableReservationInt * _Nullable maxBookingPeriod __attribute__((swift_name("maxBookingPeriod")));
@property (readonly) TableReservationInt * _Nullable maxGuests __attribute__((swift_name("maxGuests")));
@property (readonly) NSString * _Nullable menuUrl __attribute__((swift_name("menuUrl")));
@property (readonly) TableReservationInt * _Nullable minGuests __attribute__((swift_name("minGuests")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@property (readonly) NSString * _Nullable priceScale __attribute__((swift_name("priceScale")));
@property (readonly) NSString * _Nullable reservationGuidelines __attribute__((swift_name("reservationGuidelines")));
@property (readonly) TableReservationInt * _Nullable typeId __attribute__((swift_name("typeId")));
@property (readonly) NSArray<TableReservationApiVenueFeature *> * _Nullable venueFeatures __attribute__((swift_name("venueFeatures")));
@property (readonly) NSArray<TableReservationApiVenueParking *> * _Nullable venueParkings __attribute__((swift_name("venueParkings")));
@property (readonly) NSArray<TableReservationApiVenuePaymentOption *> * _Nullable venuePaymentOptions __attribute__((swift_name("venuePaymentOptions")));
@property (readonly) NSArray<TableReservationApiVenuePic *> * _Nullable venuePics __attribute__((swift_name("venuePics")));
@property (readonly) NSArray<TableReservationApiVenueWorkingDays *> * _Nullable venueWorkingDays __attribute__((swift_name("venueWorkingDays")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenue.Companion")))
@interface TableReservationApiVenueCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenueCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueByIdResponse")))
@interface TableReservationApiVenueByIdResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiVenue * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenueByIdResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiVenue * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiVenueByIdResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiVenue * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationApiVenue * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueByIdResponse.Companion")))
@interface TableReservationApiVenueByIdResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenueByIdResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueCuisine")))
@interface TableReservationApiVenueCuisine : TableReservationBase
- (instancetype)initWithId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("init(id:nameEn:nameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenueCuisineCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiVenueCuisine *)doCopyId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("doCopy(id:nameEn:nameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueCuisine.Companion")))
@interface TableReservationApiVenueCuisineCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenueCuisineCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueFeature")))
@interface TableReservationApiVenueFeature : TableReservationBase
- (instancetype)initWithNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("init(nameEn:nameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenueFeatureCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiVenueFeature *)doCopyNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("doCopy(nameEn:nameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueFeature.Companion")))
@interface TableReservationApiVenueFeatureCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenueFeatureCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenuePaged")))
@interface TableReservationApiVenuePaged : TableReservationBase
- (instancetype)initWithCurrentPage:(TableReservationInt * _Nullable)currentPage pageSize:(TableReservationInt * _Nullable)pageSize totalRows:(TableReservationInt * _Nullable)totalRows pages:(TableReservationInt * _Nullable)pages result:(NSArray<TableReservationApiVenue *> * _Nullable)result __attribute__((swift_name("init(currentPage:pageSize:totalRows:pages:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenuePagedCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (TableReservationInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<TableReservationApiVenue *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (TableReservationApiVenuePaged *)doCopyCurrentPage:(TableReservationInt * _Nullable)currentPage pageSize:(TableReservationInt * _Nullable)pageSize totalRows:(TableReservationInt * _Nullable)totalRows pages:(TableReservationInt * _Nullable)pages result:(NSArray<TableReservationApiVenue *> * _Nullable)result __attribute__((swift_name("doCopy(currentPage:pageSize:totalRows:pages:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable currentPage __attribute__((swift_name("currentPage")));
@property (readonly) TableReservationInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@property (readonly) TableReservationInt * _Nullable pages __attribute__((swift_name("pages")));
@property (readonly) NSArray<TableReservationApiVenue *> * _Nullable result __attribute__((swift_name("result")));
@property (readonly) TableReservationInt * _Nullable totalRows __attribute__((swift_name("totalRows")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenuePaged.Companion")))
@interface TableReservationApiVenuePagedCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenuePagedCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueParking")))
@interface TableReservationApiVenueParking : TableReservationBase
- (instancetype)initWithNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("init(nameEn:nameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenueParkingCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiVenueParking *)doCopyNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("doCopy(nameEn:nameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueParking.Companion")))
@interface TableReservationApiVenueParkingCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenueParkingCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenuePaymentOption")))
@interface TableReservationApiVenuePaymentOption : TableReservationBase
- (instancetype)initWithNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("init(nameEn:nameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenuePaymentOptionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiVenuePaymentOption *)doCopyNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("doCopy(nameEn:nameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenuePaymentOption.Companion")))
@interface TableReservationApiVenuePaymentOptionCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenuePaymentOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenuePic")))
@interface TableReservationApiVenuePic : TableReservationBase
- (instancetype)initWithPicUrl:(NSString * _Nullable)picUrl __attribute__((swift_name("init(picUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenuePicCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (TableReservationApiVenuePic *)doCopyPicUrl:(NSString * _Nullable)picUrl __attribute__((swift_name("doCopy(picUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable picUrl __attribute__((swift_name("picUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenuePic.Companion")))
@interface TableReservationApiVenuePicCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenuePicCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueResponse")))
@interface TableReservationApiVenueResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiVenuePaged * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenueResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationApiVenuePaged * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiVenueResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(TableReservationApiVenuePaged * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationApiVenuePaged * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueResponse.Companion")))
@interface TableReservationApiVenueResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenueResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueWorkingDays")))
@interface TableReservationApiVenueWorkingDays : TableReservationBase
- (instancetype)initWithNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr venueWorkingHours:(NSArray<TableReservationVenueWorkingHour *> * _Nullable)venueWorkingHours __attribute__((swift_name("init(nameEn:nameAr:venueWorkingHours:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiVenueWorkingDaysCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationVenueWorkingHour *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiVenueWorkingDays *)doCopyNameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr venueWorkingHours:(NSArray<TableReservationVenueWorkingHour *> * _Nullable)venueWorkingHours __attribute__((swift_name("doCopy(nameEn:nameAr:venueWorkingHours:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@property (readonly) NSArray<TableReservationVenueWorkingHour *> * _Nullable venueWorkingHours __attribute__((swift_name("venueWorkingHours")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiVenueWorkingDays.Companion")))
@interface TableReservationApiVenueWorkingDaysCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiVenueWorkingDaysCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiZoneType")))
@interface TableReservationApiZoneType : TableReservationBase
- (instancetype)initWithId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("init(id:nameEn:nameAr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiZoneTypeCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiZoneType *)doCopyId:(TableReservationInt * _Nullable)id nameEn:(NSString * _Nullable)nameEn nameAr:(NSString * _Nullable)nameAr __attribute__((swift_name("doCopy(id:nameEn:nameAr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable nameAr __attribute__((swift_name("nameAr")));
@property (readonly) NSString * _Nullable nameEn __attribute__((swift_name("nameEn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiZoneType.Companion")))
@interface TableReservationApiZoneTypeCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiZoneTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiZoneTypeResponse")))
@interface TableReservationApiZoneTypeResponse : TableReservationBase
- (instancetype)initWithOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiZoneType *> * _Nullable)data __attribute__((swift_name("init(ok:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationApiZoneTypeResponseCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationApiZoneType *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationApiZoneTypeResponse *)doCopyOk:(TableReservationBoolean * _Nullable)ok message:(NSString * _Nullable)message data:(NSArray<TableReservationApiZoneType *> * _Nullable)data __attribute__((swift_name("doCopy(ok:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationApiZoneType *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) TableReservationBoolean * _Nullable ok __attribute__((swift_name("ok")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiZoneTypeResponse.Companion")))
@interface TableReservationApiZoneTypeResponseCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationApiZoneTypeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CitiesList")))
@interface TableReservationCitiesList : TableReservationBase
- (instancetype)initWithCityId:(TableReservationInt * _Nullable)cityId cityName:(NSString * _Nullable)cityName latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude orderActive:(NSString * _Nullable)orderActive __attribute__((swift_name("init(cityId:cityName:latitude:longitude:orderActive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationCitiesListCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (TableReservationCitiesList *)doCopyCityId:(TableReservationInt * _Nullable)cityId cityName:(NSString * _Nullable)cityName latitude:(TableReservationDouble * _Nullable)latitude longitude:(TableReservationDouble * _Nullable)longitude orderActive:(NSString * _Nullable)orderActive __attribute__((swift_name("doCopy(cityId:cityName:latitude:longitude:orderActive:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable cityId __attribute__((swift_name("cityId")));
@property (readonly) NSString * _Nullable cityName __attribute__((swift_name("cityName")));
@property (readonly) TableReservationDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) TableReservationDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString * _Nullable orderActive __attribute__((swift_name("orderActive")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CitiesList.Companion")))
@interface TableReservationCitiesListCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationCitiesListCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAreasList")))
@interface TableReservationGetAreasList : TableReservationBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude cityId:(TableReservationInt * _Nullable)cityId pageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize __attribute__((swift_name("init(latitude:longitude:cityId:pageNumber:pageSize:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (TableReservationInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (TableReservationGetAreasList *)doCopyLatitude:(double)latitude longitude:(double)longitude cityId:(TableReservationInt * _Nullable)cityId pageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize __attribute__((swift_name("doCopy(latitude:longitude:cityId:pageNumber:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable cityId __attribute__((swift_name("cityId")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) int32_t pageNumber __attribute__((swift_name("pageNumber")));
@property (readonly) int32_t pageSize __attribute__((swift_name("pageSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetRestaurantsAvailableSlots")))
@interface TableReservationGetRestaurantsAvailableSlots : TableReservationBase
- (instancetype)initWithVenueId:(int32_t)venueId desiredDate:(NSString *)desiredDate personsCount:(int32_t)personsCount __attribute__((swift_name("init(venueId:desiredDate:personsCount:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (TableReservationGetRestaurantsAvailableSlots *)doCopyVenueId:(int32_t)venueId desiredDate:(NSString *)desiredDate personsCount:(int32_t)personsCount __attribute__((swift_name("doCopy(venueId:desiredDate:personsCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *desiredDate __attribute__((swift_name("desiredDate")));
@property (readonly) int32_t personsCount __attribute__((swift_name("personsCount")));
@property (readonly) int32_t venueId __attribute__((swift_name("venueId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVenuesList")))
@interface TableReservationGetVenuesList : TableReservationBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude cityId:(TableReservationInt * _Nullable)cityId cuisineIds:(NSArray<TableReservationInt *> * _Nullable)cuisineIds zoneTypeIds:(NSArray<TableReservationInt *> * _Nullable)zoneTypeIds keyword:(NSString * _Nullable)keyword pageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize areaId:(TableReservationInt * _Nullable)areaId __attribute__((swift_name("init(latitude:longitude:cityId:cuisineIds:zoneTypeIds:keyword:pageNumber:pageSize:areaId:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (TableReservationInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<TableReservationInt *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<TableReservationInt *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (TableReservationInt * _Nullable)component9 __attribute__((swift_name("component9()")));
- (TableReservationGetVenuesList *)doCopyLatitude:(double)latitude longitude:(double)longitude cityId:(TableReservationInt * _Nullable)cityId cuisineIds:(NSArray<TableReservationInt *> * _Nullable)cuisineIds zoneTypeIds:(NSArray<TableReservationInt *> * _Nullable)zoneTypeIds keyword:(NSString * _Nullable)keyword pageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize areaId:(TableReservationInt * _Nullable)areaId __attribute__((swift_name("doCopy(latitude:longitude:cityId:cuisineIds:zoneTypeIds:keyword:pageNumber:pageSize:areaId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable areaId __attribute__((swift_name("areaId")));
@property (readonly) TableReservationInt * _Nullable cityId __attribute__((swift_name("cityId")));
@property (readonly) NSArray<TableReservationInt *> * _Nullable cuisineIds __attribute__((swift_name("cuisineIds")));
@property (readonly) NSString * _Nullable keyword __attribute__((swift_name("keyword")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) int32_t pageNumber __attribute__((swift_name("pageNumber")));
@property (readonly) int32_t pageSize __attribute__((swift_name("pageSize")));
@property (readonly) NSArray<TableReservationInt *> * _Nullable zoneTypeIds __attribute__((swift_name("zoneTypeIds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteError")))
@interface TableReservationRemoteError : TableReservationBase
- (instancetype)initWithStatusCode:(int32_t)statusCode message:(NSString *)message __attribute__((swift_name("init(statusCode:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationRemoteErrorCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationRemoteError *)doCopyStatusCode:(int32_t)statusCode message:(NSString *)message __attribute__((swift_name("doCopy(statusCode:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteError.Companion")))
@interface TableReservationRemoteErrorCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationRemoteErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueWorkingHour")))
@interface TableReservationVenueWorkingHour : TableReservationBase
- (instancetype)initWithEndTime:(NSString * _Nullable)endTime startTime:(NSString * _Nullable)startTime __attribute__((swift_name("init(endTime:startTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationVenueWorkingHourCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (TableReservationVenueWorkingHour *)doCopyEndTime:(NSString * _Nullable)endTime startTime:(NSString * _Nullable)startTime __attribute__((swift_name("doCopy(endTime:startTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString * _Nullable startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueWorkingHour.Companion")))
@interface TableReservationVenueWorkingHourCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationVenueWorkingHourCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelReservationByUserRequest")))
@interface TableReservationCancelReservationByUserRequest : TableReservationBase
- (instancetype)initWithReservationId:(NSString * _Nullable)reservationId __attribute__((swift_name("init(reservationId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationCancelReservationByUserRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (TableReservationCancelReservationByUserRequest *)doCopyReservationId:(NSString * _Nullable)reservationId __attribute__((swift_name("doCopy(reservationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable reservationId __attribute__((swift_name("reservationId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelReservationByUserRequest.Companion")))
@interface TableReservationCancelReservationByUserRequestCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationCancelReservationByUserRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReserveRequestModel")))
@interface TableReservationReserveRequestModel : TableReservationBase
- (instancetype)initWithVenueId:(TableReservationInt * _Nullable)venueId desiredDateTime:(NSString * _Nullable)desiredDateTime remarks:(NSString * _Nullable)remarks personsCount:(TableReservationInt * _Nullable)personsCount venueZoneId:(TableReservationInt * _Nullable)venueZoneId specialOccasionId:(TableReservationInt * _Nullable)specialOccasionId __attribute__((swift_name("init(venueId:desiredDateTime:remarks:personsCount:venueZoneId:specialOccasionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationReserveRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (TableReservationInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (TableReservationInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (TableReservationInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (TableReservationReserveRequestModel *)doCopyVenueId:(TableReservationInt * _Nullable)venueId desiredDateTime:(NSString * _Nullable)desiredDateTime remarks:(NSString * _Nullable)remarks personsCount:(TableReservationInt * _Nullable)personsCount venueZoneId:(TableReservationInt * _Nullable)venueZoneId specialOccasionId:(TableReservationInt * _Nullable)specialOccasionId __attribute__((swift_name("doCopy(venueId:desiredDateTime:remarks:personsCount:venueZoneId:specialOccasionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable desiredDateTime __attribute__((swift_name("desiredDateTime")));
@property (readonly) TableReservationInt * _Nullable personsCount __attribute__((swift_name("personsCount")));
@property (readonly) NSString * _Nullable remarks __attribute__((swift_name("remarks")));
@property (readonly) TableReservationInt * _Nullable specialOccasionId __attribute__((swift_name("specialOccasionId")));
@property (readonly) TableReservationInt * _Nullable venueId __attribute__((swift_name("venueId")));
@property (readonly) TableReservationInt * _Nullable venueZoneId __attribute__((swift_name("venueZoneId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReserveRequestModel.Companion")))
@interface TableReservationReserveRequestModelCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationReserveRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Area")))
@interface TableReservationArea : TableReservationBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name isActive:(BOOL)isActive availableFrom:(NSString *)availableFrom availableTo:(NSString *)availableTo picUrl:(NSString *)picUrl latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(id:name:isActive:availableFrom:availableTo:picUrl:latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (TableReservationArea *)doCopyId:(int32_t)id name:(NSString *)name isActive:(BOOL)isActive availableFrom:(NSString *)availableFrom availableTo:(NSString *)availableTo picUrl:(NSString *)picUrl latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(id:name:isActive:availableFrom:availableTo:picUrl:latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *availableFrom __attribute__((swift_name("availableFrom")));
@property (readonly) NSString *availableTo __attribute__((swift_name("availableTo")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *picUrl __attribute__((swift_name("picUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelReservation")))
@interface TableReservationCancelReservation : TableReservationBase
- (instancetype)initWithIsCancelled:(BOOL)isCancelled message:(NSString *)message __attribute__((swift_name("init(isCancelled:message:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationCancelReservation *)doCopyIsCancelled:(BOOL)isCancelled message:(NSString *)message __attribute__((swift_name("doCopy(isCancelled:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City")))
@interface TableReservationCity : TableReservationBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationCity *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cuisine")))
@interface TableReservationCuisine : TableReservationBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationCuisine *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reservation")))
@interface TableReservationReservation : TableReservationBase
- (instancetype)initWithId:(NSString *)id totalAmount:(double)totalAmount remarks:(NSString *)remarks referenceNo:(NSString *)referenceNo status:(NSString *)status tableType:(NSString *)tableType zone:(NSString *)zone venue:(NSString *)venue venueId:(NSString *)venueId latitude:(double)latitude longitude:(double)longitude venueLogoUrl:(NSString *)venueLogoUrl fullDate:(NSString *)fullDate shortDate:(NSString *)shortDate time:(NSString *)time isActive:(BOOL)isActive __attribute__((swift_name("init(id:totalAmount:remarks:referenceNo:status:tableType:zone:venue:venueId:latitude:longitude:venueLogoUrl:fullDate:shortDate:time:isActive:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component10 __attribute__((swift_name("component10()")));
- (double)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (TableReservationReservation *)doCopyId:(NSString *)id totalAmount:(double)totalAmount remarks:(NSString *)remarks referenceNo:(NSString *)referenceNo status:(NSString *)status tableType:(NSString *)tableType zone:(NSString *)zone venue:(NSString *)venue venueId:(NSString *)venueId latitude:(double)latitude longitude:(double)longitude venueLogoUrl:(NSString *)venueLogoUrl fullDate:(NSString *)fullDate shortDate:(NSString *)shortDate time:(NSString *)time isActive:(BOOL)isActive __attribute__((swift_name("doCopy(id:totalAmount:remarks:referenceNo:status:tableType:zone:venue:venueId:latitude:longitude:venueLogoUrl:fullDate:shortDate:time:isActive:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fullDate __attribute__((swift_name("fullDate")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *referenceNo __attribute__((swift_name("referenceNo")));
@property (readonly) NSString *remarks __attribute__((swift_name("remarks")));
@property (readonly) NSString *shortDate __attribute__((swift_name("shortDate")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *tableType __attribute__((swift_name("tableType")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@property (readonly) double totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) NSString *venue __attribute__((swift_name("venue")));
@property (readonly) NSString *venueId __attribute__((swift_name("venueId")));
@property (readonly) NSString *venueLogoUrl __attribute__((swift_name("venueLogoUrl")));
@property (readonly) NSString *zone __attribute__((swift_name("zone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reserve")))
@interface TableReservationReserve : TableReservationBase
- (instancetype)initWithTotalAmount:(double)totalAmount referenceNo:(NSString *)referenceNo __attribute__((swift_name("init(totalAmount:referenceNo:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationReserve *)doCopyTotalAmount:(double)totalAmount referenceNo:(NSString *)referenceNo __attribute__((swift_name("doCopy(totalAmount:referenceNo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *referenceNo __attribute__((swift_name("referenceNo")));
@property (readonly) double totalAmount __attribute__((swift_name("totalAmount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantsAvailableSlots")))
@interface TableReservationRestaurantsAvailableSlots : TableReservationBase
- (instancetype)initWithVenueId:(int32_t)venueId jahezId:(NSString *)jahezId pricePerPerson:(double)pricePerPerson venueZoneId:(int32_t)venueZoneId name:(NSString *)name slots:(NSArray<NSString *> *)slots __attribute__((swift_name("init(venueId:jahezId:pricePerPerson:venueZoneId:name:slots:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> *)component6 __attribute__((swift_name("component6()")));
- (TableReservationRestaurantsAvailableSlots *)doCopyVenueId:(int32_t)venueId jahezId:(NSString *)jahezId pricePerPerson:(double)pricePerPerson venueZoneId:(int32_t)venueZoneId name:(NSString *)name slots:(NSArray<NSString *> *)slots __attribute__((swift_name("doCopy(venueId:jahezId:pricePerPerson:venueZoneId:name:slots:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *jahezId __attribute__((swift_name("jahezId")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) double pricePerPerson __attribute__((swift_name("pricePerPerson")));
@property (readonly) NSArray<NSString *> *slots __attribute__((swift_name("slots")));
@property (readonly) int32_t venueId __attribute__((swift_name("venueId")));
@property (readonly) int32_t venueZoneId __attribute__((swift_name("venueZoneId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecialOccasion")))
@interface TableReservationSpecialOccasion : TableReservationBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationSpecialOccasion *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Venue")))
@interface TableReservationVenue : TableReservationBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name cuisine:(NSString *)cuisine distance:(NSString *)distance rating:(NSString *)rating ratingCount:(int32_t)ratingCount logoUrl:(NSString *)logoUrl coverUrl:(NSString *)coverUrl menuUrl:(NSString *)menuUrl locationUrl:(NSString *)locationUrl about:(NSString *)about guidelines:(NSString *)guidelines isCancellable:(BOOL)isCancellable minGuests:(int32_t)minGuests maxGuests:(int32_t)maxGuests features:(NSArray<NSString *> *)features images:(NSArray<NSString *> *)images parking:(TableReservationVenueFeature *)parking paymentOptions:(TableReservationVenueFeature *)paymentOptions workingDays:(TableReservationVenueFeature *)workingDays priceScale:(NSString *)priceScale __attribute__((swift_name("init(id:name:cuisine:distance:rating:ratingCount:logoUrl:coverUrl:menuUrl:locationUrl:about:guidelines:isCancellable:minGuests:maxGuests:features:images:parking:paymentOptions:workingDays:priceScale:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (int32_t)component14 __attribute__((swift_name("component14()")));
- (int32_t)component15 __attribute__((swift_name("component15()")));
- (NSArray<NSString *> *)component16 __attribute__((swift_name("component16()")));
- (NSArray<NSString *> *)component17 __attribute__((swift_name("component17()")));
- (TableReservationVenueFeature *)component18 __attribute__((swift_name("component18()")));
- (TableReservationVenueFeature *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationVenueFeature *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (TableReservationVenue *)doCopyId:(int32_t)id name:(NSString *)name cuisine:(NSString *)cuisine distance:(NSString *)distance rating:(NSString *)rating ratingCount:(int32_t)ratingCount logoUrl:(NSString *)logoUrl coverUrl:(NSString *)coverUrl menuUrl:(NSString *)menuUrl locationUrl:(NSString *)locationUrl about:(NSString *)about guidelines:(NSString *)guidelines isCancellable:(BOOL)isCancellable minGuests:(int32_t)minGuests maxGuests:(int32_t)maxGuests features:(NSArray<NSString *> *)features images:(NSArray<NSString *> *)images parking:(TableReservationVenueFeature *)parking paymentOptions:(TableReservationVenueFeature *)paymentOptions workingDays:(TableReservationVenueFeature *)workingDays priceScale:(NSString *)priceScale __attribute__((swift_name("doCopy(id:name:cuisine:distance:rating:ratingCount:logoUrl:coverUrl:menuUrl:locationUrl:about:guidelines:isCancellable:minGuests:maxGuests:features:images:parking:paymentOptions:workingDays:priceScale:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *about __attribute__((swift_name("about")));
@property (readonly) NSString *coverUrl __attribute__((swift_name("coverUrl")));
@property (readonly) NSString *cuisine __attribute__((swift_name("cuisine")));
@property (readonly) NSString *distance __attribute__((swift_name("distance")));
@property (readonly) NSArray<NSString *> *features __attribute__((swift_name("features")));
@property (readonly) NSString *guidelines __attribute__((swift_name("guidelines")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@property (readonly) BOOL isCancellable __attribute__((swift_name("isCancellable")));
@property (readonly) NSString *locationUrl __attribute__((swift_name("locationUrl")));
@property (readonly) NSString *logoUrl __attribute__((swift_name("logoUrl")));
@property (readonly) int32_t maxGuests __attribute__((swift_name("maxGuests")));
@property (readonly) NSString *menuUrl __attribute__((swift_name("menuUrl")));
@property (readonly) int32_t minGuests __attribute__((swift_name("minGuests")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) TableReservationVenueFeature *parking __attribute__((swift_name("parking")));
@property (readonly) TableReservationVenueFeature *paymentOptions __attribute__((swift_name("paymentOptions")));
@property (readonly) NSString *priceScale __attribute__((swift_name("priceScale")));
@property (readonly) NSString *rating __attribute__((swift_name("rating")));
@property (readonly) int32_t ratingCount __attribute__((swift_name("ratingCount")));
@property (readonly) TableReservationVenueFeature *workingDays __attribute__((swift_name("workingDays")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueFeature")))
@interface TableReservationVenueFeature : TableReservationBase
- (instancetype)initWithTitle:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(title:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TableReservationVenueFeatureCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationVenueFeature *)doCopyTitle:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueFeature.Companion")))
@interface TableReservationVenueFeatureCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationVenueFeatureCompanion *shared __attribute__((swift_name("shared")));
- (TableReservationVenueFeature *)default __attribute__((swift_name("default()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZoneType")))
@interface TableReservationZoneType : TableReservationBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (TableReservationZoneType *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("CoreViewModel")))
@interface TableReservationCoreViewModel : TableReservationBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TableReservationCoreViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)onCleared __attribute__((swift_name("onCleared()")));
@property (readonly) id<TableReservationKotlinx_coroutines_coreCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckRestaurantAvailabilityViewModel")))
@interface TableReservationCheckRestaurantAvailabilityViewModel : TableReservationCoreViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onEventEvent:(TableReservationRestaurantAvailabilityEvents *)event __attribute__((swift_name("onEvent(event:)")));
@property (readonly) TableReservationCoreCommonFlow<TableReservationRestaurantAvailabilityViewState *> *viewState __attribute__((swift_name("viewState")));
@end;

__attribute__((swift_name("HomeReservationEvents")))
@interface TableReservationHomeReservationEvents : TableReservationBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.FilterByArea")))
@interface TableReservationHomeReservationEventsFilterByArea : TableReservationHomeReservationEvents
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude areaId:(int32_t)areaId __attribute__((swift_name("init(latitude:longitude:areaId:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (TableReservationHomeReservationEventsFilterByArea *)doCopyLatitude:(double)latitude longitude:(double)longitude areaId:(int32_t)areaId __attribute__((swift_name("doCopy(latitude:longitude:areaId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t areaId __attribute__((swift_name("areaId")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.FilterVenues")))
@interface TableReservationHomeReservationEventsFilterVenues : TableReservationHomeReservationEvents
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude zones:(NSArray<TableReservationInt *> *)zones cuisines:(NSArray<TableReservationInt *> *)cuisines __attribute__((swift_name("init(latitude:longitude:zones:cuisines:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationInt *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<TableReservationInt *> *)component4 __attribute__((swift_name("component4()")));
- (TableReservationHomeReservationEventsFilterVenues *)doCopyLatitude:(double)latitude longitude:(double)longitude zones:(NSArray<TableReservationInt *> *)zones cuisines:(NSArray<TableReservationInt *> *)cuisines __attribute__((swift_name("doCopy(latitude:longitude:zones:cuisines:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationInt *> *cuisines __attribute__((swift_name("cuisines")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSArray<TableReservationInt *> *zones __attribute__((swift_name("zones")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.GetAreas")))
@interface TableReservationHomeReservationEventsGetAreas : TableReservationHomeReservationEvents
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude cityId:(TableReservationInt * _Nullable)cityId __attribute__((swift_name("init(latitude:longitude:cityId:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (TableReservationInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (TableReservationHomeReservationEventsGetAreas *)doCopyLatitude:(double)latitude longitude:(double)longitude cityId:(TableReservationInt * _Nullable)cityId __attribute__((swift_name("doCopy(latitude:longitude:cityId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationInt * _Nullable cityId __attribute__((swift_name("cityId")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.GetCitiesList")))
@interface TableReservationHomeReservationEventsGetCitiesList : TableReservationHomeReservationEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getCitiesList __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationHomeReservationEventsGetCitiesList *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.GetCuisines")))
@interface TableReservationHomeReservationEventsGetCuisines : TableReservationHomeReservationEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getCuisines __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationHomeReservationEventsGetCuisines *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.GetReservations")))
@interface TableReservationHomeReservationEventsGetReservations : TableReservationHomeReservationEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getReservations __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationHomeReservationEventsGetReservations *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.GetVenueList")))
@interface TableReservationHomeReservationEventsGetVenueList : TableReservationHomeReservationEvents
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (TableReservationHomeReservationEventsGetVenueList *)doCopyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.GetZones")))
@interface TableReservationHomeReservationEventsGetZones : TableReservationHomeReservationEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getZones __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationHomeReservationEventsGetZones *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.Init")))
@interface TableReservationHomeReservationEventsInit : TableReservationHomeReservationEvents
- (instancetype)initWithIsArabic:(BOOL)isArabic enableLogs:(BOOL)enableLogs __attribute__((swift_name("init(isArabic:enableLogs:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (TableReservationHomeReservationEventsInit *)doCopyIsArabic:(BOOL)isArabic enableLogs:(BOOL)enableLogs __attribute__((swift_name("doCopy(isArabic:enableLogs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enableLogs __attribute__((swift_name("enableLogs")));
@property (readonly) BOOL isArabic __attribute__((swift_name("isArabic")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.SearchVenues")))
@interface TableReservationHomeReservationEventsSearchVenues : TableReservationHomeReservationEvents
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude keyword:(NSString *)keyword __attribute__((swift_name("init(latitude:longitude:keyword:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (TableReservationHomeReservationEventsSearchVenues *)doCopyLatitude:(double)latitude longitude:(double)longitude keyword:(NSString *)keyword __attribute__((swift_name("doCopy(latitude:longitude:keyword:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *keyword __attribute__((swift_name("keyword")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationViewModel")))
@interface TableReservationHomeReservationViewModel : TableReservationCoreViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onEventEvent:(TableReservationHomeReservationEvents *)event __attribute__((swift_name("onEvent(event:)")));
@property (readonly) TableReservationCoreCommonFlow<TableReservationHomeReservationViewState *> *viewState __attribute__((swift_name("viewState")));
@end;

__attribute__((swift_name("CoreViewState")))
@protocol TableReservationCoreViewState
@required
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationViewState")))
@interface TableReservationHomeReservationViewState : TableReservationBase <TableReservationCoreViewState>
- (instancetype)initWithRestaurants:(NSArray<TableReservationVenue *> *)restaurants reservations:(NSArray<TableReservationReservation *> *)reservations areas:(NSArray<TableReservationArea *> *)areas zones:(NSArray<TableReservationZoneType *> *)zones cuisines:(NSArray<TableReservationCuisine *> *)cuisines cities:(NSArray<TableReservationCity *> *)cities venuesError:(NSString * _Nullable)venuesError reservationError:(NSString * _Nullable)reservationError error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("init(restaurants:reservations:areas:zones:cuisines:cities:venuesError:reservationError:error:isEmpty:isLoading:)"))) __attribute__((objc_designated_initializer));
- (NSArray<TableReservationVenue *> *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (NSArray<TableReservationReservation *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<TableReservationArea *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<TableReservationZoneType *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<TableReservationCuisine *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<TableReservationCity *> *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (TableReservationHomeReservationViewState *)doCopyRestaurants:(NSArray<TableReservationVenue *> *)restaurants reservations:(NSArray<TableReservationReservation *> *)reservations areas:(NSArray<TableReservationArea *> *)areas zones:(NSArray<TableReservationZoneType *> *)zones cuisines:(NSArray<TableReservationCuisine *> *)cuisines cities:(NSArray<TableReservationCity *> *)cities venuesError:(NSString * _Nullable)venuesError reservationError:(NSString * _Nullable)reservationError error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(restaurants:reservations:areas:zones:cuisines:cities:venuesError:reservationError:error:isEmpty:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TableReservationArea *> *areas __attribute__((swift_name("areas")));
@property (readonly) NSArray<TableReservationCity *> *cities __attribute__((swift_name("cities")));
@property (readonly) NSArray<TableReservationCuisine *> *cuisines __attribute__((swift_name("cuisines")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) NSString * _Nullable reservationError __attribute__((swift_name("reservationError")));
@property (readonly) NSArray<TableReservationReservation *> *reservations __attribute__((swift_name("reservations")));
@property (readonly) NSArray<TableReservationVenue *> *restaurants __attribute__((swift_name("restaurants")));
@property (readonly) NSString * _Nullable venuesError __attribute__((swift_name("venuesError")));
@property (readonly) NSArray<TableReservationZoneType *> *zones __attribute__((swift_name("zones")));
@end;

__attribute__((swift_name("ReservationDetailsEvents")))
@interface TableReservationReservationDetailsEvents : TableReservationBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationDetailsEvents.CancelReservation")))
@interface TableReservationReservationDetailsEventsCancelReservation : TableReservationReservationDetailsEvents
- (instancetype)initWithReservationId:(NSString *)reservationId __attribute__((swift_name("init(reservationId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (TableReservationReservationDetailsEventsCancelReservation *)doCopyReservationId:(NSString *)reservationId __attribute__((swift_name("doCopy(reservationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *reservationId __attribute__((swift_name("reservationId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationDetailsViewModel")))
@interface TableReservationReservationDetailsViewModel : TableReservationCoreViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onEventEvent:(TableReservationReservationDetailsEvents *)event __attribute__((swift_name("onEvent(event:)")));
@property (readonly) TableReservationCoreCommonFlow<TableReservationReservationDetailsViewState *> *viewState __attribute__((swift_name("viewState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationDetailsViewState")))
@interface TableReservationReservationDetailsViewState : TableReservationBase <TableReservationCoreViewState>
- (instancetype)initWithIsCanceled:(BOOL)isCanceled error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("init(isCanceled:error:isEmpty:isLoading:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (TableReservationReservationDetailsViewState *)doCopyIsCanceled:(BOOL)isCanceled error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(isCanceled:error:isEmpty:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isCanceled __attribute__((swift_name("isCanceled")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@end;

__attribute__((swift_name("ReservationPaymentEvents")))
@interface TableReservationReservationPaymentEvents : TableReservationBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationPaymentEvents.GetSpecialOccasions")))
@interface TableReservationReservationPaymentEventsGetSpecialOccasions : TableReservationReservationPaymentEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getSpecialOccasions __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationReservationPaymentEventsGetSpecialOccasions *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationPaymentEvents.Reserve")))
@interface TableReservationReservationPaymentEventsReserve : TableReservationReservationPaymentEvents
- (instancetype)initWithBody:(TableReservationReserveRequestModel *)body __attribute__((swift_name("init(body:)"))) __attribute__((objc_designated_initializer));
- (TableReservationReserveRequestModel *)component1 __attribute__((swift_name("component1()")));
- (TableReservationReservationPaymentEventsReserve *)doCopyBody:(TableReservationReserveRequestModel *)body __attribute__((swift_name("doCopy(body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationReserveRequestModel *body __attribute__((swift_name("body")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationPaymentViewModel")))
@interface TableReservationReservationPaymentViewModel : TableReservationCoreViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onEventEvent:(TableReservationReservationPaymentEvents *)event __attribute__((swift_name("onEvent(event:)")));
@property (readonly) TableReservationCoreCommonFlow<TableReservationReservationPaymentViewState *> *viewState __attribute__((swift_name("viewState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationPaymentViewState")))
@interface TableReservationReservationPaymentViewState : TableReservationBase <TableReservationCoreViewState>
- (instancetype)initWithSpecialOccasions:(NSArray<TableReservationSpecialOccasion *> *)specialOccasions confirmReservation:(TableReservationReserve * _Nullable)confirmReservation error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("init(specialOccasions:confirmReservation:error:isEmpty:isLoading:)"))) __attribute__((objc_designated_initializer));
- (NSArray<TableReservationSpecialOccasion *> *)component1 __attribute__((swift_name("component1()")));
- (TableReservationReserve * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (TableReservationReservationPaymentViewState *)doCopySpecialOccasions:(NSArray<TableReservationSpecialOccasion *> *)specialOccasions confirmReservation:(TableReservationReserve * _Nullable)confirmReservation error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(specialOccasions:confirmReservation:error:isEmpty:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationReserve * _Nullable confirmReservation __attribute__((swift_name("confirmReservation")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) NSArray<TableReservationSpecialOccasion *> *specialOccasions __attribute__((swift_name("specialOccasions")));
@end;

__attribute__((swift_name("RestaurantAvailabilityEvents")))
@interface TableReservationRestaurantAvailabilityEvents : TableReservationBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantAvailabilityEvents.CheckAvailability")))
@interface TableReservationRestaurantAvailabilityEventsCheckAvailability : TableReservationRestaurantAvailabilityEvents
- (instancetype)initWithCriteria:(TableReservationGetRestaurantsAvailableSlots *)criteria __attribute__((swift_name("init(criteria:)"))) __attribute__((objc_designated_initializer));
- (TableReservationGetRestaurantsAvailableSlots *)component1 __attribute__((swift_name("component1()")));
- (TableReservationRestaurantAvailabilityEventsCheckAvailability *)doCopyCriteria:(TableReservationGetRestaurantsAvailableSlots *)criteria __attribute__((swift_name("doCopy(criteria:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TableReservationGetRestaurantsAvailableSlots *criteria __attribute__((swift_name("criteria")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantAvailabilityViewState")))
@interface TableReservationRestaurantAvailabilityViewState : TableReservationBase <TableReservationCoreViewState>
- (instancetype)initWithSlots:(NSArray<TableReservationRestaurantsAvailableSlots *> *)slots error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("init(slots:error:isEmpty:isLoading:)"))) __attribute__((objc_designated_initializer));
- (NSArray<TableReservationRestaurantsAvailableSlots *> *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (TableReservationRestaurantAvailabilityViewState *)doCopySlots:(NSArray<TableReservationRestaurantsAvailableSlots *> *)slots error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(slots:error:isEmpty:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) NSArray<TableReservationRestaurantsAvailableSlots *> *slots __attribute__((swift_name("slots")));
@end;

__attribute__((swift_name("RestaurantDetailsEvents")))
@interface TableReservationRestaurantDetailsEvents : TableReservationBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantDetailsEvents.GetById")))
@interface TableReservationRestaurantDetailsEventsGetById : TableReservationRestaurantDetailsEvents
- (instancetype)initWithId:(int32_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (TableReservationRestaurantDetailsEventsGetById *)doCopyId:(int32_t)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantDetailsViewModel")))
@interface TableReservationRestaurantDetailsViewModel : TableReservationCoreViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onEventEvent:(TableReservationRestaurantDetailsEvents *)event __attribute__((swift_name("onEvent(event:)")));
@property (readonly) TableReservationCoreCommonFlow<TableReservationRestaurantDetailsViewState *> *viewState __attribute__((swift_name("viewState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantDetailsViewState")))
@interface TableReservationRestaurantDetailsViewState : TableReservationBase <TableReservationCoreViewState>
- (instancetype)initWithVenue:(TableReservationVenue * _Nullable)venue error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("init(venue:error:isEmpty:isLoading:)"))) __attribute__((objc_designated_initializer));
- (TableReservationVenue * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (TableReservationRestaurantDetailsViewState *)doCopyVenue:(TableReservationVenue * _Nullable)venue error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(venue:error:isEmpty:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) TableReservationVenue * _Nullable venue __attribute__((swift_name("venue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface TableReservationConfig : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)config __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationConfig *shared __attribute__((swift_name("shared")));
@property BOOL enableHttpLogs __attribute__((swift_name("enableHttpLogs")));
@property BOOL isArabic __attribute__((swift_name("isArabic")));
@property NSString *jwtToken __attribute__((swift_name("jwtToken")));
@end;

@interface TableReservationKotlinThrowable (Extensions)
- (NSString *)userMessage __attribute__((swift_name("userMessage()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TableReservationKotlinArray<T> : TableReservationBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TableReservationInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TableReservationKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol TableReservationKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<TableReservationKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<TableReservationKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol TableReservationKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<TableReservationKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<TableReservationKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol TableReservationKotlinx_serialization_coreKSerializer <TableReservationKotlinx_serialization_coreSerializationStrategy, TableReservationKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewModel.Companion")))
@interface TableReservationCoreViewModelCompanion : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationCoreViewModelCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol TableReservationKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<TableReservationKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol TableReservationKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TableReservationKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(TableReservationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCommonFlow")))
@interface TableReservationCoreCommonFlow<T> : TableReservationBase <TableReservationKotlinx_coroutines_coreFlow>
- (instancetype)initWithOrigin:(id<TableReservationKotlinx_coroutines_coreFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TableReservationKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(TableReservationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<TableReservationKtor_ioCloseable>)watchBlock:(void (^)(T _Nullable))block __attribute__((swift_name("watch(block:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol TableReservationKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol TableReservationKotlinx_serialization_coreEncoder
@required
- (id<TableReservationKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<TableReservationKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<TableReservationKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<TableReservationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<TableReservationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) TableReservationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol TableReservationKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<TableReservationKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<TableReservationKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<TableReservationKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) TableReservationKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol TableReservationKotlinx_serialization_coreDecoder
@required
- (id<TableReservationKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<TableReservationKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (TableReservationKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<TableReservationKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<TableReservationKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) TableReservationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol TableReservationKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<TableReservationKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<TableReservationKotlinCoroutineContextElement> _Nullable)getKey:(id<TableReservationKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<TableReservationKotlinCoroutineContext>)minusKeyKey:(id<TableReservationKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<TableReservationKotlinCoroutineContext>)plusContext:(id<TableReservationKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface TableReservationKotlinRuntimeException : TableReservationKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface TableReservationKotlinIllegalStateException : TableReservationKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface TableReservationKotlinCancellationException : TableReservationKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TableReservationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol TableReservationKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(TableReservationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface TableReservationKotlinUnit : TableReservationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol TableReservationKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol TableReservationKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<TableReservationKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TableReservationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TableReservationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) TableReservationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface TableReservationKotlinx_serialization_coreSerializersModule : TableReservationBase
- (void)dumpToCollector:(id<TableReservationKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<TableReservationKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<TableReservationKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<TableReservationKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<TableReservationKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TableReservationKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<TableReservationKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TableReservationKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol TableReservationKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface TableReservationKotlinx_serialization_coreSerialKind : TableReservationBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol TableReservationKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<TableReservationKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TableReservationKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TableReservationKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<TableReservationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) TableReservationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface TableReservationKotlinNothing : TableReservationBase
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol TableReservationKotlinCoroutineContextElement <TableReservationKotlinCoroutineContext>
@required
@property (readonly) id<TableReservationKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol TableReservationKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol TableReservationKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<TableReservationKotlinKClass>)kClass provider:(id<TableReservationKotlinx_serialization_coreKSerializer> (^)(NSArray<id<TableReservationKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<TableReservationKotlinKClass>)kClass serializer:(id<TableReservationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<TableReservationKotlinKClass>)baseClass actualClass:(id<TableReservationKotlinKClass>)actualClass actualSerializer:(id<TableReservationKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<TableReservationKotlinKClass>)baseClass defaultDeserializerProvider:(id<TableReservationKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<TableReservationKotlinKClass>)baseClass defaultDeserializerProvider:(id<TableReservationKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<TableReservationKotlinKClass>)baseClass defaultSerializerProvider:(id<TableReservationKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol TableReservationKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol TableReservationKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol TableReservationKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol TableReservationKotlinKClass <TableReservationKotlinKDeclarationContainer, TableReservationKotlinKAnnotatedElement, TableReservationKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
