#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,mul,add,sub,tot_1,tot_2;
    cout<<"Enter the fifteen numbers: ";
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10>>num11>>num12>>num13>>num14>>num15;
    add=num1+num2+num3+num4+num5;
    mul=num6*num7*num8*num9*num10;
    sub=num11-num12-num13-num14-num15;
    tot_1=add+mul;
    tot_2=tot_1-sub;
    cout<<"The final result after all the arithmetic operations is "<<tot_2<<endl;
    return 0;
    
}