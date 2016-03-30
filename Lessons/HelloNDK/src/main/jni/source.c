//
// Created by dandanba on 3/30/16.
//

#include <jni.h>

jstring Java_com_meplus_lessons_MainActivity_helloText(JNIEnv *env, jobject thiz) {
    return (*env)->NewStringUTF(env, "hello world!");
}
