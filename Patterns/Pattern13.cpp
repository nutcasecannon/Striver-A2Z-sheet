#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int n=N*(N+1)/2;
    int j=1,k=1;
    for (int i=1; i<=n; i++) {
        cout << i << " ";
        if (k==i) {
            cout << endl;
            k=k+(++j);
        }
    }
    return 0;
}