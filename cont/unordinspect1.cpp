#include<unordered_set>
#include<iostream>
#include"buckets.hpp"

int main(){
    std::unordered_set<int> intset = {1,2,3,5,7,11,13,17,19};
    printHashTableState(intset);

    intset.insert({-7,17,33,4});
    printHashTableState(intset);
}