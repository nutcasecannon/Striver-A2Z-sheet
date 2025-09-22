// Problem Statement: Given an integer N, return the number of digits in N.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    int count=0;
    if (N==0) {
        cout << 1 << endl;
        return 0;
    }
    //Brute Force
    /*while(N!=0) {
        count++;
        N=N/10;
    }*/

    //Optimal Approach
    count = (int)(log10(N)+1);

    cout << count << endl;
    return 0;
}