#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=N-1; i>=0; i--) {
        for (char ch='A'; ch<='A'+i; ch++)
            cout << ch << " ";
        cout << endl;
    }
    return 0;
}