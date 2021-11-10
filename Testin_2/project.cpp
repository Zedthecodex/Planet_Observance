#include<windows.h>
#include <iostream>

using namespace std;

int main() 
{
    system("cls");
    string Menu[3] = { "                Admin", "               Customer", "                Exit" };
    int pointer = 0;
    bool bMainMenu = true;

    while (bMainMenu)
    {
        system("cls");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "Main Menu\n\n";

        for (int i = 0; i < 3; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << Menu[i] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << Menu[i] << endl;
            }
        }

        while (bMainMenu)
        {
            if (GetAsyncKeyState(VK_UP)&1)
            {
                pointer = pointer - 1;
                if (pointer == -1)
                {
                    pointer = 2;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN)&1)
            {
                pointer += 1;
                if (pointer == 3)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN)&1)
            {
                switch (pointer)
                {
                case 0:
                {
                    //admin_login();
                    system("cls");
                    std::cout << "admin selected\n";
                    Sleep(1000);
                    bMainMenu = false;
                    break;
                }
                case 1:
                {
                    //customer_sign();
                    system("cls");
                    std::cout << "customer selected\n";
                    Sleep(1000);
                    bMainMenu = false;
                    break;
                }
                case 2:
                {
                    //thank_you();
                    system("cls");
                    std::cout << "thank you selected\n";
                    Sleep(1000);
                    bMainMenu = false;
                    break;
                }
                default:
                {
                    cout << "Invalid Input! ";
                }
                }
            }
        }
        Sleep(150);
    }
    return 0;
}