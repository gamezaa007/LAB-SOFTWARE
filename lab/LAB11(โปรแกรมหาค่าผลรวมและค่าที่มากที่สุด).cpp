#include <iostream>
using namespace std;

int main(){
    int n, x, i, sum, max;

    cin >> n;

    sum = 0;
    for (i = 1; i <= n; i++){
        cin >> x;
        sum = sum + x;
        if (i == 1 || x > max){
            max = x;
        }
    }

    cout << sum << endl;
    cout << max << endl;

    return 0;
}
