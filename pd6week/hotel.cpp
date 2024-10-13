#include <iostream>
#include <string>
using namespace std;
void calhotelpri(string month, int days);
int main() {
    string month;
    int days;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> days;
    calhotelpri(month, days);
    return 0;
}
void calhotelpri(string month, int days) {
    double stdpri = 0.0, apapri = 0.0;
    if (month=="May"||month=="October") {
        stdpri = 50.0;
        apapri = 65.0;
        if (days>14) {
            stdpri =stdpri* 0.70;  
        } else if (days>7) {
            stdpri =stdpri* 0.95;  
        }
    } else if (month == "June" || month == "September") {
        stdpri = 75.20;
        apapri = 68.70;
        if (days > 14) {
            stdpri =stdpri*0.80;  
        }
    } else if (month == "July" || month == "August") {
        stdpri= 76.0;
        apapri = 77.0;
    }
    if (days>14) {
        apapri=  apapri* 0.90;  
    }
    double totStdpri = stdpri*days;
    double totapapri = apapri*days;
    cout << "Apartment: " <<  totapapri << "$." << endl;
    cout << "Studio: " << totStdpri<< "$." << endl;
}
