//
// Created by Mr.Yang on 2/20/21.
//

#include <jni.h> //引入jni的头文件
#include "com_yytec_javamain_jni_MaxValTest.h" //引入刚才产生的h文件
#include <stdio.h>
// 返回值类型jint对应java的int类型，方法名规则：Java_包名_类名_方法名
// 方法参数前两个是固定的，之后对应java native方法中的参数类型
JNIEXPORT jint JNICALL Java_com_yytec_javamain_jni_MaxValTest_max(JNIEnv *env, jobject obj, jint a, jint b) {
    return a > b ? a : b;
}

JNIEXPORT jint JNICALL Java_com_yytec_javamain_jni_MaxValTest_sum(JNIEnv *env, jobject obj, jint a, jint b) {
    printf("===> a=%d, b=%d", a, b);
    return a + b;
}