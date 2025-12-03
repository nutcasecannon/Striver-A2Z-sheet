/* Problem Statement: Given an integer N return the reverse of the given number.
Note: If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.*/

#include<iostream>
#include<climits>
using namespace std;
int main() {
    int num;
    cin >> num; // Valid Input Range (to get non-zero answer) : [-2,147,483,641, 2,147,483,641]
    int rev_num=0;
    while (num!=0) {
        if (rev_num<INT_MIN/10 || rev_num>INT_MAX/10) { // -2,147,483,648 and +2,147,483,647
            cout << 0;
            return 0;
        };
        rev_num=(rev_num*10)+(num%10);
        num=num/10;
    }
    cout << rev_num;
    return 0;
}