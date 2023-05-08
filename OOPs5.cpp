#include <iostream>
#include <string>
#include "Lb5.h"


using namespace std;




int main()
{
    setlocale(LC_ALL, "");

    Log_in::User_log ul;
    Log_in::Verficated vrf;


    vrf.setPhonenumber(23415);

    cout << " Íiê: " << ul.getUserLog() << endl;
    cout << " Ïàðîëü: " << ul.getReadyPassword() << endl;
    cout << " Òåëåôîí: " << vrf.getPhonenumber() << endl;
    cout << " Ðåçåðâíèé êîä: " << ul.getSMScode() << endl;

    return 0;
}
