#include "Kadai_0104.h"

#include <Quaternion.h>
#include <Vector3.h>
#include <Matrix4x4.h>
#include <Helper/PrintHelper.h>

void Kadai_0104::Run()
{
    Quaternion rotation = Quaternion::RotateAxisAngleQuaternion(Vector3(1.0f, 0.4f, -0.2f).Normalize(), 0.45f);
    Vector3 pointY = { 2.1f, -0.9f, 1.3f };
    Matrix4x4 rotateMatrix = Matrix4x4::RotateMatrix(rotation);
    Vector3 rotateByQuaternion = FMath::RotateVector(pointY, rotation);
    Vector3 rotateByMatrix = FMath::Transform(pointY, rotateMatrix);

    QuaternionPrintf("Rotation", rotation);
    MatrixPrintf("RotateMatrix", rotateMatrix);
    VectorPrintf("RotateByQuaternion", rotateByQuaternion);
    VectorPrintf("RotateByMatrix", rotateByMatrix);

    return;
}
