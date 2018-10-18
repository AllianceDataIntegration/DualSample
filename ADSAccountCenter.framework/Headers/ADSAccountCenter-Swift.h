// Generated by Apple Swift version 4.2 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ADSFoundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ADSAccountCenter",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@protocol ADSLogWriter;
@protocol ADSHostSSO;
@class ADSBackEndServiceConfig;
@class UINavigationController;
@protocol ADSShowConfig;
@class UIViewController;
@class UIView;

SWIFT_PROTOCOL("_TtP16ADSAccountCenter16ADSAccountCenter_")
@protocol ADSAccountCenter
@property (nonatomic, readonly, copy) NSString * _Nonnull pluginVersion;
@property (nonatomic, copy) NSString * _Nullable campaignId;
@property (nonatomic, readonly) BOOL isDeviceJailbroken;
@property (nonatomic, strong) id <ADSLogWriter> _Nonnull logWriter;
@property (nonatomic, strong) id <ADSHostSSO> _Nullable hostSSO;
- (void)bootstrapWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment :(void (^ _Nonnull)(void))complete;
- (void)bootstrapCerebroWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment backEndServices:(NSDictionary<NSString *, ADSBackEndServiceConfig *> * _Nonnull)backEndServices :(void (^ _Nonnull)(void))complete;
- (void)bootstrapWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment clientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret backEndServices:(NSDictionary<NSString *, ADSBackEndServiceConfig *> * _Nonnull)backEndServices :(void (^ _Nonnull)(void))complete;
- (void)bootstrapDualWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment :(void (^ _Nonnull)(BOOL))complete;
- (void)bootstrapDualWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment clientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret backEndServices:(NSDictionary<NSString *, ADSBackEndServiceConfig *> * _Nonnull)backEndServices :(void (^ _Nonnull)(BOOL))complete;
- (BOOL)shouldDisplayLoginFor:(enum ADSRequestedFeature)feature SWIFT_WARN_UNUSED_RESULT;
- (BOOL)canShow:(enum ADSRequestedFeature)feature SWIFT_WARN_UNUSED_RESULT;
- (void)show:(enum ADSRequestedFeature)feature with:(UINavigationController * _Nonnull)navigationController and:(id <ADSShowConfig> _Nonnull)config;
- (void)showWithFeature:(enum ADSRequestedFeature)feature navigateWithIn:(UIViewController * _Nonnull)viewController constrainedIn:(UIView * _Nonnull)view with:(id <ADSShowConfig> _Nonnull)config;
- (void)userStateChanged;
- (NSDictionary<NSString *, id> * _Nullable)getRegistrationObject SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16ADSAccountCenter23ADSClientIntegrationLog")
@interface ADSClientIntegrationLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

enum ADSLogSeverity : NSInteger;

SWIFT_PROTOCOL("_TtP16ADSAccountCenter12ADSLogWriter_")
@protocol ADSLogWriter
- (void)write:(NSString * _Nonnull)message with:(enum ADSLogSeverity)severity;
@end


SWIFT_CLASS("_TtC16ADSAccountCenter14ADSDebugWriter")
@interface ADSDebugWriter : NSObject <ADSLogWriter>
- (void)write:(NSString * _Nonnull)message with:(enum ADSLogSeverity)severity;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ADSCerebro;

