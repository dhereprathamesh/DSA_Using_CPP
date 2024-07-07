#include <bits/stdc++.h>
using namespace std;

/*
Take the age from user and decide accordingly
1. If age < 18,
   Print-> not Elegible for the job
2. If age >= 18 and age <= 54,
   Print-> Elegible For the job
3. If age >= 55 and age <= 57,
   Print-> Elegible For job, but retirement soon
4. If age > 57,
   Print -> Retirement Time       */
   
   int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "not elegible for job";
    } else if(age <= 54){
        cout << "elegible for job";
    } else if (age <=57){
        cout << "elegible For job, but retirement soon";
    }
    else {
        cout << "retirement time";
    }

    return 0;
   }