#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    map<string, double> coll {
                                {"tim", 9.9},
                                {"struppi", 11.77}
                            };
    
    for_each(coll. begin(), coll.end(),
            [](pair<const string, double>&elem){
                elem.second *= elem.second;
            }
            );

    for_each(coll.begin(), coll.end(),
            [](const map<const string,double>::value_type& elem){
                cout << elem.first << ": " << elem.second << endl;
            }
            );
}