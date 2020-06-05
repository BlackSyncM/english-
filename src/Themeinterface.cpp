#include "menu.h"
#include "test.h"
#include <cstring>
#include <ctime>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int human()
{
    int code;

    while (1) {
        system("clear");
        cout << "\t\t||||||||ЧЕЛОВЕК||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Тело\n";
        cout << "\t 2.Внешность\n";
        cout << "\t 3.Эмоции\n";
        cout << "\t 4.Характер\n";
        cout << "\t 5.Вернуться к выбору темы\n";

        code = getchar();

        switch (code) {
        case 49: {
            system("clear");
            string path = "words/Human/Body.txt";
            string pathTranslate = "translate/Human/Bodytranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 50: {
            system("clear");
            string path = "words/Human/Appearance.txt";
            string pathTranslate = "translate/Human/Appearancetranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 51:

        {
            system("clear");
            string path = "words/Human/Emotions.txt";
            string pathTranslate = "translate/Human/Emotionstranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 52: {
            system("clear");
            string path = "words/Human/Character.txt";
            string pathTranslate = "translate/Human/Charactertranslate.txt";
            Test(path, pathTranslate);
        }

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
        system("clear");
        cout << "\t\t||||||||ОБЩЕСТВО||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Успех\n";
        cout << "\t 2.Саморазвитие\n";
        cout << "\t 3.Отношения\n";
        cout << "\t 4.Вернуться к выбору темы\n";

        code = getchar();

        switch (code) {
        case 49: {
            system("clear");
            string path = "words/Society/Success.txt";
            string pathTranslate = "translate/Society/Successtranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 50: {
            system("clear");
            string path = "words/Society/Self-development.txt";
            string pathTranslate
                    = "translate/Society/Self-developmenttranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 51: {
            system("clear");
            string path = "words/Society/Relationships.txt";
            string pathTranslate = "translate/Human/Relationshipstranslate.txt";
            Test(path, pathTranslate);
        }

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
        system("clear");
        cout << "\t\t||||||||ПРИРОДА||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Растения\n";
        cout << "\t 2.Животные\n";
        cout << "\t 3.Погода\n";
        cout << "\t 4.Вернуться к выбору темы\n";

        code = getchar();

        switch (code) {
        case 49: {
            system("clear");
            string path = "words/Nature/Plants.txt";
            string pathTranslate = "translate/Nature/Plantstranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 50: {
            system("clear");
            string path = "words/Nature/Animals.txt";
            string pathTranslate = "translate/Nature/Animalstranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 51: {
            system("clear");
            string path = "words/Nature/Weather.txt";
            string pathTranslate = "translate/Nature/Weathertranslate.txt";
            Test(path, pathTranslate);
        }

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
        system("clear");
        cout << "\t\t||||||||ЕДА И НАПИТКИ||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Еда\n";
        cout << "\t 2.Напитки\n";
        cout << "\t 3.Процесс приготовления\n";
        cout << "\t 4.Посуда\n";
        cout << "\t 5.Вернуться к выбору темы\n";

        code = getchar();

        switch (code) {
        case 49: {
            system("clear");
            string path = "words/Food/Food.txt";
            string pathTranslate = "translate/Food/Foodtranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 50: {
            system("clear");
            string path = "words/Food/Drinks.txt";
            string pathTranslate = "translate/Food/Drinkstranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 51: {
            system("clear");
            string path = "words/Food/Cooking.txt";
            string pathTranslate = "translate/Food/Cookingtranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 52: {
            system("clear");
            string path = "words/Food/Dishes.txt";
            string pathTranslate = "translate/Food/Dishestranslate.txt";
            Test(path, pathTranslate);
        }

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
        system("clear");
        cout << "\t\t||||||||СПОРТ||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Виды спорта\n";
        cout << "\t 2.Фитнес\n";
        cout << "\t 3.Вернуться к выбору темы\n";

        code = getchar();

        switch (code) {
        case 49: {
            system("clear");
            string path = "words/Sport/Sport.txt";
            string pathTranslate = "translate/Sport/Sporttranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 50: {
            system("clear");
            string path = "words/Sport/Fitness.txt";
            string pathTranslate = "translate/Sport/Fitnesstranslate.txt";
            Test(path, pathTranslate);
        }

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
        system("clear");
        cout << "\t\t||||||||ДОМ||||||||\n\n";
        cout << "\tВыберите под-тему\n";
        cout << "\t 1.Комнаты\n";
        cout << "\t 2.Убока\n";
        cout << "\t 3.Вернуться к выбору темы\n";

        code = getchar();

        switch (code) {
        case 49: {
            system("clear");
            string path = "words/House/Rooms.txt";
            string pathTranslate = "translate/House/Roomstranslate.txt";
            Test(path, pathTranslate);
        }

        break;

        case 50: {
            system("clear");
            string path = "words/House/Cleaning.txt";
            string pathTranslate = "translate/House/Cleaningtranslate.txt";
            Test(path, pathTranslate);
        }

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