SWIFT_CLASS("_TtC16ADSAccountCenter23ADSDefaultAccountCenter")
@interface ADSDefaultAccountCenter : NSObject <ADSAccountCenter>
@property (nonatomic, readonly, copy) NSString * _Nonnull pluginVersion;
@property (nonatomic, copy) NSString * _Nullable campaignId;
@property (nonatomic, strong) id <ADSLogWriter> _Nonnull logWriter;
@property (nonatomic, strong) id <ADSHostSSO> _Nullable hostSSO;
@property (nonatomic, strong) ADSCerebro * _Nonnull cerebro;
- (void)bootstrapDualWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment :(void (^ _Nonnull)(BOOL))complete;
- (void)bootstrapDualWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment clientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret backEndServices:(NSDictionary<NSString *, ADSBackEndServiceConfig *> * _Nonnull)backEndServices :(void (^ _Nonnull)(BOOL))complete;
- (void)bootstrapWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment :(void (^ _Nonnull)(void))complete;
- (void)bootstrapCerebroWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment backEndServices:(NSDictionary<NSString *, ADSBackEndServiceConfig *> * _Nonnull)backEndServices :(void (^ _Nonnull)(void))complete;
- (void)bootstrapWithClientName:(NSString * _Nonnull)clientName apiKey:(NSString * _Nonnull)apiKey environment:(enum ADSEnvironment)environment clientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret backEndServices:(NSDictionary<NSString *, ADSBackEndServiceConfig *> * _Nonnull)backEndServices :(void (^ _Nonnull)(void))complete;
- (void)show:(enum ADSRequestedFeature)feature with:(UINavigationController * _Nonnull)navigationController and:(id <ADSShowConfig> _Nonnull)config;
- (void)showWithFeature:(enum ADSRequestedFeature)feature navigateWithIn:(UIViewController * _Nonnull)viewController constrainedIn:(UIView * _Nonnull)view with:(id <ADSShowConfig> _Nonnull)config;
- (NSDictionary<NSString *, id> * _Nullable)getRegistrationObject SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL isDeviceJailbroken;
- (BOOL)shouldDisplayLoginFor:(enum ADSRequestedFeature)feature SWIFT_WARN_UNUSED_RESULT;
- (BOOL)canShow:(enum ADSRequestedFeature)feature SWIFT_WARN_UNUSED_RESULT;
- (void)userStateChanged;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP16ADSAccountCenter13ADSShowConfig_")
@protocol ADSShowConfig
@property (nonatomic, readonly) BOOL isEmbedded;
@property (nonatomic, copy) void (^ _Nonnull dismissHandler)(void);
@property (nonatomic, readonly, copy) void (^ _Nullable doneLoadingHandler)(void (^ _Nonnull)(void));
@property (nonatomic, readonly, copy) BOOL (^ _Nonnull errorHandler)(NSString * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable registrationObject;
@end


SWIFT_CLASS("_TtC16ADSAccountCenter20ADSDefaultShowConfig")
@interface ADSDefaultShowConfig : NSObject <ADSShowConfig>
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable registrationObject;
@property (nonatomic, readonly) BOOL isEmbedded;
@property (nonatomic, copy) void (^ _Nonnull dismissHandler)(void);
@property (nonatomic, readonly, copy) void (^ _Nullable doneLoadingHandler)(void (^ _Nonnull)(void));
@property (nonatomic, readonly, copy) BOOL (^ _Nonnull errorHandler)(NSString * _Nonnull, NSString * _Nonnull);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP16ADSAccountCenter10ADSHostSSO_")
@protocol ADSHostSSO
/// Used by ADS to determine result of shouldDisplayLogin()
///
/// returns:
/// ADSHostUserState = { Untrusted, Recognized, Trusted }
@property (nonatomic, readonly) enum ADSHostUserState userState;
/// Used by ADS to determine result of shouldDisplayLogin()
///
/// returns:
/// ADSUserLinkStatus = { Linked, Unlinked, LinkError }
@property (nonatomic, readonly) enum ADSLinkStatus userLinkStatus;
/// Used by ADS to notify clients when the link status has changed.
/// \param status the new status where ADSLinkStatus = { Unlinked, Linked }
///
- (void)linkStatusChangedTo:(enum ADSLinkStatus)status;
/// Used by ADS to get SAML assertion from host to perform a federated login.
/// Encodes the federated identifier and division number.
/// Async call to return SAML assertion generated by host app web services.
/// Method registered by host app at launch.
/// Host app may need to display a sign in screen before calling completion with the result or error.
/// \param reason The reason for the assertion { Login, Link }
///
/// \param completion The completion block for the host to call
///
- (void)samlAssertionWith:(enum ADSRequestedSamlReason)reason completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
/// Used by ADS in offline mode when a users tries to access the MVC.
/// Returns a unique identifier for the logged in user.
/// Must co-vary with the host app user account, so is usually the federated id or a hash of the federated id.
/// Returns nil if a user is not logged in or the current user has not linked the host app and ADS accounts.
/// Method registered by host app at launch.
/// \param completion The completion block for the host to call
///
- (void)accessKey:(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
/// Used by ADS to inform client when an error occurs due to a user trying to deep link into the plugin.
/// \param message A configurable error message.
///
/// \param code The error code.
///
///
/// returns:
/// A Bool where true indicates the client will handle the error messaging and false indicates the plugin should handle the error messaging
- (BOOL)deepLinkErrorWithMessage:(NSString * _Nonnull)message code:(NSString * _Nonnull)code SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, ADSLogSeverity, closed) {
  ADSLogSeverityVerbose = 0,
  ADSLogSeverityInfo = 1,
  ADSLogSeverityWarning = 2,
  ADSLogSeverityError = 3,
};



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
