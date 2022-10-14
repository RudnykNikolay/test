#include<iostream>

using namespace std;

int main()
{
    //Назва ноутбука
    string compName = "Mega-giga-chad nout3000FullXD D";
    //Номер моделі
    unsigned int ModellD = 1239321;
    //Сирійний код
    unsigned short int versionCode = 1234;
    //Вік комп'ютера
    unsigned short int compYears = 27;  
    //Працює?
    bool working = true;
    //Відео карта 
    string  videographic = "Mega-AMD-Radianc-2030";
    //Процесор
    string  CPU = "Tesla-osujdauIlona-UKRAIN2022";
    //ОЗУ
    string OperativeMemory = "+-infinity";
    //SDD
    string SDD = "500GB";
    //повна назва(засекречена Пентагоном)
    string CompFullName = "AntiRussiaMachine";

    unsigned int totalMemoryInBytes = 

    sizeof(CompFullName) +
    sizeof(compName) +
    sizeof(ModellD) +
    sizeof(versionCode) +
    sizeof(compYears) +
    sizeof(working) +
    sizeof(videographic) +
    sizeof(CPU) +
    sizeof(OperativeMemory) +
    sizeof(SDD);

    cout << "Повна назва компютера:\t" << CompFullName << endl;
    cout << "Назва компютера:\t\t" << compName << endl;
    cout << "Вік компютера:\t\t\t" << compYears << endl;
    cout << "Працює:\t\t\t\t\t" << ((working)? "Так" : "Ні") << endl;
    cout << "Відеокарта:\t\t\t\t" << videographic << endl;
    cout << "Процесор:\t\t\t\t" << CPU << endl;
    cout << "ОЗУ:\t\t\t\t\t" << OperativeMemory << endl;
    cout << "SDD:\t\t\t\t\t" << SDD << endl;
    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

totalMemoryInBytes << endl;
}