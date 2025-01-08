// MT4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <Matrix4x4.h>
#include <Vector3.h>

int main()
{
    Vector3 axis = Vector3({ 1.0f, 1.0f, 1.0f }).Normalize();
    float angle = 0.44f;
    Matrix4x4 rotateMatrix = Matrix4x4::RotateAxisAngleMatrix(axis, angle);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f ", rotateMatrix.m[i][j]);
        }
        printf("\n");
    }

}
