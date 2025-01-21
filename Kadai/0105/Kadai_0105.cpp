#include "Kadai_0105.h"

#include <Quaternion.h>
#include <Helper/PrintHelper.h>

void Kadai_0105::Run()
{
    Quaternion rotation0 = Quaternion::RotateAxisAngleQuaternion(Vector3(0.71f, 0.71f, 0.0f), 0.3f);
    Quaternion rotation1 = Quaternion::RotateAxisAngleQuaternion(Vector3(0.71f, 0.0f, 0.71f), 3.141592f);

    Quaternion interpolate0 = Quaternion::Slerp(rotation0, rotation1, 0.0f);
    Quaternion interpolate1 = Quaternion::Slerp(rotation0, rotation1, 0.3f);
    Quaternion interpolate2 = Quaternion::Slerp(rotation0, rotation1, 0.5f);
    Quaternion interpolate3 = Quaternion::Slerp(rotation0, rotation1, 0.7f);
    Quaternion interpolate4 = Quaternion::Slerp(rotation0, rotation1, 1.0f);


    QuaternionPrintf("Interpolate0", interpolate0);
    QuaternionPrintf("Interpolate1", interpolate1);
    QuaternionPrintf("Interpolate2", interpolate2);
    QuaternionPrintf("Interpolate3", interpolate3);
    QuaternionPrintf("Interpolate4", interpolate4);

    return;
}
