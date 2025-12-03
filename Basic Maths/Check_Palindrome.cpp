// Given an integer x, return true if x is a palindrome, and false otherwise.

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n<0) cout << "false\n";
    else {
        int x=n;
        long rev=0;
        while (x>0) {
            rev = rev*10 + x%10;
            x=x/10;
        }
        if (rev==n) cout << "true\n";
        else cout << "false\n";
    }
    return 0;
}