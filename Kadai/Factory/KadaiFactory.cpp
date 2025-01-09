#include "KadaiFactory.h"

#include <Kadai/0101/Kadai_0101.h>
#include <Kadai/ErrorPage/Kadai_ErrorPage.h>

IKadai* KadaiFactory::GetKadai(const std::string& _kadaiNum)
{
    if (_kadaiNum == "0101")
    {
        return new Kadai_0101();
    }


    return new Kadai_ErrorPage();
}
