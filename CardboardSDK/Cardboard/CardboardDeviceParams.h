//
//  CardboardDeviceParams.h
//  CardboardSDK-iOS
//


#ifndef __CardboardSDK_iOS__CardboardDeviceParams__
#define __CardboardSDK_iOS__CardboardDeviceParams__

#import <Foundation/Foundation.h>


namespace CardboardSDK
{

class Distortion;
class FieldOfView;


class CardboardDeviceParams
{
  public:
    CardboardDeviceParams();
    CardboardDeviceParams(CardboardDeviceParams* params);
    ~CardboardDeviceParams();
    
    void setVendor(NSString *vendor);
    NSString *vendor();
    
    void setModel(NSString *model);
    NSString *model();
    
    void setInterLensDistance(float interLensDistance);
    float interLensDistance();
    
    void setVerticalDistanceToLensCenter(float verticalDistanceToLensCenter);
    float verticalDistanceToLensCenter();
  
    void setScreenToLensDistance(float screenToLensDistance);
    float screenToLensDistance();
    
    FieldOfView *maximumLeftEyeFOV();
    Distortion *distortion();
    
    bool equals(CardboardDeviceParams *other);
    
private:
    NSString *_vendor;
    NSString *_model;
    NSString *_version;
    float _interLensDistance;
    float _verticalDistanceToLensCenter;
    float _screenToLensDistance;

    FieldOfView *_maximumLeftEyeFOV;
    Distortion *_distortion;
};

}

#endif
