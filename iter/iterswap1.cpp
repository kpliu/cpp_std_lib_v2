#include<list>
#include<iostream>
#include<algorithm>
#include"../include/print.hpp"

using namespace std;

int main()
{
    list<int> coll;
    list<int> coll1;

    for(int i = -3; i < 9; ++i){
        coll.push_back(i);
        coll1.push_back(i);
    }
    PRINT_ELEMENTS(coll);
    //swap 1st and 2nd
    iter_swap(coll.begin(), next(coll.begin()));
    PRINT_ELEMENTS(coll);

    //swap 1st and last;
    iter_swap(coll.begin(), prev(coll.end()));
    PRINT_ELEMENTS(coll);

    //swap between coll1 and coll
    iter_swap(coll1.begin(), prev(coll.end()));
    PRINT_ELEMENTS(coll);
}