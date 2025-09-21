#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int N;
    cin >> N;
    int L = 2*N-2;
    for (int i=0; i<=L; i++) {
        for (int j=0; j<=L; j++) {
            int top = i;
            int bottom = L-i;
            int left = j;
            int right = L-j;
            cout << (N-min(min(top,bottom), min(left,right))) << " ";
        }
        cout << endl;
    }
    return 0;
}