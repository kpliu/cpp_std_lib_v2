#include <iostream>
#include <set>
#include <list>
#include <algorithm>
#include "../include/print.hpp"

using namespace std;

int main()
{
    set<int> coll;
    insert_iterator<set<int>> iter(coll, coll.begin());

    *iter = 1;
    ++iter;
    *iter = 2;
    ++iter;
    iter = 3;

    inserter(coll, coll.end()) = 66;
    inserter(coll, coll.end()) = 77;
    PRINT_ELEMENTS(coll, "set: ");

    list<int> coll2;
    copy(coll.begin(), coll.end(), inserter(coll2, coll2.begin()));
    PRINT_ELEMENTS(coll2, "list: ");

    copy(coll.begin(), coll.end(), inserter(coll2, ++coll2.begin()));
    PRINT_ELEMENTS(coll2, "list: ");

    return 0;
}

