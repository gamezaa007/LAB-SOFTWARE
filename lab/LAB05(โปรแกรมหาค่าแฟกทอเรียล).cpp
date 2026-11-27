/*
 * LAB05 : โปรแกรมหาค่าแฟกทอเรียล (n!)
 * หัวข้อ : while
 * โจทย์  : รับเลข n ที่อยู่ในช่วง 0-10 (ถ้าไม่อยู่ในช่วงให้รับใหม่)
 *          แล้วแสดงค่า n! = 1 x 2 x ... x n
 *
 * ตัวอย่าง  input : 5
 *          output: 120
 */

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
