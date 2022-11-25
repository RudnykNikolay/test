#include <iostream>

using namespace std;

         struct bayraktar_Ukraine
        {
                int X;
                int Y;
                int MaxSpeed;
                float Price;
        };

        struct bayraktar_russia
        {
                int X;
                int Y;
                int MaxSpeed;
                float Price;
        };

        struct bayraktar_moskovia  /*московия*/
        {
                int X;
                int Y;
                int MaxSpeed;
                float Price;
        };

        int main()
        {
                cout << "bayraktar : \t";
//B_U = bayraktar Ukraine
                int B_U_X = 100;
                int B_U_Y = 200;
                int B_U_MaxSpeed = 22000;
                int B_U_Price = 100000000;

                cout << B_U_X << ", \t";
                cout << B_U_Y <<  ", \t";
                cout << B_U_MaxSpeed << "km/h" << ", \t";
                cout << B_U_Price  << "$" << "\t \n";


                cout << "bayraktar_Ukraine : \t ";

                int B_R_X = 00;
                int B_R_Y = 00;
                int B_R_MaxSpeed = 10;
                const char* B_R_Price = "net v nalichii";

                cout << B_R_X << ", \t";
                cout << B_R_Y << ", \t";
                cout << B_R_MaxSpeed  << "km/h" << ", \t";
                cout << B_R_Price << "$" << "\t \n";


                cout << "bayraktar_moskovia : \t ";

                int B_M_X = 10;
                int B_M_Y = 10;
                int B_M_MaxSpeed = 300;
                int B_M_Price = 25000;

                cout << B_M_X << ", \t";
                cout << B_M_Y << ", \t";
                cout << B_M_MaxSpeed << "km/h" << ", \t";
                cout << B_M_Price << "$" << "\t";

        }
                           
