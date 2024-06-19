package com.gabodev.jninativelib

class JniExample {

    // Load the native library
    companion object {
        init {
            System.loadLibrary("NaturalSum")
        }
    }

    // Declare the native method naturalSum
    external fun naturalSum(): Int
}
