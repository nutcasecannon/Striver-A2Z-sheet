//Given two integers N1 and N2, find their greatest common divisor.

#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    while (a!=b) {
        if (a>b) a=a-b;
        else b=b-a;
    }
    cout << a;
    return 0;
}