#include <iostream>
using namespace std;

int main() {
    int num, digit_1, digit_2, digit_3, digit_4, sum;
    cout << "Enter a 4-digit number: ";
    cin >> num;
    digit_1 = num % 10;          
    num = num / 10;             
    digit_2 = num % 10;        
    num = num / 10;            
    digit_3 = num % 10;          
    num = num / 10;            
    digit_4 = num % 10;          
    sum = digit_1 + digit_2 + digit_3 + digit_4;
    cout << "The sum of the digits is: " << sum << endl;

    return 0;

}