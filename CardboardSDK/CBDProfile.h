//
//  CBDProfile.h
//  CardboardSDK-iOS
//

#import <Foundation/Foundation.h>


@interface CBDProfile : NSObject

@property (nonatomic) NSString *vendor;
@property (nonatomic) NSString *model;

@property (nonatomic) float screenToLensDistance;
@property (nonatomic) float interLensDistance;
@property (nonatomic) float trayToLensDistance;

@property (nonatomic) float distortionCoefficient1;
@property (nonatomic) float distortionCoefficient2;

@property (nonatomic) float fovOuterAngle;
@property (nonatomic) float fovInnerAngle;
@property (nonatomic) float fovTopAngle;
@property (nonatomic) float fovBottomAngle;

+ (CBDProfile *)cardboardJun2014Profile;
+ (CBDProfile *)cardboardMay2015Profile;

@end
