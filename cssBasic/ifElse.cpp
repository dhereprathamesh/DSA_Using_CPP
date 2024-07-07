#include <bits/stdc++.h>
using namespace std;


//Write a program that takes input of age
// and prints if you are adult or not


int main() {
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "You Are An Adult";
    } else {
        cout << "You are not An Adult";
    }

    return 0;
}