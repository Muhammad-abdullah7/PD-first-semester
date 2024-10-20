#include <iostream>
using namespace std;
void up(int);
void lo(int);
 int main() {
    system("cls");
    int rows;
    cout << "Enter the number of Rows: ";
    cin >> rows;
    up(rows);
    lo(rows);
}
void up(int x)
{
    int rows = x;
    for (int i=1; i<=rows ; i++)
    {
        for (int j=rows-i; j>=0; j--)
        {
            cout << " ";
        }
        for (int k=1; k<=i; k++)
        {
            cout << "*";
        }
    cout << endl;
    }
}
void lo(int x)
{
    int rows = x;
    for (int i=0; i<rows ; i++)
    {
        for (int j=-1; j<=i; j++ )
        {
            cout << " ";
        }
        for (int k=rows-1; k>i; k--)
        {
            cout << "*";
        }
    cout << endl;
    }

}
