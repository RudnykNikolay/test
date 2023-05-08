#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Log_in {

    enum {
        January, February, March, April, May, June, July, August, September, October, November, December
    };
    class User_log
    {
    public:
        
        string getUserLog() {
            return User;
        }

        string getReadyPassword() {
            return Password;
        }

        int getSMScode() {
            return mbcode;
        }


    private:
        string User = "Ruda";
        string Password = "dssddsdsds";
        int mbcode = 4321;

    };

    union Verficated
    {
    public:
        void setPhonenumber(int number) {
            this->number = number;
        }

        int getPhonenumber() {
            return number;
        }

    private:
        int number;
    };

}