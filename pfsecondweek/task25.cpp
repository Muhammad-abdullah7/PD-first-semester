#include <iostream>
using namespace std;
int main(){
    int age,no_of_houses,average_time;
    cout<<"Enter the person's age: ";
    cin>>age;
    cout<<"Enter the numbers of houses he moved from: ";
    cin>>no_of_houses;
    average_time=age/(no_of_houses+1);
    cout<<"Average span of  time he ha spend in a single house is "<<average_time<<" years."<<endl;
   
    
    return 0;
    
}