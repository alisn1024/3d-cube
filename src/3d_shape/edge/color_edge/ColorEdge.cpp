#include "./ColorEdge.h"
#include <assert.h>
#include <math.h>
#include "../../../application/Application.h" 
#include <iostream>

ColorEdge::ColorEdge(
  int edge1,
  int edge2,
  int edge3,
  float red,
  float green,
  float blue
)
:
  edge1(edge1),
  edge2(edge2),
  edge3(edge3),
  red(red),
  green(green),
  blue(blue)
{}

void ColorEdge::render(std::vector<MatrixFloat>* worldPoints){
  topEdges.erase(topEdges.begin(),topEdges.end());
  bottomEdges.erase(bottomEdges.begin(),bottomEdges.end());
  middleEdges.erase(middleEdges.begin(),middleEdges.end());
  std::cout<<"rendering"<<std::endl;
  for(int i=0;i<3;i++){
    currentWorldPoint = &worldPoints->at(getEdgeByIndex(i));
    if(topEdges.size()==0){
      topEdges.emplace_back(currentWorldPoint);
    }
    else if(currentWorldPoint->get(1,0)>topEdges.at(0)->get(1,0)){
      topEdges.erase(topEdges.begin(),topEdges.end());
      topEdges.emplace_back(currentWorldPoint);
    }
    else if(currentWorldPoint->get(1,0)==topEdges.at(0)->get(1,0)){
      topEdges.emplace_back(currentWorldPoint);
    }
  }
  for(int i=0;i<3;i++){
    currentWorldPoint = &worldPoints->at(getEdgeByIndex(i));
    if(bottomEdges.size()==0){
      bottomEdges.emplace_back(currentWorldPoint);
    }
    else if(currentWorldPoint->get(1,0)<bottomEdges.at(0)->get(1,0)){
      bottomEdges.erase(bottomEdges.begin(),bottomEdges.end());
      bottomEdges.emplace_back(currentWorldPoint);
    }
    else if(currentWorldPoint->get(1,0)==bottomEdges.at(0)->get(1,0)){
      bottomEdges.emplace_back(currentWorldPoint);
    }
  }
  assert(topEdges.size()>=1);
  assert(bottomEdges.size()>=1);
  if(topEdges.size()!=2&&bottomEdges.size()!=2){
    for(int i=0;i<3;i++){
      currentWorldPoint = &worldPoints->at(getEdgeByIndex(i));
      if(currentWorldPoint!=topEdges.at(0) && currentWorldPoint!=bottomEdges.at(0)){
        middleEdges.emplace_back(currentWorldPoint);
        middlePoint.set(0,0,(
            currentWorldPoint->get(1,0) - topEdges.at(0)->get(1,0)
          ) * (
            (
              topEdges.at(0)->get(0,0) - bottomEdges.at(0)->get(0,0)
            )/(
              topEdges.at(0)->get(1,0) - bottomEdges.at(0)->get(1,0)
            )
          ) + topEdges.at(0)->get(0,0)
        );
        middlePoint.set(1,0,currentWorldPoint->get(1,0));
        middlePoint.set(2,0,
          (
            currentWorldPoint->get(1,0) - topEdges.at(0)->get(1,0)
          ) * (
            (
              topEdges.at(0)->get(2,0) - bottomEdges.at(0)->get(2,0)
            )/(
              topEdges.at(0)->get(1,0) - bottomEdges.at(0)->get(1,0)
            )
          ) + topEdges.at(0)->get(2,0)
        );
        MatrixFloat* middlePointPointer = &middlePoint;
        middleEdges.emplace_back(middlePointPointer);
        break;
      }
    }
  }
  if(topEdges.size()==2){
    float currentY = topEdges.at(0)->get(1,0);
    float startX = topEdges.at(0)->get(0,0);
    float startZ = topEdges.at(0)->get(2,0);
    float endX = topEdges.at(1)->get(0,0);
    float endZ = topEdges.at(1)->get(2,0);
    float finalY = bottomEdges.at(0)->get(1,0);
    float finalX = bottomEdges.at(0)->get(0,0);
    float finalZ = bottomEdges.at(0)->get(2,0);
    float startXM = (startX - finalX)/(currentY - finalY);
    float startZM = (startZ - finalZ)/(currentY - finalY);
    float endXM = (endX - finalX)/(currentY - finalY);
    float endZM = (endZ - finalZ)/(currentY - finalY);
    if(abs(currentY-finalY)>minimumDrawDistance){
      do{
        Application::getInstance()->drawLineBetweenPoints(
          startX,currentY,startZ,
          endX,currentY,endZ,
          red,
          green,
          blue
        );
        currentY-=stepValue;
        startX-=startXM * stepValue;
        startZ-=startZM * stepValue;
        endX-=endXM * stepValue;
        endZ-=endZM * stepValue;
      } while (currentY>finalY+stepValue);
    }
  }else if(bottomEdges.size()==2){
    float currentY = bottomEdges.at(0)->get(1,0);
    float startX = bottomEdges.at(0)->get(0,0);
    float startZ = bottomEdges.at(0)->get(2,0);
    float endX = bottomEdges.at(1)->get(0,0);
    float endZ = bottomEdges.at(1)->get(2,0);
    float finalY = topEdges.at(0)->get(1,0);
    float finalX = topEdges.at(0)->get(0,0);
    float finalZ = topEdges.at(0)->get(2,0);
    float yDifference = (currentY - finalY);
    float startXM = (startX - finalX)/yDifference;
    float startZM = (startZ - finalZ)/yDifference;
    float endXM = (endX - finalX)/yDifference;
    float endZM = (endZ - finalZ)/yDifference;
    if(abs(currentY - finalY)>minimumDrawDistance){
      do{
        Application::getInstance()->drawLineBetweenPoints(
          startX,currentY,startZ,
          endX,currentY,endZ,
          red,
          green,
          blue
        );
        currentY+=stepValue;
        startX+=startXM * stepValue;
        startZ+=startZM * stepValue;
        endX+=endXM * stepValue;
        endZ+=endZM * stepValue;
      } while (currentY<finalY-1);
    }
  }else {
    assert(topEdges.size()==1);
    assert(middleEdges.size()==2);
    assert(bottomEdges.size()==1);
    assert(middleEdges.at(0)->get(1,0)<topEdges.at(0)->get(1,0));
    assert(middleEdges.at(0)->get(1,0)>bottomEdges.at(0)->get(1,0));
    assert(middleEdges.at(1)->get(1,0)<topEdges.at(0)->get(1,0));
    assert(middleEdges.at(1)->get(1,0)>bottomEdges.at(0)->get(1,0));
    assert(middleEdges.at(0)->get(1,0)==middleEdges.at(1)->get(1,0));
    {//From middle to top
      float currentY = middleEdges.at(0)->get(1,0);
      float startX = middleEdges.at(0)->get(0,0);
      float startZ = middleEdges.at(0)->get(2,0);
      float endX = middleEdges.at(1)->get(0,0);
      float endZ = middleEdges.at(1)->get(2,0);
      float finalY = topEdges.at(0)->get(1,0);
      float finalX = topEdges.at(0)->get(0,0);
      float finalZ = topEdges.at(0)->get(2,0);
      float startXM = (startX - finalX)/(currentY - finalY);
      float startZM = (startZ - finalZ)/(currentY - finalY);
      float endXM = (endX - finalX)/(currentY - finalY);
      float endZM = (endZ - finalZ)/(currentY - finalY);
      if(abs(currentY - finalY)>minimumDrawDistance){
        do{
          Application::getInstance()->drawLineBetweenPoints(
            startX,currentY,startZ,
            endX,currentY,endZ,
            red,
            green,
            blue
          );
          currentY+=stepValue;
          startX+=startXM * stepValue;
          startZ+=startZM * stepValue;
          endX+=endXM * stepValue;
          endZ+=endZM * stepValue;
        } while (currentY<finalY-1);
      }
    }
    {//From middle to bottom
      float currentY = middleEdges.at(0)->get(1,0);
      float startX = middleEdges.at(0)->get(0,0);
      float startZ = middleEdges.at(0)->get(2,0);
      float endX = middleEdges.at(1)->get(0,0);
      float endZ = middleEdges.at(1)->get(2,0);
      float finalY = bottomEdges.at(0)->get(1,0);
      float finalX = bottomEdges.at(0)->get(0,0);
      float finalZ = bottomEdges.at(0)->get(2,0);
      float startXM = (startX - finalX)/(currentY - finalY);
      float startZM = (startZ - finalZ)/(currentY - finalY);
      float endXM = (endX - finalX)/(currentY - finalY);
      float endZM = (endZ - finalZ)/(currentY - finalY);
      if(abs(currentY - finalY) > minimumDrawDistance){
        do{
          Application::getInstance()->drawLineBetweenPoints(
            startX,currentY,startZ,
            endX,currentY,endZ,
            red,
            green,
            blue
          );
          currentY-= stepValue;
          startX-=startXM * stepValue;
          startZ-=startZM * stepValue;
          endX-=endXM * stepValue;
          endZ-=endZM * stepValue;
        } while (currentY>finalY+1);
      }
    }
  }
}

EdgeType ColorEdge::getEdgeType(){
  return EdgeType::color;
}

ColorEdge::ColorEdge(ColorEdge const& other){
  assignToObject(other);
}

ColorEdge& ColorEdge::operator=(ColorEdge const& other){
  assignToObject(other);
  return *this; 
}

void ColorEdge::assignToObject(ColorEdge const& other){
  edge1 = other.edge1;
  edge2 = other.edge2;
  edge3 = other.edge3;
  red = other.red;
  green = other.green;
  blue = other.blue;
}