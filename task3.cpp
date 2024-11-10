
#include <iostream>
#include <string>
using namespace std;
string str[1]; 
int length;     
bool checkevenlength() {
    if (length%2==0)
        return true;
    else
        return false;
}
int main() {
    cout << "Enter a String: ";
    cin >> str[0]; 
    length = str[0].length();  
    
    if (checkevenlength()) {
        cout << "true" << endl;  
    } else {
        cout << "false" << endl; 
    }

    return 0;
}
