#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main(){
    deque<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int>::const_iterator pos = find(coll.cbegin(), coll.cend(), 5);
    cout << "pos: " << *pos << endl;

    deque<int>::const_reverse_iterator rpos(pos);
    cout << "rpos: " << *rpos << endl;
    //cout << "rpos base: " << rpos << " by function "<< rpos.base() << endl;
    cout << "rpos base by function: "<< *rpos.base() << endl;



    deque<int>::const_iterator rrpos = rpos.base();
    cout << "rrpos: " << *rrpos << endl;


    return 0;
}