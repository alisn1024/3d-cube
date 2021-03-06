#ifndef Sky_class
#define Sky_class

#include <string>

#include "./../data_types/VectorTemplate.h"
#include "../utils/path/Path.h"
#include "../3d_shape/surface/base_surface/BaseSurface.h"
#include "../3d_shape/surface/texture_surface/TextureSurface.h"

class Sky{
public:
  const std::string skyCubeTextureAddress = Path::generateAssetPath("sky",".png");
	const float skyCubeWidth = 400;
	const float skyCubeHeight = 300;
	const float skyCubeSquare = 100;
  std::unique_ptr<FaTexture> skyCubeTexture = std::unique_ptr<FaTexture>(
		new FaTexture(
			skyCubeTextureAddress,
			skyCubeWidth,
			skyCubeHeight
		)
	);
	std::vector<BaseSurface*> skyCubeEdgeList = std::vector<BaseSurface*>{
    new TextureSurface(0,1,2,
      skyCubeTexture,
      Vec2DFloat(skyCubeSquare,0), 
      Vec2DFloat(skyCubeSquare * 2,0), 
      Vec2DFloat(skyCubeSquare,skyCubeSquare)
    ),
    new TextureSurface(3,1,2,skyCubeTexture,
      Vec2DFloat(skyCubeSquare,skyCubeSquare), 
      Vec2DFloat(skyCubeSquare * 2,0), 
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare)
    ),
    new TextureSurface(3,1,5,skyCubeTexture,
      Vec2DFloat(0,skyCubeSquare * 1), 
      Vec2DFloat(skyCubeSquare,skyCubeSquare), 
      Vec2DFloat(0,skyCubeSquare * 2)
    ),
    new TextureSurface(3,7,5,skyCubeTexture,
      Vec2DFloat(skyCubeSquare,skyCubeSquare), 
      Vec2DFloat(0,skyCubeSquare * 2), 
      Vec2DFloat(skyCubeSquare * 1,skyCubeSquare * 2)
    ),
    new TextureSurface(0,4,5,skyCubeTexture,
      Vec2DFloat(skyCubeSquare,skyCubeSquare), 
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare), 
      Vec2DFloat(skyCubeSquare,skyCubeSquare * 2)
    ),
    new TextureSurface(5,0,1,skyCubeTexture,
      Vec2DFloat(skyCubeSquare,skyCubeSquare * 2), 
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 1), 
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 2)
    ),
    new TextureSurface(4,0,6,skyCubeTexture,
      Vec2DFloat(skyCubeSquare,skyCubeSquare * 2), 
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 2), 
      Vec2DFloat(skyCubeSquare * 1,skyCubeSquare * 3 - 1)
    ),
    new TextureSurface(2,0,6,skyCubeTexture,
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 3 - 1),
      Vec2DFloat(skyCubeSquare * 1,skyCubeSquare * 3 - 1), 
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 2)
    ),
    new TextureSurface(2,7,6,skyCubeTexture,
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 2),
      Vec2DFloat(skyCubeSquare * 3,skyCubeSquare * 1), 
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 1) 
    ),
    new TextureSurface(2,7,3,skyCubeTexture,
      Vec2DFloat(skyCubeSquare * 3,skyCubeSquare * 2),
      Vec2DFloat(skyCubeSquare * 3,skyCubeSquare * 1),
      Vec2DFloat(skyCubeSquare * 2,skyCubeSquare * 2)
    ),
    new TextureSurface(4,5,7,skyCubeTexture,
      Vec2DFloat(skyCubeSquare * 3,skyCubeSquare * 1), 
      Vec2DFloat(skyCubeSquare * 4 - 1,skyCubeSquare * 1), 
      Vec2DFloat(skyCubeSquare * 3,skyCubeSquare * 2)
    ),
    new TextureSurface(4,6,7,skyCubeTexture,
      Vec2DFloat(skyCubeSquare * 4 - 1,skyCubeSquare * 1),
      Vec2DFloat(skyCubeSquare * 3,skyCubeSquare * 2),
      Vec2DFloat(skyCubeSquare * 4 - 1,skyCubeSquare * 2) 
    )
  };
};

#endif