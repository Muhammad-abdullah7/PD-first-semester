#include <iostream>
#include <string>
using namespace std;
string getdancemove(int digit, int index) {
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    return moves[(digit + index) % 10];
}
int main() {
    string pin;
    string result = "";
    cout << "Enter the PIN: ";
    cin >> pin;
    if (pin.length() != 4 || pin.find_first_not_of("0123456789") != string::npos) {
        cout << "Invalid input." << endl;
        return 0;
    }
    for (int i = 0; i < 4; i++) {
        int digit = pin[i] - '0';
        result += getdancemove(digit, i);
        if (i != 3) result += ", ";
    }
    cout << result << endl;
    return 0;
}
