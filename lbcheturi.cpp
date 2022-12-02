#include <iostream>
#include <string>

using namespace std;

extern void Check_user();


struct Special_Date {
    string welcome;
    int number;
    int data;
    int CVV;


};

struct User_login_in
{
    void Check_user(string User_password, string User_login)
    {
        string login = "IlonMask";
        string IdentifyCode = "1234567890";

        cout << "Enter login: ";
        cin >> User_login;

        cout << "Enter IdentifyCode: ";
        cin >> User_password;

        if (User_login == login && User_password == IdentifyCode)
        {
            cout << "You are retarded, pls leave from your life!" << endl;
            //типо Илон против Украины.
        }
        else
        {
            cout << "Error" << endl;

            exit(0);
        }
    };

};


// DONPEO= DONBAAAAAAAS People)))
struct DONPEO
{
    string Axmetov;
    int VPOcode;
};





int main()
{

    Special_Date sd;
    sd.welcome = "Welcome";
    sd.number = 1313;
    sd.data = 10;
    sd.CVV = 666;
    cout << sd.welcome << endl;
    cout << "Number: " << sd.number << endl;
    cout << "DATA: " << sd.data << endl;
    cout << "CVV: " << sd.CVV << endl;



    User_login_in uli;
    string login;
    string password;
    uli.Check_user(login, password);

    DONPEO tfa;
    tfa.Axmetov = "AXMETOV";
    tfa.VPOcode;
    cout << tfa.Axmetov << endl;

    cout << "Enter VPOcode: ";
    cin >> tfa.VPOcode;


    system("pause");
    return 0;


}