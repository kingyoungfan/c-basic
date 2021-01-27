//
// Created by Mr.Yang on 1/25/21.
//
#include <pthread.h>

#include <stdio.h>
#include <unistd.h>

#include "com_yytec_javamain_MyThreadTest.h"

pthread_t pid;

void *thread_entity(void *arg) {
    printf("new Thread\n");
}

JNIEXPORT void JNICALL Java_com_yytec_javamain_MyThreadTest_start0(JNIEnv * env, jobject obj){
    pthread_create(&pid,NULL,thread_entity, NULL);
    sleep(1);

    printf("main thread %p, created thread %p\n", pthread_self(), pid);

    jclass cls = (*env)-> FindClass(env, "com/yytec/javamain/MyThreadTest");

    jmethodID mid = (*env)-> GetMethodID(env, cls, "run", "()V");

    (*env)-> CallVoidMethod(env, obj, mid);

    printf("Success to call run() method!\n");
}