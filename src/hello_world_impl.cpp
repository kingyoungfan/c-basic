//
// Created by Mr.Yang on 1/25/21.
//

#include <stdio.h>
#include "com_yytec_javamain_HelloNativeTest.h"

JNIEXPORT jint JNICALL Java_com_yytec_javamain_HelloNativeTest_sayHello(JNIEnv *env, jobject obj){

    printf("hello yangyang\n");
    return 100;
}