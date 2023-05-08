#include<iostream>
using namespace std;

//Результат ділення чисел х та у, не перевищує 5, при тому що х
//дорівнює 20

int main() {
    int x=20;
    int y=10;
    if(x/y<5)
    {
        cout<<"Umova vukonana"<< endl;
        //Умова виконана
    }
    if(x/y>5)
    {
        cout<<"Umova ne vukonana"<< endl;
        //Умова не виконана
    }
    return 0;
}2