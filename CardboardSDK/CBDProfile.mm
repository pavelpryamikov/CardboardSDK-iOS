//
//  CBDProfile.mm
//  CardboardSDK-iOS
//

#import "CBDProfile.h"


@implementation CBDProfile

+ (CBDProfile *)cardboardJun2014Profile {
    CBDProfile *profile = [[CBDProfile alloc] init];
    
    profile.vendor = @"Google";
    profile.model = @"Cardboard v1";
    
    profile.screenToLensDistance = 0.042f;
    profile.interLensDistance = 0.060f;
    profile.trayToLensDistance = 0.035f;
    
    profile.distortionCoefficient1 = 0.441f;
    profile.distortionCoefficient2 = 0.156f;
    
    profile.fovOuterAngle = 40.0f;
    profile.fovInnerAngle = 40.0f;
    profile.fovTopAngle = 40.0f;
    profile.fovBottomAngle = 40.0f;
    
    return profile;
}

+ (CBDProfile *)cardboardMay2015Profile {
    CBDProfile *profile = [[CBDProfile alloc] init];
    
    profile.vendor = @"Google";
    profile.model = @"Cardboard v2";
    
    profile.screenToLensDistance = 0.039f;
    profile.interLensDistance = 0.064f;
    profile.trayToLensDistance = 0.035f;
    
    profile.distortionCoefficient1 = 0.34f;
    profile.distortionCoefficient2 = 0.55f;
    
    profile.fovOuterAngle = 60.0f;
    profile.fovInnerAngle = 60.0f;
    profile.fovTopAngle = 60.0f;
    profile.fovBottomAngle = 60.0f;
    
    return profile;
}

@end
