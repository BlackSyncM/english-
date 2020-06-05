#include "test.h"
#include "menu.h"
#include <cstring>
#include <ctime>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    hello();
    system("clear");
    main_menu();
    return 0;
}
