#pragma once

#define NEWKADAI(_kadaiNum) class Kadai_##_kadaiNum : public IKadai \
{ \
public: \
    Kadai_##_kadaiNum() = default; \
    ~Kadai_##_kadaiNum() = default; \
    void Run() override; \
};

class IKadai
{
public:
    IKadai() = default;
    virtual ~IKadai() = default;

    virtual void Run() = 0;
};