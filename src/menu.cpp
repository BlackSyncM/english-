#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

struct flight {
    char name[20];
} FL;


int hello()
{
    cout << "\n\n Введите свой никнейм: " << endl;
    cout << "\n";
    cin >> FL.name;
    system("cls");
    cout << "\n\n\n\n\t Приветствую, " << FL.name << "! \n\n" << endl;
    system("PAUSE");
    return 0;
}

int main_menu()
{
    int code;
    while (1) {
        system("cls");
        cout << "\n\n\n\n" << endl;
        cout << "\t\t Главное меню \n\n" << endl;
        cout << "\t\t Выберите тему: \n\n" << endl;
        cout << "\t\t 1 <=> Человек" << endl;
        cout << "\t\t 2 <=> Общество" << std::endl;
        cout << "\t\t 3 <=> Природа" << endl;
        cout << "\t\t 4 <=> Еда и напитки" << endl;
        cout << "\t\t 5 <=> Спорт" << endl;
        cout << "\t\t 6 <=> Дом \n\n" << endl;
        cout << "\t\t 0 <=> Выход из программы" << endl;
        code = _getch();
        switch (code) {
        case 49:

            break;
        case 50:

            break;
        case 51:

            break;
        case 52:

            break;
        case 53:

            break;
        case 54:

            break;
        case 48:
            return 0;
        default:
            cout << "\n error" << endl;
        }
    }
}

