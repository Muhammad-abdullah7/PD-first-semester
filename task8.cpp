#include <iostream>
#include <string>
using namespace std;

int main() {
    string cols[100]; 
    int n, time = 0;
    cout << "Enter the number of colors: ";
    cin >> n;
    cout << "Enter the colors: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> cols[i];
    }
    for (int i = 0; i < n; i++) {
        time += 2; 
        if (i > 0 && cols[i] != cols[i - 1]) {
            time += 1;
        }
    }
    cout << "Total time: " << time << " seconds" << endl;
    return 0;
}
