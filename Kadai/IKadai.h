#pragma once

class IKadai
{
public:
    IKadai() = default;
    virtual ~IKadai() = default;

    virtual void Run() = 0;
};