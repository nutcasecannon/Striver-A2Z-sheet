#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N-i; j++)
            cout << " ";
        for (char ch='A'; ch<='A'+i-1; ch++)
            cout << ch;
        for (char ch='A'+i-2; ch>='A'; ch--)
            cout << ch;
        cout << endl;
        
    }
    return 0;
}