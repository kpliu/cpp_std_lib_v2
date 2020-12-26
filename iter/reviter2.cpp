#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>::const_iterator pos = find(coll.begin(), coll.end(), 5);
    cout << "iterator: " << *pos << endl;

    list<int>::const_reverse_iterator rpos(pos);
    cout << "riterator: " << *rpos << endl;
    return 0;
}