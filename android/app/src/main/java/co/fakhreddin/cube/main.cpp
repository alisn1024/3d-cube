#define STB_IMAGE_IMPLEMENTATION
#include "../../../../../../../../src/fa_texture/stb_image_headers.h"

#include <memory>
#include <jni.h>
#include "../../../../../../../../src/open_gl/OpenGl.h"
#include "../../../../../../../../src/application/Application.h"
#include "../../../../../../../../src/Constants.h"
#include "./AndroidEnvironment.h"
//
// Created by mohammad.fakhreddin on 3/7/20.
//

std::unique_ptr<Application> application;
std::unique_ptr<AndroidEnvironment> androidEnvironment;

extern "C" {
    JNIEXPORT void JNICALL Java_co_fakhreddin_cube_Fa3dCube_init(
        JNIEnv * env, 
        jobject obj,  
        jint phyiscalScreenWidth, 
        jint phyiscalScreenHeight
    );
    JNIEXPORT void JNICALL Java_co_fakhreddin_cube_Fa3dCube_step(JNIEnv * env, jobject obj);
};

JNIEXPORT void JNICALL Java_co_fakhreddin_cube_Fa3dCube_init(
    JNIEnv * env, 
    jobject obj,  
    jint phyiscalScreenWidth, 
    jint phyiscalScreenHeight
)
{
    float screenRatio = phyiscalScreenWidth/phyiscalScreenHeight;
    Constants::Window::screenHeight = screenRatio * Constants::Window::screenWidth;
    androidEnvironment = std::unique_ptr<AndroidEnvironment>(
        new AndroidEnvironment(env)
    );
    application = std::unique_ptr<Application>(new Application(
        Application::Platform::Mac,
        phyiscalScreenWidth,
        phyiscalScreenHeight
    ));
}

JNIEXPORT void JNICALL Java_co_fakhreddin_cube_Fa3dCube_step(JNIEnv * env, jobject obj)
{
    //TODO calculate delta time
    application->mainLoop(0);
}