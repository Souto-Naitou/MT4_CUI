#include <iostream>

#include <Kadai/Factory/KadaiFactory.h>

int main()
{
    KadaiFactory* factory = new KadaiFactory();

    std::string kadaiNum = {};

    std::cout << "課題番号を入力してください[ex: 0101]: ";
    std::cin >> kadaiNum;

    system("cls");

    IKadai* kadai = factory->GetKadai(kadaiNum);

    kadai->Run();
    
    return 0;
}
