#include "PrintHelper.h"

void MatrixPrintf(const std::string& _name, const Matrix4x4& _matrix)
{
    printf("%s\n", _name.c_str());
    for (int i = 0; i < 4; i++)
    {
        printf("   ");
        for (int j = 0; j < 4; j++)
        {
            printf("% .3f ", _matrix.m[i][j]);
        }
        printf("\n");
    }

    return;
}

void QuaternionPrintf(const std::string& _name, const Quaternion& _quaternion)
{
    printf("%s\n", _name.c_str());
    printf("    %.2f %.2f %.2f %.2f\n", _quaternion.x, _quaternion.y, _quaternion.z, _quaternion.w);
    return;
}

void VectorPrintf(const std::string& _name, const Vector3& _vector)
{
    printf("%s\n", _name.c_str());
    printf("    %.2f %.2f %.2f\n", _vector.x, _vector.y, _vector.z);
    return;
}
