#include "menu.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int human()
{
    int code;

    while (1) {
        system("cls");
        cout << "\t\t||||||||ЧЕЛОВЕК||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Тело\n";
        cout << "\t 2.Внешность\n";
        cout << "\t 3.Эмоции\n";
        cout << "\t 4.Характер\n";
        cout << "\t 5.Вернуться к выбору темы\n";

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

        case 53: {
            return 0;
            main_menu();
        }
        default:
            cout << "\n error" << endl;
        }
    }
}

int society()
{
    int code;

    while (1) {
        system("cls");
        cout << "\t\t||||||||ОБЩЕСТВО||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Успех\n";
        cout << "\t 2.Саморазвитие\n";
        cout << "\t 3.Отношения\n";
        cout << "\t 4.Вернуться к выбору темы\n";

        code = _getch();

        switch (code) {
        case 49:

            break;

        case 50:

            break;

        case 51:

            break;

        case 52: {
            return 0;
            main_menu();
        } break;

        default:
            cout << "\n error" << endl;
        }
    }
}

int nature()
{
    int code;

    while (1) {
        system("cls");
        cout << "\t\t||||||||ПРИРОДА||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Растения\n";
        cout << "\t 2.Животные\n";
        cout << "\t 3.Погода\n";
        cout << "\t 4.Вернуться к выбору темы\n";

        code = _getch();

        switch (code) {
        case 49:

            break;

        case 50:

            break;

        case 51:

            break;

        case 52: {
            return 0;
            main_menu();
        } break;

        default:
            cout << "\n error" << endl;
        }
    }
}

int food_and_dreanks()
{
    int code;

    while (1) {
        system("cls");
        cout << "\t\t||||||||ЕДА И НАПИТКИ||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Еда\n";
        cout << "\t 2.Напитки\n";
        cout << "\t 3.Процесс приготовления\n";
        cout << "\t 4.Посуда\n";
        cout << "\t 5.Вернуться к выбору темы\n";

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

        case 53: {
            return 0;
            main_menu();
        } break;

        default:
            cout << "\n error" << endl;
        }
    }
}

int sport()
{
    int code;

    while (1) {
        system("cls");
        cout << "\t\t||||||||СПОРТ||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Виды спорта\n";
        cout << "\t 2.Фитнес\n";
        cout << "\t 3.Вернуться к выбору темы\n";

        code = _getch();

        switch (code) {
        case 49:

            break;

        case 50:

            break;

        case 51: {
            return 0;
            main_menu();
        } break;

        default:
            cout << "\n error" << endl;
        }
    }
}

int home()
{
    int code;

    while (1) {
        system("cls");
        cout << "\t\t||||||||ДОМ||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Комнаты\n";
        cout << "\t 2.Убока\n";
        cout << "\t 3.Вернуться к выбору темы\n";

        code = _getch();

        switch (code) {
        case 49:

            break;

        case 50:

            break;

        case 51: {
            return 0;
            main_menu();
        } break;

        default:
            cout << "\n error" << endl;
        }
    }
}
