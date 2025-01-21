#pragma once

#include <Matrix4x4.h>
#include <Quaternion.h>
#include <Vector3.h>

#include <iomanip>
#include <iostream>
#include <string>

void MatrixPrintf(const std::string& _name, const Matrix4x4& _matrix);

void QuaternionPrintf(const std::string& _name, const Quaternion& _quaternion);

void VectorPrintf(const std::string& _name, const Vector3& _vector);