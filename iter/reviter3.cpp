#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void print(int val){
    cout << val <<" ";
}

int main(){
    deque<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int>::const_iterator pos = find(coll.cbegin(), coll.cend(), 5);
    for_each(coll.cbegin(), pos, print);
    cout <<endl;

    deque<int>::const_reverse_iterator rpos(pos);
    for_each(coll.crbegin(), rpos, print);
    cout << endl;

    deque<int>::const_iterator pos0 = find(coll.cbegin(), coll.cend(), 2);
    deque<int>::const_reverse_iterator rpos0(pos0);
    for_each(pos0, pos, print);
    cout << endl;
    for_each(rpos, rpos0, print);
    cout << endl;
    return 0;
}