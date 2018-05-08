/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_badlogicgames_libimagequant_LiqImage */

#ifndef _Included_com_badlogicgames_libimagequant_LiqImage
#define _Included_com_badlogicgames_libimagequant_LiqImage
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1getWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1getHeight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _addFixedColor
 * Signature: (JBBBB)I
 */
JNIEXPORT jint JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1addFixedColor
  (JNIEnv *, jclass, jlong, jbyte, jbyte, jbyte, jbyte);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _setImportanceMap
 * Signature: (J[BI)I
 */
JNIEXPORT jint JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1setImportanceMap
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _setBackgroundImage
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1setBackgroundImage
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _createRgba
 * Signature: (J[BIID)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1createRgba__J_3BIID
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jdouble);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _createRgba
 * Signature: (JLjava/nio/ByteBuffer;IID)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1createRgba__JLjava_nio_ByteBuffer_2IID
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jdouble);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _byteBufferFromPointer
 * Signature: (JI)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1byteBufferFromPointer
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _getJniImageLiqImage
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1getJniImageLiqImage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _getJniImageData
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1getJniImageData
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogicgames_libimagequant_LiqImage
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_badlogicgames_libimagequant_LiqImage__1destroy
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
