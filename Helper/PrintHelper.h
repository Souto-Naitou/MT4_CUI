#pragma once

#include <iostream>
#include <iomanip>
#include <Matrix4x4.h>
#include <Quaternion.h>
#include <string>

void MatrixPrintf(const std::string& _name, const Matrix4x4& _matrix);

void QuaternionPrintf(const std::string& _name, const Quaternion& _quaternion);