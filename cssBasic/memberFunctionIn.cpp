#include <bits/stdc++.h>
using namespace std;

class find_Sum {
    public: 
    int x,y;

    void get_data(); 
    int disp_data();
};

void find_Sum::get_data(){
    cout << "Enter Two numbers ";
    cin >> x >> y;
}
int find_Sum::disp_data() {
    return x + y;
}

int main () {
    find_Sum sum1;
    sum1.get_data();

    cout << "sum of entered number is " << sum1.disp_data() << endl;
    return 0;
}