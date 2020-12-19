#include <iostream>
#include <string>
#include <set>
#include <deque>
#include <algorithm>
#include <memory>

using namespace std;
class Item{
    private:
        string name;
        float price;
    public:
        Item (const string& n, float p = 0) : name(n), price(p){}
        string getName() const {
            return name;
        }

        void setName(const string& n){
            name = n;
        }

        float getPrice() const{
            return price;
        }

        void setPrice(float p){
            price = p;
        }
};

template<typename Coll>
void printItems(const string& msg, const Coll& coll){
    cout << msg << endl;
    for(const auto& elem : coll) {
        cout << ' ' << elem->getName() << ": " << elem->getPrice() << endl;
    }
}

int main(){
    typedef shared_ptr<Item> ItemPtr;
    set<ItemPtr> allItems;
    deque<ItemPtr> bestsellers;

    bestsellers = {ItemPtr(new Item("Kong Yize", 20.10)),
                    ItemPtr(new Item("A Midsummer Night;s Dream", 14.99)),
                    ItemPtr(new Item("The Maltese Falcon", 9.88))
                    };

    allItems = {ItemPtr(new Item("Water", 0.44)), 
                ItemPtr(new Item("Pizza", 2.22))};
    allItems.insert(bestsellers.begin(), bestsellers.end());

    printItems("bestsellers: ", bestsellers);
    printItems("all: ", allItems);
    cout << endl;

    for_each(bestsellers.begin(), bestsellers.end(),
            [] (shared_ptr<Item>& elem){
                elem->setPrice(elem->getPrice() * 2);
            });


    bestsellers[0]->setPrice(44.77);
    printItems("bestsellers: ", bestsellers);
    printItems("all: ", allItems);
}
