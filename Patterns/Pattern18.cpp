#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    char ch = 'A'+N-1;
    for (int i=0; i<N; i++) {
        for (int j=0; j<=i; j++)
            cout << ch << " ";
        ch--;
        cout << endl;
    }
    return 0;
}