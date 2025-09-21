#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        char ch='A'+i;
        for (int j=0; j<=i; j++)
            cout << ch << " ";
        cout << endl;
    }
    return 0;
}