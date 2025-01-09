#include <iostream>

#include <Kadai/Factory/KadaiFactory.h>

int main()
{
    KadaiFactory* factory = new KadaiFactory();

    std::string kadaiNum = {};

    std::cout << "課題番号を入力してください[ex: 0101]\n> ";
    std::cin >> kadaiNum;

    system("cls");

    IKadai* kadai = factory->GetKadai(kadaiNum);

    if (kadai == nullptr)
    {
        std::cout << "課題が見つかりませんでした。\n";
        return 1;
    }

    kadai->Run();

    
    delete kadai;
    delete factory;

    system("pause");

    return 0;
}
