/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_spireofbabel_raknet4j_RakPeerInterface */

#ifndef _Included_com_spireofbabel_raknet4j_RakPeerInterface
#define _Included_com_spireofbabel_raknet4j_RakPeerInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_spireofbabel_raknet4j_RakPeerInterface
 * Method:    nativeGetInstance
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_spireofbabel_raknet4j_RakPeerInterface_nativeGetInstance
  (JNIEnv *, jclass);

/*
 * Class:     com_spireofbabel_raknet4j_RakPeerInterface
 * Method:    nativeDestroyInstance
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_spireofbabel_raknet4j_RakPeerInterface_nativeDestroyInstance
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_spireofbabel_raknet4j_RakPeerInterface
 * Method:    Startup
 * Signature: (I[Lcom/spireofbabel/raknet4j/SocketDescriptor;I)Lcom/spireofbabel/raknet4j/RakNetEnums/StartupResult;
 */
JNIEXPORT jobject JNICALL Java_com_spireofbabel_raknet4j_RakPeerInterface_Startup
  (JNIEnv *, jobject, jint, jobjectArray, jint);

/*
 * Class:     com_spireofbabel_raknet4j_RakPeerInterface
 * Method:    Shutdown
 * Signature: (IILcom/spireofbabel/raknet4j/RakNetEnums/PacketPriority;)V
 */
JNIEXPORT void JNICALL Java_com_spireofbabel_raknet4j_RakPeerInterface_Shutdown
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_spireofbabel_raknet4j_RakPeerInterface
 * Method:    IsActive
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_spireofbabel_raknet4j_RakPeerInterface_IsActive
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
