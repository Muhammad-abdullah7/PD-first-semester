#include <iostream>
using namespace std;
int main() {
    string arr[4];
    bool identical=true;
    cout << "Enter 4 elements: ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    for (int i=1;i<4;i++) {
        if (arr[i]!=arr[0]) {
            identical = false;
            break;
        }
    }
    if (identical) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
