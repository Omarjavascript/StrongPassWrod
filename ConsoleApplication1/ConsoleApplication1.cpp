#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string ReadPinCode() {
    string pinCode;
    cout << "Please Enter Your PIN Code: " << endl;
    cin >> pinCode;
    return pinCode;
}

bool Login() {
    string pinCode;
    int counter = 3;

    do {
        pinCode = ReadPinCode();

        if (pinCode == "1234") {
            return true; // نجاح تسجيل الدخول
        }
        else {
            counter--;
            system("color 4F"); // شاشة حمراء عند الخطأ
            cout << "\nWrong PIN! You have " << counter << " more trial(s).\n" << endl;
        }

    } while (counter > 0); // يستمر فقط طالما لا تزال هناك محاولات

    return false; // استنفد المحاولات
}

int main() {
    // استدعاء الدالة مع الأقواس ()
    if (Login()) {
        system("color 2F"); // شاشة خضراء عند النجاح
        cout << "\nYour Balance is: " << 7800 << endl;
    }
    else {
        cout << "\nYour Card is Blocked! Call the bank for help." << endl;
    }

    return 0;
}