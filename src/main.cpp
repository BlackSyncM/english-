#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include "menu.h"
#include "test.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    hello();
    system("clear");
    main_menu();
    return 0;
}
