/*
 * LAB03 : โปรแกรมทอนเงิน
 * หัวข้อ : if, การหาร (/) และเศษ
 * โจทย์  : รับเงินที่ลูกค้าจ่าย (cash) และราคาสินค้า (total)
 *          ทอนเงินด้วยแบงก์/เหรียญที่ใหญ่ที่สุดก่อน มีแค่ 500, 100 และ 1 บาท
 *          แสดงเฉพาะชนิดที่ใช้ทอน ในรูปแบบ "ชนิด จำนวน"
 *
 * ตัวอย่าง  input : 2200 , 1550   (ต้องทอน 650)
 *          output: 500 1 / 100 1 / 1 50
 */

#include <iostream>
using namespace std;
int main(){
    int cash, total, change;
    int M500, M100, M1;

    cin >> cash;
    cin >> total;

    change = cash - total;

    M500 = change / 500;
    change = change - (M500 * 500);
    M100 = change / 100;
    change = change - (M100 * 100);
    M1 = change / 1;

    if (M500 > 0){
        cout << "500 " << M500 << endl;
    }
    if (M100 > 0){
        cout << "100 " << M100 << endl;
    }
    if (M1 > 0){
        cout << "1 " << M1 << endl;
    }

    return 0;
}
