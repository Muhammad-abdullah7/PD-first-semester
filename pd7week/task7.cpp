#include <iostream>
using namespace std;
int main() {
    int period;
    cout<<"Enter the period:";
    cin >> period;
    int doctors=7; 
    int tre_pat=0; 
    int untre_pat=0;
    for (int day=1;day<=period;day++) {
        int patients;
        cout<<"Enter the number of patients:";
        cin >> patients;  
        if (day%3==0 && untre_pat>tre_pat) {
            doctors++;
        }
        if (patients <= doctors) {
            tre_pat+=patients;
        } else {
            tre_pat+=doctors;
            untre_pat+=(patients-doctors);
        }
    }
    cout << "Treated patients: " << tre_pat << "." << endl;
    cout << "Untreated patients: " << untre_pat << "." << endl;
    return 0;
}
