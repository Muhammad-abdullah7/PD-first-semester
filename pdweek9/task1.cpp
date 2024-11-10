#include <iostream>
#include <string>
using namespace std;
int main() {
    string fru[] = {"peach", "apple", "guava", "watermelon"};
    int pri[] = {60, 70, 40, 30};
    string selectedfru;
    int quantity;
    bool found = false;
    cout << "Enter the name of the fruit: ";
    cin >> selectedfru;
    cout << "Enter the quantity (in kgs): ";
    cin >> quantity;
    for (int i = 0; i < 4; i++) {
        if (fru[i] == selectedfru) {
            found = true;
            int totpri = pri[i]*quantity;
            cout << "Total bill for " << quantity << " kg of " << selectedfru << " is: " << totpri << " rupees." << endl;
            break;
        }
    }
    if (!found) {
        cout << "Sorry, the fruit " << selectedfru << " is not available." << endl;
    }
    return 0;
}
