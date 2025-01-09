#pragma once

#include <Kadai/IKadai.h>

class Kadai_ErrorPage : public IKadai
{
public:
    Kadai_ErrorPage() = default;
    ~Kadai_ErrorPage() = default;
    void Run() override;
};