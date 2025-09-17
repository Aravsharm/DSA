#include<bits/stdc++.h>
using namespace std;
 
void countNo(int n)
{
    int count = 0;
    while(n > 0)
    {
        n = n /10;
        count++;
    }
    cout << "The number of digits is :" << count;
}

int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    countNo(n);
    return 0;
}