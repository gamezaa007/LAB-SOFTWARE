/*
 * LAB04 : โปรแกรมอักษรเสี่ยงทาย (guess)
 * หัวข้อ : do-while
 * โจทย์  : รับอักษรปริศนา 1 ตัว แล้ววนรับอักษรที่ผู้ใช้ทายไปเรื่อย ๆ
 *          จนกว่าจะทายถูก จากนั้นแสดงจำนวนครั้งที่ทาย
 *
 * ตัวอย่าง  input : k (อักษรปริศนา) , a , z , k
 *          output: Correct! You guessed 3 times.
 */

#include <iostream>
using namespace std;

int main(){
    char ch, mychar;   // ch = ตัวอักษรที่ผู้ใช้ทาย, mychar = อักษรปริศนา
    int count = 0;     // จำนวนครั้งที่ทาย

    cout << "Enter secret character: ";
    cin >> mychar;

    do {
        cout << "Guess the character: ";
        cin >> ch;
        count++;
    } while (ch != mychar);

    cout << "Correct! You guessed " << count << " times." << endl;

    return 0;
}
