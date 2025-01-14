#include "Kadai_0103.h"

#include <Quaternion.h>
#include <Helper/PrintHelper.h>

void Kadai_0103::Run()
{
    Quaternion q1 = { 2.0f, 3.0f, 4.0f, 1.0f };
    Quaternion q2 = { 1.0f, 3.0f, 5.0f, 2.0f };
    Quaternion identity = Quaternion::Identity();
    Quaternion conjugate = Quaternion::Conjugate(q1);
    Quaternion inversed = q1.Inversed();
    Quaternion normalized = q1.Normalized();
    float norm = q1.Norm();

    Quaternion mul1 = q1 * q2;
    Quaternion mul2 = q2 * q1;

    QuaternionPrintf("Identity", identity);
    QuaternionPrintf("Conjugate", conjugate);
    QuaternionPrintf("Inversed", inversed);
    QuaternionPrintf("Normalized", normalized);
    QuaternionPrintf("Multiply(q1, q2)", mul1);
    QuaternionPrintf("Multiply(q2, q1)", mul2);
    printf("Norm: %.2f\n", norm);

    return;
}
