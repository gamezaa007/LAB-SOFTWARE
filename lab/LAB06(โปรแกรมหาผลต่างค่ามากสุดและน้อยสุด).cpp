/*
 * LAB06 : โปรแกรมหาผลต่างค่ามากสุดและน้อยสุด
 * หัวข้อ : while (loop ซ้อน loop)
 * โจทย์  : รับเลข 10 ตัว แต่ละตัวต้องอยู่ในช่วง 0-20 (ถ้าไม่อยู่ในช่วงให้รับใหม่)
 *          แล้วแสดง ค่ามากที่สุด - ค่าน้อยที่สุด
 *
 * ตัวอย่าง  input : 15 3 20 7 9 0 12 5 18 4
 *          output: 20   (20 - 0)
 */

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