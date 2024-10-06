#include <iostream>
#include <string>
#include <cmath>
string projecttimecalculation( double  hoursneeded,double tot_days,double workers);
using namespace std;
int main(){
    double hours,total_days,tot_workers;
    cout<<"Enter the total number of hours  needed:";
    cin>>hours;
    cout<<"Enter the total number of days:";
    cin>>total_days;
    cout<<"Enter the number of lsbours:";
    cin>>tot_workers;
    string result=projecttimecalculation(hours,total_days,tot_workers);
    cout<<result<<endl;
    return 0;
}
string projecttimecalculation( double  hoursneeded,double tot_days,double workers){
    double days=tot_days*(10.0/100.0);
    double rem_days=tot_days-days;
    double tot_time=floor(rem_days*workers*10);
    if(tot_time>hoursneeded){
        double rem_time=tot_time-hoursneeded;
        return "Yes!"+ to_string(floor(rem_time))+"  hours are left.";
    }if(tot_time<hoursneeded){
        double extra_time=hoursneeded-tot_time;
        return "Not enough time!"+to_string(floor(extra_time))+" hours needed.";
    }return " ";
}