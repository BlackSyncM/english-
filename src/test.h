#ifndef READ_H
#define READ_H
#include <cstring>
#include <fstream>

using namespace std;

int get_rand(int min, int max);
void shuffle(string *str, int N);
int Test(string &Path, string &PathTranslate);
int stat(int r1, int w1);

#endif
