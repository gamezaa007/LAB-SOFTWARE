/*
 * LAB12 : โปรแกรมพิมพ์ตัวเลขศูนย์-หนึ่ง (zeroone)
 * หัวข้อ : for
 * โจทย์  : รับเลข n (1-20) แล้วแสดง 0 กับ 1 สลับกันจำนวน n ตัว
 * วิธีคิด : รอบที่ i ให้พิมพ์ i % 2 (เศษจากการหาร 2 จะสลับ 0,1,0,1,...)
 *
 * ตัวอย่าง  input : 5
 *          output: 0 1 0 1 0
 */

#include <iostream>
using namespace std;

int main(){
    int n, i, k;

    cin >> n;

    for (i = 0; i < n; i++){
        k = i % 2;
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
