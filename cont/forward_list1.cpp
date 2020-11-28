#include<iostream>
#include<forward_list>
#include<algorithm>
#include<iterator>
#include<string>
using namespace std;

void printLists(const string& s, const forward_list<int>& l1, const forward_list<int>& l2)
{
    cout << s << endl;
    cout << "list1: ";
    copy (l1.cbegin(), l1.cend(), ostream_iterator<int>(cout, " "));
    cout << endl << "list2: ";
    copy (l2.cbegin(), l2.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    forward_list<int> list1 = {1, 2, 3, 4};
    forward_list<int> list2 = {77, 78, 79};
    printLists("initial: ", list1, list2);

    list2.insert_after(list2.before_begin(), 99);
    list2.push_front(10);
    list2.insert_after(list2.before_begin(), {10, 11, 12, 13});
    printLists("insert 6 new element at list2.before_begin: ", list1, list2);

    list1.insert_after(list1.before_begin(), list2.begin(), list2.end()); //?? list1.insert_after(lis1.before_begin(), list2);
    printLists("insert list2 into list1: ", list1, list2);

    list2.erase_after(list2.begin());
    list2.erase_after(find(list2.begin(), list2.end(), 99), list2.end());
    printLists("del 2nd and after 99: ", list1, list2);

    list1.sort();
    list2 = list1;
    list2.unique();
    printLists("sorted and unique: ", list1, list2);

    list1.merge(list2);
    printLists("merged: ", list1, list2);
}