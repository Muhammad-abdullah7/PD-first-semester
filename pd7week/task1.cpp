#include <iostream>
using namespace std;
 int main() {
    int rows;
    cout << "Enter the Number of rows: ";
    cin >> rows;
    for (int i =15; i <= rows; i-- )
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
    cout << endl;
    }

}
