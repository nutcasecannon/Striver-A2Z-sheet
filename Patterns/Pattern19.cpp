#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N; //5
    for (int i=0; i<N; i++) { // 5 lines
        for (int j=0; j<N-i; j++) // [0,4]
            cout << "*";
        for (int k=0; k<i; k++) // 0,1,2,3,4 times per row
            cout << "  ";
        for (int l=0; l<N-i; l++)
            cout << "*";
        cout << endl;
    }
    for (int i=0; i<N; i++) { // 5 lines
        for (int j=0; j<=i; j++)
            cout << "*";
        for (int k=0; k<N-i-1; k++)
            cout << "  ";
        for (int l=0; l<=i; l++)
            cout << "*";
        cout << endl;
    }
    return 0;
}