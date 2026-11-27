#include <iostream>
using namespace std;

int main(){
    int n, i, k;

    cin >> n;

    for (i = 0; i < n; i++){
        k = i % 2;
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
