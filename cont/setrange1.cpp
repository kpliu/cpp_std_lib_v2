#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> c{1, 2, 5, 6};
    c.insert(4);


    cout << "lower_bound(3) " << *c.lower_bound(3) << endl;
    cout << "upper_bound(3) " << *c.upper_bound(3) << endl;
    cout << "equal_range(3) " << *c.equal_range(3).first << " "
                                << *c.equal_range(3).second << endl;

    cout << endl;

    cout << "lower_bound(5) " << *c.lower_bound(5) << endl;
    cout << "upper_bound(5) " << *c.upper_bound(5) << endl;
    cout << "equal_range(5) " << *c.equal_range(5).first << " " 
                                << *c.equal_range(5).second << endl;

}