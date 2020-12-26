#include <iostream>
#include <list>
#include <algorithm>
#include "../include/print.hpp"

using namespace std;

int main()
{
    list<int> coll;
    back_insert_iterator<list<int>> iter(coll);

    *iter = 1;
    ++iter;
    *iter = 2;
    ++iter;
    iter = 3;
    PRINT_ELEMENTS(coll);

    front_inserter(coll) = 66;
    front_inserter(coll) = 77;
    PRINT_ELEMENTS(coll);

    copy(coll.begin(), coll.end(), front_inserter(coll));
    PRINT_ELEMENTS(coll);
    return 0;
}

