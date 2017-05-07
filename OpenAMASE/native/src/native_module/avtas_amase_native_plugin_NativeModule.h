/* DO NOT EDIT THIS FILE - it is machine generated */

/* Header for class avtas_amase_native_plugin_NativePlugin */

#ifndef _Included_avtas_amase_native_plugin_NativeModule
#define _Included_avtas_amase_native_plugin_NativeModule

#include <jni.h>
#include "avtas/lmcp/Object.h"


#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jlong JNICALL Java_avtas_amase_natives_NativeModule_createNativeModule
  (JNIEnv *, jobject, jstring, jlong);


JNIEXPORT void JNICALL Java_avtas_amase_natives_NativeModule_nativeStep
  (JNIEnv *, jobject, jlong, jlong, jdouble, jdouble);


JNIEXPORT void JNICALL Java_avtas_amase_natives_NativeModule_nativeInitialize
  (JNIEnv *, jobject, jlong, jlong, jstring);


JNIEXPORT void JNICALL Java_avtas_amase_natives_NativeModule_nativeModelEventOccured
  (JNIEnv *, jobject, jlong, jlong, jbyteArray);

JNIEXPORT void JNICALL Java_avtas_amase_natives_NativeModule_nativeAppEventOccured
  (JNIEnv *, jobject, jlong, jlong, jbyteArray);


JNIEXPORT void JNICALL Java_avtas_amase_natives_NativeModule_nativeShutdown
  (JNIEnv *, jobject, jlong, jlong);



#ifdef __cplusplus
}
#endif
#endif

/* Distribution A. Approved for public release. 
 *  Case: #88ABW-2015-4601. Date: 24 Sep 2015. */