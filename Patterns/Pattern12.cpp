#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=i; j++) cout << j << " ";
        for (int k=1; k<=2*(N-i); k++) cout << "  ";
        for (int l=i; l>=1; l--) cout << l << " "; 
        cout << endl;
    }
    return 0;
}