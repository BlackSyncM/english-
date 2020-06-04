#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include "test.h"
#include "menu.h"

using namespace std;

int get_rand(int min, int max) { return rand() % (max - min + 1) + min; }

void shuffle(string *str, int N) {

  srand(time(NULL));

  for (int x = N - 1; x >= 1; x--) {
    int v = rand() % (x + 1);

    string tmp;

    tmp = str[v];
    str[v] = str[x];
    str[x] = tmp;
  }
}

int Test(string &Path, string &PathTranslate) {
  int f = 1;
  do {
    srand(time(NULL));
    ifstream fin;
    ifstream translate;
    fin.open(Path);
    translate.open(PathTranslate);
    if ((!fin.is_open()) && (!translate.is_open())) {
      cout << "Произошла ошибка при открытии файла!\n";
    }

    int code;
    string *AS;
    string *AS2;
    string *BS;
    string *BS2;
    int count;
    string s;
    string str;

    count = 0;
    AS = nullptr;

    do {
      getline(fin, s);

      if (s != "") {

        count++;

        AS2 = new string[count];

        for (int i = 0; i < count - 1; i++)
          AS2[i] = AS[i];

        AS2[count - 1] = s;

        if (AS != nullptr)
          delete[] AS;

        AS = AS2;
      }
    } while (s != "");

    count = 0;
    BS = nullptr;

    do {

      getline(translate, str);

      if (str != "") {

        count++;

        BS2 = new string[count];

        for (int i = 0; i < count - 1; i++)
          BS2[i] = BS[i];

        BS2[count - 1] = str;

        if (BS != nullptr)
          delete[] BS;

        BS = BS2;
      }
    } while (str != "");

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
      } else {
        cout << "\t\n\n Ответ неверен \n\n\n" << endl;
      }

    } break;

    case 2: {
      if (wrong[1] == right) {
        cout << "\t\n\n Верный ответ! \n\n\n" << endl;
      } else {
        cout << "\t\n\n Ответ неверен \n\n\n" << endl;
      }

    } break;

    case 3: {
      if (wrong[2] == right) {
        cout << "\t\n\n Верный ответ! \n\n\n" << endl;
      } else {
        cout << "\t\n\n Ответ неверен \n\n\n" << endl;
      }
    } break;

    case 4: {
      if (wrong[3] == right) {
        cout << "\t\n\n Верный ответ! \n\n\n" << endl;
      } else {
        cout << "\t\n\n Ответ неверен \n\n\n" << endl;
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

  return 0;
}

