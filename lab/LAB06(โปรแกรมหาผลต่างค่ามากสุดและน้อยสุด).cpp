#include<iostream>
using namespace std;

int main(){
    int n, i, max, min ;

    i = 0 ; 
    max = 0 ;
    min = 21 ;

    while (i < 10){
        cin >> n ;

        while ( n < 0 || n > 20) {
            cin >> n ;
        } if (n > max) {
            max = n ;
        } if (n < min) {
            min = n ;
        } i++ ;

    } if (i == 0){
        cout << 0 << endl ;
    } else {
        cout << max - min << endl ;
    }
    return 0;
}