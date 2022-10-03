 #include<iostream>

using namespace std;

int main()
{
     /*int result = add(getHalf(6), 5);
     cout <<Result:<< std: :hex<<result;*/

     const char* colorPhone = "Black";
     signed int screenSize = 6;
     unsigned ScreenSize1 = -6;
     bool HasNFC = false;
     float costPhone = 1000.99;
      
     cout << "Початкове значення:"<< costPhone <<  
     cout << "Введіть число:" << endl; 
     cin >> costPhone; //введення
     cout << int: :LONG_MAX << endl;
     cout << costPhone; //виведення
     cerr << costPhone; // помилка
     
     return 0
}