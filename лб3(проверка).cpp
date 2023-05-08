#include <iostream>
#ifndef INPUT_MAIN_SAMPLE_H;
#define INPUT_MAIN_SAMPLE_H;
using namespace std;

//vvod
void show_menu()
    {
    wcout << L"Enter your card details" << endl ;
    wcout << L"1.) Enter the card number" << endl;
    wcout << L"2.) Enter password" << endl;
    wcout << L"3.) cvv card" << endl;
    }
//1 punkt
char** enter_numberCard()
{
    const short int MAX_NUMBERCARD_LENGTH =16;
    char* number = new char [MAX_NUMBERCARD_LENGTH];
    wcout << L"Enter the card number:" << endl;
    cin >> number;
    return &number;
}
//2 punkt
char** enter_password()
    {
    const short int MAX_PASSWORD_LENGTH = 4;
    char* password = new char[MAX_PASSWORD_LENGTH];
    wcout << L"Enter password:" << endl;
    cin >> password;
    return &password;
    }
//3 punkt
char** enter_cvv()
    {
    const short int MAX_CVV_LENGTH = 3;
    char* cvv = new char[MAX_CVV_LENGTH];
    wcout << L"Enter cvv" << endl;
    cin >> cvv;
    return &cvv;
    }

//vuvod

void menu()
    {
    short int selectedMenuItem = 1;
    char* password = nullptr;
    char* number = nullptr;
    char* cvv = nullptr;
    show_menu();
    cin >> selectedMenuItem;
    switch (selectedMenuItem)
        {
        case 1:
        number = **enter_numberCard();
        break;
        case 2:
        password = **enter_password();
        break;
        case 3:
        cvv = **enter_cvv(); void print_result() ;
        break;
        default:
        exit(0);
        }
        void exit() 
        {
        int* number = 1234;
        switch (enter_password)
        {
        case 1:
            password == 1234;
            std::cout << "transaction was successful\n";
            return true;
            break;
        default:
            std::cout:<<"Card blocked";
            return 0;
            break;
        }
    }
    }
    
    #endif
       