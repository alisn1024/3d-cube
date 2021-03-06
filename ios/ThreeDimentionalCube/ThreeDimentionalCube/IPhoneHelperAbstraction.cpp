#include "./IPhoneHelperAbstraction.h"

IPhoneHelperAbstraction* IPhoneHelperAbstraction::instance = nullptr;

unsigned char * IPhoneHelperAbstraction::callObjectiveCToLoadImage(
  std::string imageName,
  int * width,
  int * height,
  int * numberOfChannels
){
  auto imageData = loadImage(objectiveCIPhoneHelperInstance,imageName);
  *width = (int)imageData.width;
  *height = (int)imageData.height;
  *numberOfChannels = (int)imageData.numberOfChannels;
  return imageData.pixels;
};

void IPhoneHelperAbstraction::callObjectiveCToLog(std::string text){
    log(objectiveCIPhoneHelperInstance,text);
}

IPhoneHelperAbstraction::IPhoneHelperAbstraction(void * objectiveCIPhoneHelperInstance)
:
objectiveCIPhoneHelperInstance(objectiveCIPhoneHelperInstance)
{
    instance = this;
};

IPhoneHelperAbstraction* IPhoneHelperAbstraction::getInstance(){
    return instance;
};
