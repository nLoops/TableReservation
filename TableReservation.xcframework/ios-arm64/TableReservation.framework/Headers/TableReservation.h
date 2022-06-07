#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TableReservationTableReservation, TableReservationTableRestaurantOption, TableReservationTableRestaurant, TableReservationHomeReservationEvents, TableReservationHomeReservationEventsGetReservationList, TableReservationHomeReservationEventsLoadDefault, TableReservationCoreViewModelCompanion, TableReservationCoreViewModel, TableReservationHomeReservationViewState, TableReservationCoreCommonFlow<T>, TableReservationKotlinUnit, TableReservationKotlinThrowable, TableReservationKotlinArray<T>, TableReservationKotlinException, TableReservationKotlinRuntimeException, TableReservationKotlinIllegalStateException;

@protocol TableReservationKotlinx_coroutines_coreCoroutineScope, TableReservationCoreViewState, TableReservationKotlinCoroutineContext, TableReservationKotlinx_coroutines_coreFlowCollector, TableReservationKotlinx_coroutines_coreFlow, TableReservationKtor_ioCloseable, TableReservationKotlinCoroutineContextElement, TableReservationKotlinCoroutineContextKey, TableReservationKotlinIterator;

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TableReservation")))
@interface TableReservationTableReservation : TableReservationBase
- (instancetype)initWithId:(NSString *)id restaurant:(NSString *)restaurant logo:(NSString *)logo menuLink:(NSString *)menuLink branchId:(NSString *)branchId date:(NSString *)date time:(NSString *)time location:(NSString *)location zone:(NSString *)zone total:(NSString *)total notes:(NSString *)notes status:(NSString *)status tableFor:(int32_t)tableFor invoiceLink:(NSString *)invoiceLink isActive:(BOOL)isActive __attribute__((swift_name("init(id:restaurant:logo:menuLink:branchId:date:time:location:zone:total:notes:status:tableFor:invoiceLink:isActive:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (int32_t)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (BOOL)component15 __attribute__((swift_name("component15()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (TableReservationTableReservation *)doCopyId:(NSString *)id restaurant:(NSString *)restaurant logo:(NSString *)logo menuLink:(NSString *)menuLink branchId:(NSString *)branchId date:(NSString *)date time:(NSString *)time location:(NSString *)location zone:(NSString *)zone total:(NSString *)total notes:(NSString *)notes status:(NSString *)status tableFor:(int32_t)tableFor invoiceLink:(NSString *)invoiceLink isActive:(BOOL)isActive __attribute__((swift_name("doCopy(id:restaurant:logo:menuLink:branchId:date:time:location:zone:total:notes:status:tableFor:invoiceLink:isActive:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *branchId __attribute__((swift_name("branchId")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *invoiceLink __attribute__((swift_name("invoiceLink")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSString *logo __attribute__((swift_name("logo")));
@property (readonly) NSString *menuLink __attribute__((swift_name("menuLink")));
@property (readonly) NSString *notes __attribute__((swift_name("notes")));
@property (readonly) NSString *restaurant __attribute__((swift_name("restaurant")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) int32_t tableFor __attribute__((swift_name("tableFor")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@property (readonly) NSString *total __attribute__((swift_name("total")));
@property (readonly) NSString *zone __attribute__((swift_name("zone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TableRestaurant")))
@interface TableReservationTableRestaurant : TableReservationBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name cuisine:(NSString *)cuisine distance:(NSString *)distance address:(NSString *)address coverPicture:(NSString *)coverPicture logoPicture:(NSString *)logoPicture rating:(NSString *)rating ratingCount:(int32_t)ratingCount about:(NSString *)about images:(NSArray<NSString *> *)images options:(NSArray<TableReservationTableRestaurantOption *> *)options menuLink:(NSString *)menuLink mapLink:(NSString *)mapLink __attribute__((swift_name("init(id:name:cuisine:distance:address:coverPicture:logoPicture:rating:ratingCount:about:images:options:menuLink:mapLink:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSArray<NSString *> *)component11 __attribute__((swift_name("component11()")));
- (NSArray<TableReservationTableRestaurantOption *> *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (TableReservationTableRestaurant *)doCopyId:(NSString *)id name:(NSString *)name cuisine:(NSString *)cuisine distance:(NSString *)distance address:(NSString *)address coverPicture:(NSString *)coverPicture logoPicture:(NSString *)logoPicture rating:(NSString *)rating ratingCount:(int32_t)ratingCount about:(NSString *)about images:(NSArray<NSString *> *)images options:(NSArray<TableReservationTableRestaurantOption *> *)options menuLink:(NSString *)menuLink mapLink:(NSString *)mapLink __attribute__((swift_name("doCopy(id:name:cuisine:distance:address:coverPicture:logoPicture:rating:ratingCount:about:images:options:menuLink:mapLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *about __attribute__((swift_name("about")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSString *coverPicture __attribute__((swift_name("coverPicture")));
@property (readonly) NSString *cuisine __attribute__((swift_name("cuisine")));
@property (readonly) NSString *distance __attribute__((swift_name("distance")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@property (readonly) NSString *logoPicture __attribute__((swift_name("logoPicture")));
@property (readonly) NSString *mapLink __attribute__((swift_name("mapLink")));
@property (readonly) NSString *menuLink __attribute__((swift_name("menuLink")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<TableReservationTableRestaurantOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *rating __attribute__((swift_name("rating")));
@property (readonly) int32_t ratingCount __attribute__((swift_name("ratingCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TableRestaurantOption")))
@interface TableReservationTableRestaurantOption : TableReservationBase
- (instancetype)initWithLogo:(NSString *)logo title:(NSString *)title description:(NSString *)description __attribute__((swift_name("init(logo:title:description:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (TableReservationTableRestaurantOption *)doCopyLogo:(NSString *)logo title:(NSString *)title description:(NSString *)description __attribute__((swift_name("doCopy(logo:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *logo __attribute__((swift_name("logo")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((swift_name("HomeReservationEvents")))
@interface TableReservationHomeReservationEvents : TableReservationBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.GetReservationList")))
@interface TableReservationHomeReservationEventsGetReservationList : TableReservationHomeReservationEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getReservationList __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationHomeReservationEventsGetReservationList *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeReservationEvents.LoadDefault")))
@interface TableReservationHomeReservationEventsLoadDefault : TableReservationHomeReservationEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loadDefault __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TableReservationHomeReservationEventsLoadDefault *shared __attribute__((swift_name("shared")));
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
- (instancetype)initWithRestaurants:(NSArray<TableReservationTableRestaurant *> *)restaurants reservations:(NSArray<TableReservationTableReservation *> *)reservations error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("init(restaurants:reservations:error:isEmpty:isLoading:)"))) __attribute__((objc_designated_initializer));
- (NSArray<TableReservationTableRestaurant *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<TableReservationTableReservation *> *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (TableReservationHomeReservationViewState *)doCopyRestaurants:(NSArray<TableReservationTableRestaurant *> *)restaurants reservations:(NSArray<TableReservationTableReservation *> *)reservations error:(NSString * _Nullable)error isEmpty:(BOOL)isEmpty isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(restaurants:reservations:error:isEmpty:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) NSArray<TableReservationTableReservation *> *reservations __attribute__((swift_name("reservations")));
@property (readonly) NSArray<TableReservationTableRestaurant *> *restaurants __attribute__((swift_name("restaurants")));
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

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol TableReservationKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<TableReservationKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<TableReservationKotlinCoroutineContextElement> _Nullable)getKey:(id<TableReservationKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<TableReservationKotlinCoroutineContext>)minusKeyKey:(id<TableReservationKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<TableReservationKotlinCoroutineContext>)plusContext:(id<TableReservationKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
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

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol TableReservationKotlinCoroutineContextElement <TableReservationKotlinCoroutineContext>
@required
@property (readonly) id<TableReservationKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol TableReservationKotlinCoroutineContextKey
@required
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

__attribute__((swift_name("KotlinIterator")))
@protocol TableReservationKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
