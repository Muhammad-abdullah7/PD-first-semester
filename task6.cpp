#include <iostream>
using namespace std;
int main() {
    int arr[3], n, i, j;
    cout << "Enter the array: ";
    for (i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;
    for (j=0;j<n;j++) {
        for (i = 0; i < 3; i++) {
            if (arr[i]%2==0) {
                arr[i]-=2;
            } else {
                arr[i]+=2;
            }
        }
    }
    cout << "[";
    for (i = 0; i < 3; i++) {
        cout << arr[i];
        if (i != 2) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}
