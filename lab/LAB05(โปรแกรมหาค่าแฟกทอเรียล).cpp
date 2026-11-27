#include <iostream>
using namespace std;

int main(){
    int n, i = 1, x = 1 ;

    cin >> n ;

    while ( n < 0 || n > 10) {
        cin >> n ;
    }

    while ( i <= n ) {
        x *= i ;
        i++ ;
    }
    cout << x ;
    return 0;
}
