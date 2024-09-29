#include <iostream>
using namespace std;
void longest(double hours,double min);
int main(){
    double hours_1,minu;
    cout<<"Enter the hours:";
    cin>>hours_1;
     cout<<"Enter the minutes:";
    cin>>minu;
    longest(hours_1,minu);
    
}
void longest(double hours,double min){
    double hou_in_min=hours*60;
    if(hou_in_min>min){
        cout<<hours<<endl;
    }if(hou_in_min<min){
        cout<<min<<endl;
    }
}