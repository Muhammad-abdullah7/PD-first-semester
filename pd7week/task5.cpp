#include <iostream>
using namespace std;
bool isprime(int num) {
    if (num<=1) {
        return false; 
    }
    for (int i=2;i*i<=num; i++) {
        if (num%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout << "isPrime(num) ➞ " << isprime(num)<<endl;
    return 0;
}
