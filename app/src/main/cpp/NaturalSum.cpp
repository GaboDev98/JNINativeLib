#include <jni.h> // Include JNI header

// Implement JNI native method naturalSum
extern "C" JNIEXPORT jint JNICALL
Java_com_gabodev_jninativelib_JniExample_naturalSum(JNIEnv *env, jobject thiz) {
    // Initialize sum variable
    int suma = 0;

    // Calculate sum of first 10 natural numbers
    for (int i = 1; i <= 10; ++i) {
        suma += i;
    }

    // Return the computed sum
    return suma;
}
