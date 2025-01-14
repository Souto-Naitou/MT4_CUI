#pragma once

#include <iostream>
#include <iomanip>
#include <Matrix4x4.h>
#include <string>

void MatrixPrintf(const std::string& _name, const Matrix4x4& _matrix)
{
    printf("%s\n", _name.c_str());
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.3f ", _matrix.m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return;
}