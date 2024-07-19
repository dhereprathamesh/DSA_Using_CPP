#include <bits/stdc++.h>
using namespace std; 

class basic_class {
    public: 
    int first_num, second_num;

    sum(int a, int b){
        cout << "Sum of two numbers is " << a + b;
}
    };

    int main(){
        basic_class b1;
        cout << "Enter First Number ";
        cin >> b1.first_num;
        cout << "Enter second Number ";
        cin >> b1.second_num;
        b1.sum(b1.first_num, b1.second_num);
        return 0;
    }