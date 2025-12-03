/* Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder.
In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N. */

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x=1;

    //Brute Force
    /*while (x<=n) {
        if (n%x==0)
            cout << x << " ";
        x++;
    }*/

    //Optimal Approach
    vector<int> res;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) {
            res.push_back(i);
            if (i!=n/i) res.push_back(n/i);
        }
    }
    
    sort(res.begin(), res.end());
    for (int y : res) cout << y << " ";
    return 0;
}