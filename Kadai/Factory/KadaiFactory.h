#pragma once

#include <string>
#include <Kadai/IKadai.h>

class KadaiFactory
{
public:
    KadaiFactory() = default;
    ~KadaiFactory() = default;

    /// <summary>
    /// 課題を取得
    /// </summary>
    /// <param name="kadaiNum">課題番号を指定する。例: "0101"</param>
    IKadai* GetKadai(const std::string& _kadaiNum);
};