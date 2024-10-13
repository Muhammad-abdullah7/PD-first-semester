#include <iostream>
using namespace std;
void bill(char ch, double min); 
int main() {
    char ch;
    double min;
    cout << "Enter the total number of minutes: ";
    cin >> min;
    cout << "Enter your type of subscription (R for regular, P for premium): ";
    cin >> ch;
    bill(ch, min);
    return 0;
}

void bill(char ch, double min) {
    const double for_reg = 10.0;
    const double for_regcost = 0.20;
    const double for_pre = 25.0;
    const double for_pred = 75;
    const double for_preD = 0.10;
    const double for_pren = 100.0;
    const double for_preN = 0.05;

    double tot_min;
    char time1;
    if (ch =='R'|| ch=='r') {
        if (min<=50) {
            cout<<"Your subscription is regular."<<endl;
            cout << "Your total bill is: " <<for_reg<< " dollars." << endl;
        } else {
            tot_min = min - 50;
            double total_bill = (tot_min * for_regcost) + for_reg;
             cout<<"Your subscription is regular."<<endl;
            cout << "Your total bill is: " << total_bill << " dollars." << endl;
        }
    }
    else if (ch == 'P' || ch == 'p') {
        cout << "Enter the time of the call (D for day, N for night): ";
        cin >> time1;
        if (time1 == 'D' || time1 == 'd') {
            if (min <= for_pred) {
                 cout<<"Your subscription is premium."<<endl;
                cout << "Your total bill is: " << for_pre << " dollars." << endl;
            } else {
                tot_min = min - for_pred;
                double total_bill = (tot_min * for_preD) + for_pre;
                 cout<<"Your subscription is premium."<<endl;
                cout << "Your total bill is: " << total_bill << " dollars." << endl;
            }
        }
        else if (time1 == 'N' || time1 == 'n') {
            if (min <= for_pren) {
                 cout<<"Your subscription is premium."<<endl;
                cout << "Your total bill is: " << for_pre << " dollars." << endl;
            } else {
                tot_min = min - for_pren;
                double total_bill = (tot_min * for_preN) + for_pre;
                 cout<<"Your subscription is premium."<<endl;
                cout << "Your total bill is: " << total_bill << " dollars." << endl;
            }
        } else {
            cout << "Invalid time of call input." << endl;
        }
    } else {
        cout << "Invalid subscription type!" << endl;
    }
}
