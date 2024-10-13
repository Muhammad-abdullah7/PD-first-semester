#include <iostream>
using namespace std;
string ch_status(int e_h, int e_m, int st_h, int st_m) {
    int e_t = e_h * 60 + e_m;
    int arr_t = st_h * 60 + st_m;
    int difference = arr_t - e_t;

    if (difference>0) {
        cout << "Late" << endl;
        if (difference>= 60) {
            cout << difference/60 << ":";
            if (difference%60<10)
            cout<< "0";
            cout<<difference%60<<" hours after the start" << endl;
        }else{
            cout << difference << " minutes after the start" << endl;
        }
    } else if (difference >= -30) {
        cout << "On time" << endl;
        if (difference != 0) {
            cout << -difference << " minutes before the start" << endl;
        }
    } else {
        cout << "Early" << endl;
        difference = -difference;
        if (difference>= 60) {
            cout << difference/60 << ":";
            if (difference%60<10)
            cout<< "0";
            cout<< difference%60 << " hours before the start" << endl;
        } else {
            cout << difference << " minutes before the start" << endl;
        }
    }
    return "";
}
int main() {
    int ex_h, ex_m, stu_h, stu_m;
    cin >> ex_h >> ex_m >> stu_h >> stu_m;
    ch_status(ex_h, ex_m, stu_h, stu_m);
    return 0;
}

