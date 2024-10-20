#include <iostream>
using namespace std;
bool isprime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
long int primorial(int n) {
    int count=0; 
    int num=2;   
    long int product=1;
    while (count<n) {
        if (isprime(num)) {
            product*=num; 
            count++; 
        }
        num++; 
    }
    return product;
}
int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout << "Primorial of the given number is: " << primorial(num) << endl;
    return 0;
}

