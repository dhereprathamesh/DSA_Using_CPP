#include <bits/stdc++.h>
using namespace std;

class abc {
    public: 
    int number,

    display() {
        cout << "Entered Numbers is = " << number;
    }
};

int main() {
    abc obj1;
    cout << "Enter Number ";
    cin >> obj1.number;
    obj1.display();

    return 0;
}