#include<bits/stdc++.h>
using namespace std;

int main(){

    int age;

    cout << "Enter the age : ";
    cin >> age;

    if(age >= 18) {
        cout << "hey ! you are eligible to drive";
    }

    else {
        cout << "You are not eligible!";
    }

    return 0;
}