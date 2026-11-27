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
