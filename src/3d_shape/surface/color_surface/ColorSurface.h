#ifndef ColorSurface_class
#define ColorSurface_class

#include "../base_surface/BaseSurface.h"
#include "./../../../camera/Camera.h"

class ColorSurface : public BaseSurface
{
private:
  static constexpr float stepValue = 1;
  static constexpr float minimumDrawDistance = 0.5;
  float red;
  float green;
  float blue;
  MatrixFloat* currentWorldPoint;
  std::vector<MatrixFloat*> topEdges;
  std::vector<MatrixFloat*> bottomEdges;
  std::vector<MatrixFloat*> middleEdges;
  void drawLineBetweenPoints(
    Camera& cameraInstance,
    float startX,
		float startY,
		float startZ,
		float endX,
		float endY,
		float endZ,
		float red,
		float green,
		float blue
  );
public:
  ColorSurface(
    int edge1,
    int edge2,
    int edge3,
    float red,
    float green,
    float blue
  );
  MatrixFloat middlePoint = MatrixFloat(3,1,std::vector<std::vector<float>>{
    std::vector<float>{0},
    std::vector<float>{0},
    std::vector<float>{0}
  });
  void computePixelMapData(
    Camera& cameraInstance,
    std::vector<MatrixFloat>* worldPoints
  ) override;
  EdgeType getEdgeType() override;
};

#endif