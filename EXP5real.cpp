#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Using if, else if, and else statements
    if (num < 0) {
        cout << "The number is negative." << endl;
    } else if (num == 0) {
        cout << "The number is zero." << endl;
    } else if (num > 0 && num <= 10) {
        cout << "The number is between 1 and 10." << endl;
    } else {
        cout << "The number is greater than 10." << endl;
    }

    // Using switch statement
    switch (num) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        case 3:
            cout << "You entered three." << endl;
            break;
        case 4:
            cout << "You entered four." << endl;
            break;
        case 5:
            cout << "You entered five." << endl;
            break;
        default:
            cout << "You entered a number outside the range of 1-5." << endl;
            break;
    }

    return 0;
}
