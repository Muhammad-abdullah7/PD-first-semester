#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double volume(double l,double w, double h,string unit);
int main(){
    double res,len,wid,hei;
    string unit1;
    cout<<"Enter the length in meters:";
    cin>>len;
    cout<<"Enter the width in meters:";
    cin>>wid;
    cout<<"Enter the height in meters:";
    cin>>hei;
    cout<<"Enter the unit in which you want to get volume:";
    cin>>unit1;
    res=volume(len,wid,hei,unit1);
    cout<<fixed<<setprecision(3);
    cout<<"The volume of the pyramid in the given unit is:"<<res<<" cubic  "<<unit1<<endl;
}
double volume(double l,double w, double h,string unit){
    double vol;
    vol=(1.0/3.0)*(l*w*h);
    if(unit=="millimeters"){
        return vol*1000000000;
    }if(unit=="centimeters"){
        return vol*1000000;
    }if(unit=="kilometers"){
        return vol*0.000001;
    }
}