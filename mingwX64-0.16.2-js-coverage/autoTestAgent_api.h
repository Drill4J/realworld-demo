#ifndef KONAN_AUTOTESTAGENT_H
#define KONAN_AUTOTESTAGENT_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            autoTestAgent_KBoolean;
#else
typedef _Bool           autoTestAgent_KBoolean;
#endif
typedef unsigned short     autoTestAgent_KChar;
typedef signed char        autoTestAgent_KByte;
typedef short              autoTestAgent_KShort;
typedef int                autoTestAgent_KInt;
typedef long long          autoTestAgent_KLong;
typedef unsigned char      autoTestAgent_KUByte;
typedef unsigned short     autoTestAgent_KUShort;
typedef unsigned int       autoTestAgent_KUInt;
typedef unsigned long long autoTestAgent_KULong;
typedef float              autoTestAgent_KFloat;
typedef double             autoTestAgent_KDouble;
#ifndef _MSC_VER
typedef float __attribute__ ((__vector_size__ (16))) autoTestAgent_KVector128;
#else
#include <xmmintrin.h>
typedef __m128 autoTestAgent_KVector128;
#endif
typedef void*              autoTestAgent_KNativePtr;
struct autoTestAgent_KType;
typedef struct autoTestAgent_KType autoTestAgent_KType;

typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Byte;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Short;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Int;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Long;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Float;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Double;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Char;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Boolean;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Unit;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_SessionProvider;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_SessionProviderStub;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Any;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_logger_NativeApiStub;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_logger_api_Logger;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_collections_Map;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_Agent;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_ByteArray;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_native_concurrent_AtomicReference;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_TestListener;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorage;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_Actions;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_Actions_START;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_Actions_STOP;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_Actions_ADD_TESTS;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_Array;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlinx_serialization_encoding_Decoder;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlinx_serialization_encoding_Encoder;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlinx_serialization_KSerializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_SessionController;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_PASSED;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_FAILED;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_SKIPPED;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_ERROR;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_UNKNOWN;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlin_collections_List;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_kotlinx_serialization_json_Json;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_logger_api_LogLevel;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_$serializer;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_Companion;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClient;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManager;
typedef struct {
  autoTestAgent_KNativePtr pinned;
} autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub;

extern void Java_com_epam_drill_SessionProvider_setTestName(void* env, void* thiz, void* arg1);
extern void Java_com_epam_drill_SessionProvider_startSession(void* env, void* thiz, void* arg1, void* arg2, autoTestAgent_KUByte arg3, void* arg4, autoTestAgent_KUByte arg5);
extern void Java_com_epam_drill_SessionProvider_stopSession(void* env, void* thiz, void* arg1);
extern autoTestAgent_KInt Java_com_epam_drill_logger_NativeApi_getLogLevel(void* env, void* thiz);
extern void Java_com_epam_drill_logger_NativeApi_output(void* env, void* thiz, void* arg1);
extern void Java_com_epam_drill_logger_NativeApi_setFilename(void* env, void* thiz, void* arg1);
extern void Java_com_epam_drill_logger_NativeApi_setLogLevel(void* env, void* thiz, autoTestAgent_KInt arg1);
extern void JNI_CreateJavaVM();
extern void JNI_GetCreatedJavaVMs();
extern void JNI_GetDefaultJavaVMInitArgs();
extern void JNI_OnUnload();
extern void* Java_com_epam_drill_test_agent_AgentConfig_adminAddress(void* env, void* thiz);
extern void* Java_com_epam_drill_test_agent_AgentConfig_agentId(void* env, void* thiz);
extern autoTestAgent_KInt Agent_OnLoad(void* vmPointer, const char* options, autoTestAgent_KLong reservedPtr);
extern void Agent_OnUnload(void* vmPointer);
extern void* Java_com_epam_drill_test_agent_AgentConfig_agentUrl(void* env, void* thiz);
extern autoTestAgent_KUInt checkEx(autoTestAgent_KUInt errCode, const char* funName);
extern void* currentEnvs();
extern void* Java_com_epam_drill_test_agent_AgentConfig_dispatcherUrl(void* env, void* thiz);
extern void* Java_com_epam_drill_test_agent_AgentConfig_extensionUrl(void* env, void* thiz);
extern void* Java_com_epam_drill_test_agent_AgentConfig_extensionVersion(void* env, void* thiz);
extern void* getJvm();
extern void* Java_com_epam_drill_test_agent_AgentConfig_groupId(void* env, void* thiz);
extern void* jvmtii();
extern void* Java_com_epam_drill_test_agent_AgentConfig_proxyUrl(void* env, void* thiz);
extern void* Java_com_epam_drill_test_agent_ThreadStorage_sessionId(void* env, void* thiz);
extern void Java_com_epam_drill_test_agent_ThreadStorage_startSession(void* env, void* thiz, void* arg1);
extern void Java_com_epam_drill_test_agent_ThreadStorage_stopSession(void* env, void* thiz);

typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(autoTestAgent_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  autoTestAgent_KBoolean (*IsInstance)(autoTestAgent_KNativePtr ref, const autoTestAgent_KType* type);
  autoTestAgent_kref_kotlin_Byte (*createNullableByte)(autoTestAgent_KByte);
  autoTestAgent_kref_kotlin_Short (*createNullableShort)(autoTestAgent_KShort);
  autoTestAgent_kref_kotlin_Int (*createNullableInt)(autoTestAgent_KInt);
  autoTestAgent_kref_kotlin_Long (*createNullableLong)(autoTestAgent_KLong);
  autoTestAgent_kref_kotlin_Float (*createNullableFloat)(autoTestAgent_KFloat);
  autoTestAgent_kref_kotlin_Double (*createNullableDouble)(autoTestAgent_KDouble);
  autoTestAgent_kref_kotlin_Char (*createNullableChar)(autoTestAgent_KChar);
  autoTestAgent_kref_kotlin_Boolean (*createNullableBoolean)(autoTestAgent_KBoolean);
  autoTestAgent_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            void (*setTestName)(void* env, void* thiz, void* arg1);
            void (*startSession)(void* env, void* thiz, void* arg1, void* arg2, autoTestAgent_KUByte arg3, void* arg4, autoTestAgent_KUByte arg5);
            void (*stopSession)(void* env, void* thiz, void* arg1);
            struct {
              autoTestAgent_KType* (*_type)(void);
              autoTestAgent_kref_com_epam_drill_SessionProvider (*_instance)();
              void (*setTestName)(autoTestAgent_kref_com_epam_drill_SessionProvider thiz, const char* testName);
              void (*startSession)(autoTestAgent_kref_com_epam_drill_SessionProvider thiz, const char* sessionId, const char* testType, autoTestAgent_KBoolean isRealtime, const char* testName, autoTestAgent_KBoolean isGlobal);
              void (*stopSession)(autoTestAgent_kref_com_epam_drill_SessionProvider thiz, const char* sessionId);
            } SessionProvider;
            struct {
              autoTestAgent_KType* (*_type)(void);
              autoTestAgent_kref_com_epam_drill_SessionProviderStub (*_instance)();
              void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_SessionProviderStub thiz);
              void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_SessionProviderStub thiz, void* set);
              autoTestAgent_kref_com_epam_drill_SessionProviderStub (*invoke)(autoTestAgent_kref_com_epam_drill_SessionProviderStub thiz, void* ignored);
              void* (*self)(autoTestAgent_kref_com_epam_drill_SessionProviderStub thiz);
              void* (*self_)(autoTestAgent_kref_com_epam_drill_SessionProviderStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
            } SessionProviderStub;
            struct {
              autoTestAgent_KInt (*getLogLevel)(void* env, void* thiz);
              void (*output)(void* env, void* thiz, void* arg1);
              void (*setFilename)(void* env, void* thiz, void* arg1);
              void (*setLogLevel)(void* env, void* thiz, autoTestAgent_KInt arg1);
              struct {
                autoTestAgent_KType* (*_type)(void);
                autoTestAgent_kref_com_epam_drill_logger_NativeApiStub (*_instance)();
                void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_logger_NativeApiStub thiz);
                void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_logger_NativeApiStub thiz, void* set);
                autoTestAgent_kref_com_epam_drill_logger_NativeApiStub (*invoke)(autoTestAgent_kref_com_epam_drill_logger_NativeApiStub thiz, void* ignored);
                void* (*self)(autoTestAgent_kref_com_epam_drill_logger_NativeApiStub thiz);
                void* (*self_)(autoTestAgent_kref_com_epam_drill_logger_NativeApiStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
              } NativeApiStub;
            } logger;
            struct {
              struct {
                const char* (*get_WRONG_PARAMS)();
                autoTestAgent_kref_com_epam_drill_logger_api_Logger (*get_mainLogger)();
                void (*JNI_CreateJavaVM_)();
                void (*JNI_GetCreatedJavaVMs_)();
                void (*JNI_GetDefaultJavaVMInitArgs_)();
                void (*JNI_OnUnload_)();
                void* (*adminAddress)(void* env, void* thiz);
                void* (*agentId)(void* env, void* thiz);
                autoTestAgent_KInt (*agentOnLoad)(void* vmPointer, const char* options, autoTestAgent_KLong reservedPtr);
                void (*agentOnUnload)(void* vmPointer);
                void* (*agentUrl)(void* env, void* thiz);
                void (*callbackRegister)();
                autoTestAgent_KUInt (*checkEx_)(autoTestAgent_KUInt errCode, const char* funName);
                void (*configureHooks)();
                void* (*currentEnvs_)();
                void* (*dispatcherUrl)(void* env, void* thiz);
                void (*enableJvmtiEventClassFileLoadHook)(void* thread);
                void (*enableJvmtiEventVmDeath)(void* thread);
                void (*enableJvmtiEventVmInit)(void* thread);
                void* (*extensionUrl)(void* env, void* thiz);
                void* (*extensionVersion)(void* env, void* thiz);
                void* (*getJvm_)();
                void* (*groupId)(void* env, void* thiz);
                void (*jvmtiEventVMInitEvent)(void* env, void* jniEnv, void* thread);
                void* (*jvmtii_)();
                void* (*proxyUrl)(void* env, void* thiz);
                void* (*sessionId)(void* env, void* thiz);
                void (*startSession)(void* env, void* thiz, void* arg1);
                void (*stopSession)(void* env, void* thiz);
                void (*vmDeathEvent)(void* jvmtiEnv, void* jniEnv);
                autoTestAgent_kref_kotlin_collections_Map (*asParams)(const char* thiz);
                autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig (*toAgentParams)(const char* thiz);
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_Agent (*_instance)();
                  autoTestAgent_KInt (*agentOnLoad)(autoTestAgent_kref_com_epam_drill_test_agent_Agent thiz, const char* options);
                  void (*agentOnUnload)(autoTestAgent_kref_com_epam_drill_test_agent_Agent thiz);
                } Agent;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformer (*_instance)();
                  autoTestAgent_kref_kotlin_ByteArray (*transform)(autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformer thiz, const char* className, autoTestAgent_kref_kotlin_ByteArray classBytes, autoTestAgent_kref_kotlin_Any loader, autoTestAgent_kref_kotlin_Any protectionDomain);
                } AgentClassTransformer;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub (*_instance)();
                  void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub thiz);
                  void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub thiz, void* set);
                  autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub (*invoke)(autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub thiz, void* ignored);
                  void* (*self)(autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub thiz);
                  autoTestAgent_kref_kotlin_ByteArray (*transform)(autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub thiz, const char* className, autoTestAgent_kref_kotlin_ByteArray classBytes, autoTestAgent_kref_kotlin_Any loader, autoTestAgent_kref_kotlin_Any protectionDomain);
                  void* (*self_)(autoTestAgent_kref_com_epam_drill_test_agent_AgentClassTransformerStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
                } AgentClassTransformerStub;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig (*_instance)();
                  autoTestAgent_kref_kotlin_native_concurrent_AtomicReference (*get__config)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig (*get_config)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*adminAddress)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*agentId)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*agentUrl)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*dispatcherUrl)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*extensionUrl)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*extensionVersion)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*groupId)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                  const char* (*proxyUrl)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfig thiz);
                } AgentConfig;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub (*_instance)();
                  void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub thiz);
                  void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub thiz, void* set);
                  autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub (*invoke)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub thiz, void* ignored);
                  void* (*self)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub thiz);
                  void* (*self_)(autoTestAgent_kref_com_epam_drill_test_agent_AgentConfigStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
                } AgentConfigStub;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder (*PropertyDecoder)(autoTestAgent_kref_kotlin_collections_Map map);
                  autoTestAgent_kref_kotlin_collections_Map (*get_map)(autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder thiz);
                  autoTestAgent_KInt (*decodeCollectionSize)(autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder thiz, autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor descriptor);
                  autoTestAgent_KInt (*decodeElementIndex)(autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder thiz, autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor descriptor);
                  autoTestAgent_KBoolean (*decodeTaggedBoolean)(autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder thiz, const char* tag);
                  autoTestAgent_KInt (*decodeTaggedEnum)(autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder thiz, const char* tag, autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor enumDescriptor);
                  autoTestAgent_KLong (*decodeTaggedLong)(autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder thiz, const char* tag);
                  autoTestAgent_kref_kotlin_Any (*decodeTaggedValue)(autoTestAgent_kref_com_epam_drill_test_agent_PropertyDecoder thiz, const char* tag);
                } PropertyDecoder;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder (*StringPropertyDecoder)(autoTestAgent_kref_kotlin_collections_Map map);
                  autoTestAgent_kref_kotlin_collections_Map (*get_map)(autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder thiz);
                  autoTestAgent_KInt (*decodeCollectionSize)(autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder thiz, autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor descriptor);
                  autoTestAgent_KInt (*decodeElementIndex)(autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder thiz, autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor descriptor);
                  autoTestAgent_KBoolean (*decodeTaggedBoolean)(autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder thiz, const char* tag);
                  autoTestAgent_KLong (*decodeTaggedLong)(autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder thiz, const char* tag);
                  autoTestAgent_kref_kotlin_Any (*decodeTaggedValue)(autoTestAgent_kref_com_epam_drill_test_agent_StringPropertyDecoder thiz, const char* tag);
                } StringPropertyDecoder;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_TestListener (*_instance)();
                  const char* (*getData)(autoTestAgent_kref_com_epam_drill_test_agent_TestListener thiz);
                  void (*reset)(autoTestAgent_kref_com_epam_drill_test_agent_TestListener thiz);
                } TestListener;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub (*_instance)();
                  void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz);
                  void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz, void* set);
                  const char* (*getData)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz);
                  autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub (*invoke)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz, void* ignored);
                  void (*reset)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz);
                  void* (*self)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz);
                  void (*testFinished)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz, const char* test, const char* status);
                  void (*testIgnored)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz, const char* test);
                  void (*testStarted)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz, const char* test);
                  void* (*self_)(autoTestAgent_kref_com_epam_drill_test_agent_TestListenerStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
                } TestListenerStub;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorage (*_instance)();
                  const char* (*sessionId)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorage thiz);
                  void (*startSession)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorage thiz, const char* testName);
                  void (*stopSession)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorage thiz);
                  const char* (*testName)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorage thiz);
                } ThreadStorage;
                struct {
                  autoTestAgent_KType* (*_type)(void);
                  autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub (*_instance)();
                  void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz);
                  void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz, void* set);
                  void (*clear)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz);
                  autoTestAgent_kref_kotlin_Any (*getStorage)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz);
                  autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub (*invoke)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz, void* ignored);
                  void (*memorizeTestName)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz, const char* testName);
                  void* (*self)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz);
                  const char* (*testName)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz);
                  void* (*self_)(autoTestAgent_kref_com_epam_drill_test_agent_ThreadStorageStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
                } ThreadStorageStub;
                struct {
                  autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession (*stopAction)(const char* sessionId, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun testRun);
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_Actions (*get)(); /* enum entry for START. */
                    } START;
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_Actions (*get)(); /* enum entry for STOP. */
                    } STOP;
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_Actions (*get)(); /* enum entry for ADD_TESTS. */
                    } ADD_TESTS;
                  } Actions;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests (*AddTests)(autoTestAgent_KInt seen1, const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload payload, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests (*AddTests_)(const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload payload);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload (*get_payload)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz);
                    const char* (*get_type)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz, const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload payload);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTests_Companion thiz);
                    } Companion;
                  } AddTests;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload (*AddTestsPayload)(autoTestAgent_KInt seen1, const char* sessionId, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun testRun, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload (*AddTestsPayload_)(const char* sessionId, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun testRun);
                    const char* (*get_sessionId)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*get_testRun)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz, const char* sessionId, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun testRun);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_AddTestsPayload_Companion thiz);
                    } Companion;
                  } AddTestsPayload;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_SessionController (*_instance)();
                    autoTestAgent_kref_kotlin_native_concurrent_AtomicReference (*get_sessionId)(autoTestAgent_kref_com_epam_drill_test_agent_actions_SessionController thiz);
                    autoTestAgent_kref_kotlin_Unit (*startSession)(autoTestAgent_kref_com_epam_drill_test_agent_actions_SessionController thiz, const char* customSessionId, const char* testType, autoTestAgent_KBoolean isRealtime, const char* testName, autoTestAgent_KBoolean isGlobal);
                    autoTestAgent_kref_kotlin_Unit (*stopSession)(autoTestAgent_kref_com_epam_drill_test_agent_actions_SessionController thiz, const char* sessionIds);
                  } SessionController;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession (*StartSession)(autoTestAgent_KInt seen1, const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload payload, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession (*StartSession_)(const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload payload);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*get_payload)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz);
                    const char* (*get_type)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz, const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload payload);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSession_Companion thiz);
                    } Companion;
                  } StartSession;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*StartSessionPayload)(autoTestAgent_KInt seen1, const char* sessionId, const char* testType, const char* testName, autoTestAgent_KBoolean isRealtime, autoTestAgent_KBoolean isGlobal, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*StartSessionPayload_)(const char* sessionId, const char* testType, const char* testName, autoTestAgent_KBoolean isRealtime, autoTestAgent_KBoolean isGlobal);
                    autoTestAgent_KBoolean (*get_isGlobal)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    autoTestAgent_KBoolean (*get_isRealtime)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    const char* (*get_sessionId)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    const char* (*get_testName)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    const char* (*get_testType)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    const char* (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    const char* (*component3)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    autoTestAgent_KBoolean (*component4)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    autoTestAgent_KBoolean (*component5)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz, const char* sessionId, const char* testType, const char* testName, autoTestAgent_KBoolean isRealtime, autoTestAgent_KBoolean isGlobal);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload_Companion thiz);
                    } Companion;
                  } StartSessionPayload;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse (*StartSessionResponse)(autoTestAgent_KInt seen1, autoTestAgent_KInt code, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData data, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse (*StartSessionResponse_)(autoTestAgent_KInt code, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData data);
                    autoTestAgent_KInt (*get_code)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData (*get_data)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz);
                    autoTestAgent_KInt (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz, autoTestAgent_KInt code, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData data);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponse_Companion thiz);
                    } Companion;
                  } StartSessionResponse;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData (*StartSessionResponseData)(autoTestAgent_KInt seen1, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload payload, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData (*StartSessionResponseData_)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload payload);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*get_payload)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData thiz, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionPayload payload);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StartSessionResponseData_Companion thiz);
                    } Companion;
                  } StartSessionResponseData;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession (*StopSession)(autoTestAgent_KInt seen1, const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload payload, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession (*StopSession_)(const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload payload);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload (*get_payload)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz);
                    const char* (*get_type)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz, const char* type, autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload payload);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSession_Companion thiz);
                    } Companion;
                  } StopSession;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload (*StopSessionPayload)(autoTestAgent_KInt seen1, const char* sessionId, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun testRun, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload (*StopSessionPayload_)(const char* sessionId, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun testRun);
                    const char* (*get_sessionId)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*get_testRun)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz, const char* sessionId, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun testRun);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_StopSessionPayload_Companion thiz);
                    } Companion;
                  } StopSessionPayload;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo (*TestInfo)(autoTestAgent_KInt seen1, const char* name, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult result, autoTestAgent_KLong startedAt, autoTestAgent_KLong finishedAt, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo (*TestInfo_)(const char* name, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult result, autoTestAgent_KLong startedAt, autoTestAgent_KLong finishedAt);
                    autoTestAgent_KLong (*get_finishedAt)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    const char* (*get_name)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*get_result)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    autoTestAgent_KLong (*get_startedAt)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    autoTestAgent_KLong (*component3)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    autoTestAgent_KLong (*component4)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz, const char* name, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult result, autoTestAgent_KLong startedAt, autoTestAgent_KLong finishedAt);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestInfo_Companion thiz);
                    } Companion;
                  } TestInfo;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*get)(); /* enum entry for PASSED. */
                    } PASSED;
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*get)(); /* enum entry for FAILED. */
                    } FAILED;
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*get)(); /* enum entry for SKIPPED. */
                    } SKIPPED;
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*get)(); /* enum entry for ERROR. */
                    } ERROR;
                    struct {
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*get)(); /* enum entry for UNKNOWN. */
                    } UNKNOWN;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_Companion (*_instance)();
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult (*getByMapping)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestResult_Companion thiz, const char* value);
                    } Companion;
                  } TestResult;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*TestRun)(autoTestAgent_KInt seen1, const char* name, autoTestAgent_KLong startedAt, autoTestAgent_KLong finishedAt, autoTestAgent_kref_kotlin_collections_List tests, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*TestRun_)(const char* name, autoTestAgent_KLong startedAt, autoTestAgent_KLong finishedAt, autoTestAgent_kref_kotlin_collections_List tests);
                    autoTestAgent_KLong (*get_finishedAt)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    const char* (*get_name)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    autoTestAgent_KLong (*get_startedAt)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    autoTestAgent_kref_kotlin_collections_List (*get_tests)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    autoTestAgent_KLong (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    autoTestAgent_KLong (*component3)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    autoTestAgent_kref_kotlin_collections_List (*component4)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz, const char* name, autoTestAgent_KLong startedAt, autoTestAgent_KLong finishedAt, autoTestAgent_kref_kotlin_collections_List tests);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_actions_TestRun_Companion thiz);
                    } Companion;
                  } TestRun;
                } actions;
                struct {
                  autoTestAgent_kref_kotlinx_serialization_json_Json (*get_json)();
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig (*AgentRawConfig)(autoTestAgent_KInt seen1, const char* agentId, const char* groupId, const char* pluginId, const char* adminAddress, const char* drillInstallationDir, const char* logFile, const char* logLevel, const char* rawFrameworkPlugins, const char* sessionId, autoTestAgent_KBoolean isRealtimeEnable, autoTestAgent_KBoolean isGlobal, const char* browserProxyAddress, autoTestAgent_KBoolean isManuallyControlled, autoTestAgent_KBoolean sessionForEachTest, const char* dispatcherUrl, const char* agentUrl, const char* extensionUrl, const char* extensionVersion, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig (*AgentRawConfig_)(const char* agentId, const char* groupId, const char* pluginId, const char* adminAddress, const char* drillInstallationDir, const char* logFile, const char* logLevel, const char* rawFrameworkPlugins, const char* sessionId, autoTestAgent_KBoolean isRealtimeEnable, autoTestAgent_KBoolean isGlobal, const char* browserProxyAddress, autoTestAgent_KBoolean isManuallyControlled, autoTestAgent_KBoolean sessionForEachTest, const char* dispatcherUrl, const char* agentUrl, const char* extensionUrl, const char* extensionVersion);
                    const char* (*get_adminAddress)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_agentId)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_agentUrl)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_browserProxyAddress)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_dispatcherUrl)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_drillInstallationDir)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_extensionUrl)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_extensionVersion)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_kref_kotlin_collections_List (*get_frameworkPlugins)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_groupId)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*get_isGlobal)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*get_isManuallyControlled)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*get_isRealtimeEnable)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_kref_com_epam_drill_logger_api_LogLevel (*get_level)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_logFile)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_logLevel)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_pluginId)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_rawFrameworkPlugins)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*get_sessionForEachTest)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*get_sessionId)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*component10)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*component11)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component12)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*component13)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_KBoolean (*component14)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component15)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component16)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component17)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component18)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component3)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component4)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component5)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component6)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component7)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component8)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*component9)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz, const char* agentId, const char* groupId, const char* pluginId, const char* adminAddress, const char* drillInstallationDir, const char* logFile, const char* logLevel, const char* rawFrameworkPlugins, const char* sessionId, autoTestAgent_KBoolean isRealtimeEnable, autoTestAgent_KBoolean isGlobal, const char* browserProxyAddress, autoTestAgent_KBoolean isManuallyControlled, autoTestAgent_KBoolean sessionForEachTest, const char* dispatcherUrl, const char* agentUrl, const char* extensionUrl, const char* extensionVersion);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_config_AgentRawConfig_Companion thiz);
                    } Companion;
                  } AgentRawConfig;
                } config;
                struct {
                  autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse (*httpCall)(const char* endpoint, autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest request);
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest (*HttpRequest)(autoTestAgent_KInt seen1, const char* method, autoTestAgent_kref_kotlin_collections_Map headers, const char* body, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest (*HttpRequest_)(const char* method, autoTestAgent_kref_kotlin_collections_Map headers, const char* body);
                    const char* (*get_body)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    autoTestAgent_kref_kotlin_collections_Map (*get_headers)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    const char* (*get_method)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    const char* (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    autoTestAgent_kref_kotlin_collections_Map (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    const char* (*component3)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz, const char* method, autoTestAgent_kref_kotlin_collections_Map headers, const char* body);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpRequest_Companion thiz);
                    } Companion;
                  } HttpRequest;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse (*HttpResponse)(autoTestAgent_KInt seen1, autoTestAgent_KInt code, autoTestAgent_kref_kotlin_collections_Map headers, const char* body, autoTestAgent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse (*HttpResponse_)(autoTestAgent_KInt code, autoTestAgent_kref_kotlin_collections_Map headers, const char* body);
                    const char* (*get_body)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    autoTestAgent_KInt (*get_code)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    autoTestAgent_kref_kotlin_collections_Map (*get_headers)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    autoTestAgent_KInt (*component1)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    autoTestAgent_kref_kotlin_collections_Map (*component2)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    const char* (*component3)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse (*copy)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz, autoTestAgent_KInt code, autoTestAgent_kref_kotlin_collections_Map headers, const char* body);
                    autoTestAgent_KBoolean (*equals)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz, autoTestAgent_kref_kotlin_Any other);
                    autoTestAgent_KInt (*hashCode)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    const char* (*toString)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse thiz);
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_$serializer (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_$serializer thiz);
                      autoTestAgent_kref_kotlin_Array (*childSerializers)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_$serializer thiz);
                      autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse (*deserialize)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_$serializer thiz, autoTestAgent_kref_kotlinx_serialization_encoding_Encoder encoder, autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse value);
                    } $serializer;
                    struct {
                      autoTestAgent_KType* (*_type)(void);
                      autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_Companion (*_instance)();
                      autoTestAgent_kref_kotlinx_serialization_KSerializer (*serializer)(autoTestAgent_kref_com_epam_drill_test_agent_http_HttpResponse_Companion thiz);
                    } Companion;
                  } HttpResponse;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClient (*_instance)();
                    const char* (*httpCall)(autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClient thiz, const char* endpoint, const char* request);
                  } JvmHttpClient;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub (*_instance)();
                    void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub thiz);
                    void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub thiz, void* set);
                    const char* (*httpCall)(autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub thiz, const char* endpoint, const char* request);
                    autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub (*invoke)(autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub thiz, void* ignored);
                    void* (*self)(autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub thiz);
                    void* (*self_)(autoTestAgent_kref_com_epam_drill_test_agent_http_JvmHttpClientStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
                  } JvmHttpClientStub;
                } http;
                struct {
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManager (*_instance)();
                    void (*initialize)(autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManager thiz, const char* rawFrameworkPlugins, autoTestAgent_KBoolean isManuallyControlled);
                  } StrategyManager;
                  struct {
                    autoTestAgent_KType* (*_type)(void);
                    autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub (*_instance)();
                    void* (*get_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub thiz);
                    void (*set_selfMethodId)(autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub thiz, void* set);
                    void (*initialize)(autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub thiz, const char* rawFrameworkPlugins, autoTestAgent_KBoolean isManuallyControlled);
                    autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub (*invoke)(autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub thiz, void* ignored);
                    void* (*self)(autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub thiz);
                    void* (*self_)(autoTestAgent_kref_com_epam_drill_test_agent_instrumentation_StrategyManagerStub thiz, autoTestAgent_kref_kotlin_Any thiz1);
                  } StrategyManagerStub;
                } instrumentation;
                struct {
                  void (*classFileLoadHookEvent)(void* jvmtiEnv, void* jniEnv, void* classBeingRedefined, void* loader, void* kClassName, void* protection_domain, autoTestAgent_KInt classDataLen, void* classData, void* newClassDataLen, void* newData);
                } instrumenting;
              } agent;
            } test;
          } drill;
        } epam;
      } com;
      struct {
        struct {
          const char* (*toKString)(void* thiz);
        } cinterop;
      } kotlinx;
    } root;
  } kotlin;
} autoTestAgent_ExportedSymbols;
extern autoTestAgent_ExportedSymbols* autoTestAgent_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_AUTOTESTAGENT_H */
