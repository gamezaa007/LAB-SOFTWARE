/*
 * LAB11 : โปรแกรมหาค่าผลรวมและค่าที่มากที่สุด (summax)
 * หัวข้อ : for
 * โจทย์  : รับจำนวน n แล้ววนรับเลขอีก n ตัว
 *          แสดงผลรวม (บรรทัดแรก) และค่าที่มากที่สุด (บรรทัดที่สอง)
 *
 * ตัวอย่าง  input : 5 , 4 6 5 2 3
 *          output: 20 / 6
 */

#include <iostream>
using namespace std;

int main(){
    int n, x, i, sum, max;

    cin >> n;

    sum = 0;
    for (i = 1; i <= n; i++){
        cin >> x;
        sum = sum + x;
        if (i == 1 || x > max){
            max = x;
        }
    }

    cout << sum << endl;
    cout << max << endl;

    return 0;
}
