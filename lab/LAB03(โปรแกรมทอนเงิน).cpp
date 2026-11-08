#include <iostream>
using namespace std;
int main(){
    int cash, total, change;
    int M500, M100, M1;

    cin >> cash;
    cin >> total;

    change = cash - total;

    M500 = change / 500;
    change = change - (M500 * 500);
    M100 = change / 100;
    change = change - (M100 * 100);
    M1 = change / 1;

    if (M500 > 0){
        cout << "500 " << M500 << endl;
    }
    if (M100 > 0){
        cout << "100 " << M100 << endl;
    }
    if (M1 > 0){
        cout << "1 " << M1 << endl;
    }

    return 0;
}
