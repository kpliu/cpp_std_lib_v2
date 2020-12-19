#include<unordered_set>
#include<numeric>
#include"../include/print.hpp"

using namespace std;

int main(){
    unordered_multiset<int> coll = {1, 2, 3, 5, 7, 11, 13, 17, 19, 77};
    PRINT_ELEMENTS(coll);

    coll.insert({-7, 17, 33, -11, 17, 19, 1, 13});
    PRINT_ELEMENTS(coll);

    coll.insert({-7, 17, 33, -11, 17, 19, 1, 13});
    PRINT_ELEMENTS(coll);
    
    coll.erase(33);

    coll.insert(accumulate(coll.begin(), coll.end(), 0));
    PRINT_ELEMENTS(coll);

    if(coll.find(19) != coll.end()) {
        cout << "19 is available" << endl;
    }

    unordered_multiset<int>::iterator pos;
    for(pos=coll.begin(); pos!=coll.end();){
        if(*pos < 0){
            pos = coll.erase(pos);
        } else{
            ++ pos;
        }
    }
    PRINT_ELEMENTS(coll);
}