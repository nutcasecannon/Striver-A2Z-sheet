/*Given a number N, check if it is prime or not.*/

#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    bool prime = true;
    if (N<2) prime = false;
    for (int i=2; i<N; i++) {
        if (N%i==0) {
            prime = false;
            break;
        }
    }
    if (prime) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}