#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) cout << "* ";
    cout << endl;
    for (int k=0; k<N-2; k++) {
        cout << "* ";
        for (int l=0; l<N-2; l++) cout << "  ";
        cout << "* " << endl;
    }
    for (int j=0; j<N; j++) cout << "* ";
    return 0;
}