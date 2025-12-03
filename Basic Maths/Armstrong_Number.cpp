// Given an integer N, return true it is an Armstrong number otherwise return false.

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;

    //int digit=(int)log10(n)+1;
    int digit = to_string(n).length();

    int x=n;
    int sum=0;
    while (x>0) {
        sum+=(int)pow(x%10,digit);
        x=x/10;
    }
    
    if (sum==n) cout << "true";
    else cout << "false";
    
    return 0;
}