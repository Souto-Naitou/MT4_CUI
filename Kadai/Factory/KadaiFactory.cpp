#include "KadaiFactory.h"

#include <Kadai/0101/Kadai_0101.h>
#include <Kadai/0102/Kadai_0102.h>
#include <Kadai/0103/Kadai_0103.h>
#include <Kadai/ErrorPage/Kadai_ErrorPage.h>

#define JUDGE_KADAI(_kadaiNum_) if (_kadaiNum == #_kadaiNum_) return new Kadai_##_kadaiNum_();

IKadai* KadaiFactory::GetKadai(const std::string& _kadaiNum)
{
    JUDGE_KADAI(0101)
    else JUDGE_KADAI(0102)
    else JUDGE_KADAI(0103)


    return new Kadai_ErrorPage();
}
