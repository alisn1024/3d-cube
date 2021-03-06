#include "./DiffuseLight.h"

DiffuseLight::DiffuseLight(float positionX,float positionY,float positionZ)
: 
lightPositionVector(
    positionX,
    positionY,
    positionZ
)
{}

void DiffuseLight::computeLightIntensity(
    Vec3DFloat& surfaceNormalVector,
    Vec3DFloat& surfaceCenter,
    short int surfaceDirectionFactor,
    Vec3DFloat& output
){
    lightDirectionVectorPlaceholder.setX(surfaceCenter.getX() - lightPositionVector.getX());
    lightDirectionVectorPlaceholder.setY(surfaceCenter.getY() - lightPositionVector.getY());
    lightDirectionVectorPlaceholder.setZ(surfaceCenter.getZ() - lightPositionVector.getZ());
    dotProductPlaceholder = 
        lightDirectionVectorPlaceholder.dotProduct(surfaceNormalVector) 
        * surfaceDirectionFactor 
        * -1;
    angleValuePlaceholder = dotProductPlaceholder / (surfaceNormalVector.size() * lightDirectionVectorPlaceholder.size());
    lightIntensityFactorPlaceholder = Math::clamp(angleValuePlaceholder,0,1);
    output.setX(lightIntensityFactorPlaceholder);
    output.setY(lightIntensityFactorPlaceholder);
    output.setZ(lightIntensityFactorPlaceholder);
}