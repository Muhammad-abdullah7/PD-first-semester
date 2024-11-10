#include <iostream>
using namespace std;
int main() {
    int arr[5];
    bool found = false;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] == 7) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Boom!" << endl;
    } else {
        cout << "there is no 7 in the array" << endl;
    }
    return 0;
}
