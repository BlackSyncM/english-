#ifndef TEST_H
#define TEST_H
#include <cstring>
#include <fstream>

using namespace std;

int get_rand(int min, int max);
void shuffle(string* str, int N);
int Test(string& Path, string& PathTranslate);
int stat(int r1, int w1);
int check(string sk, string yes);

#endif
