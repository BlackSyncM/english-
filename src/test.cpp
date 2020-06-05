#include "test.h"
#include "menu.h"
#include <cstring>
#include <ctime>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int get_rand(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void shuffle(string* str, int N)
{
    srand(time(NULL));

    for (int x = N - 1; x >= 1; x--) {
        int v = rand() % (x + 1);

        string tmp;

        tmp = str[v];
        str[v] = str[x];
        str[x] = tmp;
    }
}

int Test(string& Path, string& PathTranslate)
{
    int f = 1;
    int r = 0, w = 0;
    do {
        srand(time(NULL));
        ifstream fin;
        ifstream translate;
        fin.open(Path.c_str());
        translate.open(PathTranslate.c_str());
        if ((!fin.is_open()) && (!translate.is_open())) {
            cout << "Произошла ошибка при открытии файла!\n";
        }

        int code;
        string* AS;
        string* AS2;
        string* BS;
        string* BS2;
        int count;
        string s;
        string str;

        count = 0;
        AS = NULL;

        do {
            getline(fin, s);

            if (s != "") {
                count++;

                AS2 = new string[count];

                for (int i = 0; i < count - 1; i++)
                    AS2[i] = AS[i];

                AS2[count - 1] = s;

                if (AS != NULL)
                    delete[] AS;

                AS = AS2;
            }
        } while (s != "");

        count = 0;
        BS = NULL;

        do {
            getline(translate, str);

            if (str != "") {
                count++;

                BS2 = new string[count];

                for (int i = 0; i < count - 1; i++)
                    BS2[i] = BS[i];

                BS2[count - 1] = str;

                if (BS != NULL)
                    delete[] BS;

                BS = BS2;
            }
        } while (str != "");

        fin.close();
        translate.close();

        string h, right;
        string wrong[4];

        int j, j1 = 0;
        int kr = 0;
        j = get_rand(0, count - 1);
        h = AS[j];
        right = BS[j];
        AS[j].clear();
        BS[j].clear();
        while (kr != 3) {
            j = get_rand(0, count - 1);
            if (BS[j].empty() == false) {
                wrong[j1] = BS[j];
                AS[j].clear();
                BS[j].clear();
                j1++;
                kr++;
            }
        }
        wrong[3] = right;

        shuffle(wrong, 4);

        cout << "\n\n\n\n" << endl;
        cout << "\t\t Выберите правильный перевод \n\n" << endl;
        cout << "\t\t" << h << "\n\n" << endl;
        cout << "\t\t 1 <=> " << wrong[0] << endl;
        cout << "\t\t 2 <=> " << wrong[1] << endl;
        cout << "\t\t 3 <=> " << wrong[2] << endl;
        cout << "\t\t 4 <=> " << wrong[3] << "\n\n" << endl;
        cout << "\t\t 0 <=> Выход из теста" << endl;

        cin >> code;
        switch (code) {
        case 1: {
            if (wrong[0] == right) {
                cout << "\t\n\n Верный ответ! \n\n\n" << endl;
                r++;
            } else {
                cout << "\t\n\n Ответ неверен \n\n\n" << endl;
                w++;
            }
        } break;

        case 2: {
            if (wrong[1] == right) {
                cout << "\t\n\n Верный ответ! \n\n\n" << endl;
                r++;
            } else {
                cout << "\t\n\n Ответ неверен \n\n\n" << endl;
                w++;
            }
        } break;

        case 3: {
            if (wrong[2] == right) {
                cout << "\t\n\n Верный ответ! \n\n\n" << endl;
                r++;
            } else {
                cout << "\t\n\n Ответ неверен \n\n\n" << endl;
                w++;
            }
        } break;

        case 4: {
            if (wrong[3] == right) {
                cout << "\t\n\n Верный ответ! \n\n\n" << endl;
                r++;
            } else {
                cout << "\t\n\n Ответ неверен \n\n\n" << endl;
                w++;
            }
        } break;
        case 0:
            f = 0;

        default:
            cout << "\t\n\n error \n\n\n" << endl;
        }

        delete[] AS;
        delete[] BS;

    } while (f == 1);
    system("clear");
    stat(r, w);
    return 0;
}

int stat(int r1, int w1)
{
    int sum = r1 + w1;

    if (sum == 0)
        return 0;

    r1 = (r1 * 100) / sum;

    w1 = (w1 * 100) / sum;

    cout << "\n\n\n\n" << endl;
    cout << "\t\t Всего ответов: " << sum << "\n\n" << endl;
    cout << "\t\t Процент правильных ответов => " << r1 << "%\n" << endl;
    cout << "\t\t Процент неправильных ответов => " << w1 << "%\n" << endl;

    if (r1 == 100)
        cout << "\t\t Вы отлично справились с данной темой!" << endl;
    if ((r1 < 100) && (r1 >= 80))
        cout << "\t\t Вы знаете тему хорошо, но нужно подучить некоторые слова"
             << endl;
    if ((r1 < 80) && (r1 >= 50))
        cout << "\t\t Ваши результаты указывают на то, что нужно подучить "
                "данную тему"
             << endl;
    if ((r1 < 50))
        cout << "\t\t Пройдите тест заново" << endl;
    cout << "\n\n\t\t Введите что-нибудь чтобы выйти из теста" << endl;

    int code;
    cin >> code;

    return 0;
}
