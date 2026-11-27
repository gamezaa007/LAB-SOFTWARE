/*
 * LAB10 : โปรแกรมพิมพ์ตัวอักขระเป็นรูปธง (flag)
 * หัวข้อ : for ซ้อน for
 * โจทย์  : รับจำนวนแถว (row) และอักขระ (sign)
 *          พิมพ์เป็นสามเหลี่ยม แถวแรกยาว row ตัว แล้วลดลงทีละ 1
 *
 * ตัวอย่าง  input : 5 , #
 *          output:
 *              #####
 *              ####
 *              ###
 *              ##
 *              #
 */

#include <iostream>
using namespace std;

int main(){
    int row, i, j;
    char sign;

    cin >> row;
    cin >> sign;

    for (i = row; i >= 1; i--){
        for (j = 1; j <= i; j++){
            cout << sign;
        }
        cout << "\n";
    }

    return 0;
}
