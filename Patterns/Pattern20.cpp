#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<=i; j++)
            cout << "*";
        for (int k=0; k<N-i-1; k++)
            cout << "  ";
        for (int l=0; l<=i; l++)
            cout << "*";
        cout << endl;
    }
    for (int i=1; i<N; i++) {
        for (int j=0; j<N-i; j++)
            cout << "*";
        for (int k=0; k<i; k++)
            cout << "  ";
        for (int l=0; l<N-i; l++)
            cout << "*";
        cout << endl;
    }
    return 0;
}