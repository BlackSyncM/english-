#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include "menu.h"
#include "test.h"

using namespace std;

struct flight
{
    char name[20];
} FL;

int hello()
{
    cout << "\n\n Введите свой никнейм: " << endl;
    cout << "\n";
    cin >> FL.name;
    return 0;
}

int main_menu()
{
    int code;
    while (1)
    {
        system("clear");
        cout << "\n\n\t Приветствую, " << FL.name << "\n\n" << endl;
        cout << "\n\n" << endl;
        cout << "\t\t Главное меню \n\n" << endl;
        cout << "\t\t Выберите тему: \n\n" << endl;
        cout << "\t\t 1 <=> Человек" << endl;
        cout << "\t\t 2 <=> Общество" << std::endl;
        cout << "\t\t 3 <=> Природа" << endl;
        cout << "\t\t 4 <=> Еда и напитки" << endl;
        cout << "\t\t 5 <=> Спорт" << endl;
        cout << "\t\t 6 <=> Дом \n\n" << endl;
        cout << "\t\t 0 <=> Выход из программы" << endl;
        code = getchar();
        switch (code)
        {
            case 49:
            {
                human();
            }
            break;

            case 50:
            {
                society();
            }
            break;

            case 51:
            {
                nature();
            }
            break;

            case 52:
            {
                food_and_dreanks();
            }
            break;

            case 53:
            {
                sport();
            }
            break;

            case 54:
            {
                home();
            }
            break;

            case 48:
                return 0;

            default:
                cout << "\n error" << endl;
        }
    }
}
