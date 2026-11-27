/*
 * LAB01 : โปรแกรมตรวจสอบเลขคู่ หรือเลขคี่
 * หัวข้อ : if-else
 * โจทย์  : รับเลขจำนวนเต็ม 2 ตัว แล้วบอกว่าแต่ละตัวเป็นเลขคู่ (Even) หรือเลขคี่ (Odd)
 * วิธีคิด : เอาเลขไปหาร 2 ถ้าเศษ (%) เป็น 0 คือเลขคู่ ถ้าไม่ใช่คือเลขคี่
 *
 * ตัวอย่าง  input : 9 , 18
 *          output: Odd , Even
 */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int rem1, rem2;
    cin >> num1;
    cin >> num2;
    rem1 = num1 %2;
    rem2 = num2 %2;
    if (rem1 == 0){
        cout << "Even" << endl;
    } else{
        cout << "Odd" << endl;
    }
    if (rem2 == 0){
        cout << "Even" << endl;
    } else{
        cout << "Odd" << endl;
    }
    return 0;
}
