#include "Kadai_0102.h"

#include <Helper/MatrixHelper.hpp>
#include <Matrix4x4.h>
#include <Vector3.h>

void Kadai_0102::Run()
{
    Vector3 from0 = Vector3(1.0f, 0.7f, 0.5f).Normalize();
    Vector3 to0 = -from0;
    Vector3 from1 = Vector3(-0.6f, 0.9f, 0.2f).Normalize();
    Vector3 to1 = Vector3(0.4f, 0.7f, -0.5f).Normalize();

    Matrix4x4 rotateMatrix0 = Matrix4x4::DirectionToDirectionMatrix(
        Vector3(1.0f, 0.0f, 0.0f).Normalize(), Vector3(-1.0f, 0.0f, 0.0f).Normalize()
    );

    Matrix4x4 rotateMatrix1 = Matrix4x4::DirectionToDirectionMatrix(from0, to0);
    Matrix4x4 rotateMatrix2 = Matrix4x4::DirectionToDirectionMatrix(from1, to1);

    MatrixPrintf("RotateMatrix0", rotateMatrix0);
    MatrixPrintf("RotateMatrix1", rotateMatrix1);
    MatrixPrintf("RotateMatrix2", rotateMatrix2);

    return;
}
