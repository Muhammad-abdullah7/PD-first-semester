#include <iostream>
using namespace std;
int amplify(int i) {
    if (i%4==0) {
        return i*10;
    } else {
        return i;
    }
}
void amp(int n) {
    for (int i=1; i<=n; i++) {
        cout<<amplify(i);
        if (i<n) {
            cout << ", ";
        }
    }
    cout << endl;
}
int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    amp(num);
    return 0;
}
