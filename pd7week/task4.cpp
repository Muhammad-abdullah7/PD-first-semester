#include <iostream>
using namespace std;
int trinum(int n) {
    return (n * (n + 1)) / 2;
}
int main() {
    int n;
    cout << "Enter the triangle number: ";
    cin >> n;
    cout << "The number of dots in triangle number " << n << " is: " << trinum(n) << endl;
    return 0;
}
