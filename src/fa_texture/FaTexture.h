#ifndef FaTexture_class
#define FaTexture_class

#include <string>
#include <memory>

#include "./../data_types/FaObject.h"

class FaTexture
{
private:
  int width;
  int height;
  int numberOfChannels;
  unsigned int dataLength;
  std::string address;
  std::unique_ptr<FaObject<float>[]> data;
  float virtualImageWidth;
  float virtualImageHeight;
  float scaleX;
  float scaleY;
  void getPixelForPosition(int x,int y,float *red,float *green,float *blue);
public:
  FaTexture(
    std::string address,
    float virtualImageWidth,
    float virtualImageHeight
  );
  int getRealImageWidth();
  int getRealImageHeight();
  float getVirtualImageWidth();
  float getVirtualImageHeight();
  int getNumberOfChannels();
  void getColorForPosition(
    float positionX,
    float positionY,
    float* red,
    float* green,
    float* blue
  );
  std::string getAddress();
};

#endif