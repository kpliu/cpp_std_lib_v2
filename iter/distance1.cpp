#include<list>
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    list<int> coll;
    for (int i = 0; i < 9; i++){
        coll.push_back(i);
    }
    list<int>::iterator pos;
    pos = find(coll.begin(), coll.end(), 5);
    if (coll.end() != pos){
        cout << "distance is " << distance(pos, coll.begin()) << endl;
    } else {
        cout << "5 is not in coll" <<endl;
    }
}