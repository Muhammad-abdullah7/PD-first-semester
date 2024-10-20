#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int car_cou;
    cin>>car_cou;
    double tot_tons=0;
    double tot_cost=0;
    double mini_tons=0;
    double tru_tons=0;
    double train_tons=0;
    for (int i=0;i<car_cou;i++) {
        int tons;
        cin>>tons;
        tot_tons+=tons;
        if (tons <= 3) {
            mini_tons+=tons; 
            tot_cost+=tons*200; 
        } else if (tons <= 11) {
            tru_tons+=tons;
            tot_cost+=tons*175;
        } else {
            train_tons+=tons;
            tot_cost+=tons*120;
        }
    }
    double ave_pri_per_ton=tot_cost/tot_tons;
    double minibusper=(mini_tons/tot_tons)*100;
    double truckper=(tru_tons/tot_tons)*100;
    double trainper=(train_tons/tot_tons)*100;
    cout<<fixed<<setprecision(2);
    cout<<ave_pri_per_ton<<endl;
    cout<<minibusper<<"%"<<endl;
    cout<<truckper<<"%"<<endl;
    cout<< trainper<<"%"<<endl;
    return 0;
}
