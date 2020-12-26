#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void print(int a)
{
    cout << a << " ";
}

int main()
{
    list<int> coll = {1, 2, 3, 4, 5};

    for_each(coll.begin(), coll.end(), print);
    cout << endl;

    for_each(coll.rbegin(), coll.rend(), print);
    cout <<endl;
}