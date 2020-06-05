#include "menu.h"
#include "test.h"
#include <cstring>
#include <ctime>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int check(string sk, string yes)
{
    if (sk == yes)
        return 1;
    else
        return 0;
}
