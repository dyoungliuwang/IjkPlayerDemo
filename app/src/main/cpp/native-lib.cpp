#include <jni.h>
#include <string>

extern "C"
jstring
Java_demo_hellojin_dyoung_com_hellojni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
