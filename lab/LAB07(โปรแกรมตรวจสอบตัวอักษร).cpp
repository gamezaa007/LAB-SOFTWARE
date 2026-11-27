/*
 * LAB07 : โปรแกรมตรวจสอบตัวอักษร (Character)
 * หัวข้อ : switch-case
 * โจทย์  : รับอักษรภาษาอังกฤษ 1 ตัว
 *          a e i o u (ทั้งตัวเล็ก/ตัวใหญ่) -> Vowel (สระ)
 *          ตัวอื่น ๆ                         -> Consonant (พยัญชนะ)
 *
 * ตัวอย่าง  input : U  -> Vowel
 *          input : f  -> Consonant
 */

#include <iostream>
using namespace std;

int main(){
    char ch;

    cin >> ch;

    switch (ch){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }

    return 0;
}
