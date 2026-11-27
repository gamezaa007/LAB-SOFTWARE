/*
 * LAB08 : โปรแกรมคำนวณเลข (Calculator)
 * หัวข้อ : switch
 * โจทย์  : รับเลข 2 ตัว และเครื่องหมาย 1 ตัว
 *          + - * /  -> คำนวณแล้วแสดงผล (ตัวแรกเป็นตัวตั้งเสมอ)
 *          >        -> ออกจากโปรแกรม ไม่แสดงอะไร
 *          อื่น ๆ    -> แสดง "Invalid mark!!"
 *
 * ตัวอย่าง  input : 25 , 50 , /   -> 0.5
 *          input : 5 , 5 , $     -> Invalid mark!!
 */

#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    char mark;

    cin >> num1;
    cin >> num2;
    cin >> mark;

    switch (mark){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        case '>':
            return 0;
        default:
            cout << "Invalid mark!!" << endl;
    }

    return 0;
}
