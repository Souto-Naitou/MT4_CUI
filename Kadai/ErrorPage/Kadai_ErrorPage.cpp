#include "Kadai_ErrorPage.h"

#include <iostream>

void Kadai_ErrorPage::Run()
{
    std::cout << "[課題エラー]" << std::endl;
    std::cout << "\t入力された課題番号は存在しません。" << std::endl;
    std::cout << "\t課題番号を確認し、再度実行してください。" << std::endl;

    std::endl(std::cout);

    std::cout << "[課題番号の形式について]" << std::endl;
    std::cout << "\t01_01のような課題番号から" << std::endl;
    std::cout << "\tアンダースコアを除く数字4桁を入力してください。" << std::endl;
    std::cout << "\t例: 0101" << std::endl;

    std::endl(std::cout);
}
