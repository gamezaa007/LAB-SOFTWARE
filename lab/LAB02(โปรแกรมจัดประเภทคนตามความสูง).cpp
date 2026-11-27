/*
 * LAB02 : โปรแกรมจัดประเภทคนตามความสูง
 * หัวข้อ : if ... else if ... else
 * โจทย์  : รับความสูง (ซม.) แล้วจัดประเภท
 *          < 150          -> Dwarf
 *          150 - 164.99   -> Standard Height
 *          165 - 189.99   -> Taller
 *          190 ขึ้นไป      -> Abnormal Height
 *
 * ตัวอย่าง  input : 164.99
 *          output: Standard Height
 */

#include <iostream>
using namespace std;
int main(){
    double height;
    cin >> height;
    if (height < 150){
        cout << "Dwarf" << endl;
    } else if (height < 165){
        cout << "Standard Height" << endl;
    } else if (height < 190){
        cout << "Taller" << endl;
    } else {
        cout << "Abnormal Height" << endl;
    }
    return 0;
}
