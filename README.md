# 3D-Cube 
### Using c++,cmake, pure math and putPixel equivalent in openGL

### Drawing colored 3d-cube
![Alt Text](3d-cube.gif)
### Drawing 3d-cube with texture
![Alt Text](dice.gif)
### Android port
<div
    style="flex-direction:row"
>
<img src="android-texture1.png" height="500">
<img src="android-texture2.png" height="500">
</div>

### IOS port
<img src="iphone.gif" height="500">

## How to run project ?

### Windows:
Install following dependencies :
- Cmake
- Ninja
- Vcpkg

Install following dependencies using Vcpkg:
```
Vcpkg install OpenGl
Vcpkg install FreeGlut
```

Run project:
```
cmake . -GNinja -DCMAKE_TOOLCHAIN_FILE=<Vcpkg toolchain file address>
ninja
./3d-cube.exe
``` 

### Mac:
Install following dependencies : 
- Cmake

Run project:
```
cmake . && make && ./3d-cube
``` 

For all desktop apps you can add -DCMAKE_BUILD_TYPE=Release to build for release mode

### Linux:
Install VCPKG and cmake

in VCPKG folder install following librarys
```
vcpkg install OpenGL
vcpkg install FreeGlut
```

Run project
```
cmake . -DCMAKE_TOOLCHAIN_FILE=<Vcpkg toolchain file address> 
make
./3d-cube
```

### IOS
Open XCode project and set your team id bundle identifier and then run project.

### Android
Open android folder using android studio and then run project.

## RoadMap:
Coming soon :)

## Documents:
I'm not sure if anybody wants to run my projects but if you liked to work with it tell me and I try my best to provide documentations for this project

##### #3d #OpenGL #c++ #cmake #mac #windows #ubuntu #android #ios
