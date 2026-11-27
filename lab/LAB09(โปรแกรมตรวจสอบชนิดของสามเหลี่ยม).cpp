/*
 * LAB09 : โปรแกรมตรวจสอบชนิดของสามเหลี่ยม (triangle)
 * หัวข้อ : nested if
 * โจทย์  : รับความยาวด้าน 3 ด้าน
 *          เป็นสามเหลี่ยมได้เมื่อ ผลรวม 2 ด้านใด ๆ > ด้านที่เหลือ
 *          ด้านเท่ากันทั้ง 3   -> Equilateral
 *          เท่ากันแค่ 2 ด้าน   -> Isosceles
 *          ไม่เท่ากันเลย       -> Scalene
 *          ไม่เป็นสามเหลี่ยม   -> No
 *
 * ตัวอย่าง  input : 14 , 14 , 10  -> Isosceles
 *          input : 5 , 10 , 15   -> No
 */

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c){
            cout << "Equilateral" << endl;
        } else if (a == b || b == c || a == c){
            cout << "Isosceles" << endl;
        } else {
            cout << "Scalene" << endl;
        }
    } else {
        cout << "No" << endl;
    }

    return 0;
}
