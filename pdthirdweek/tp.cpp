#include <iostream>
using namespace std;

void tpchecker(int people, int tp);

int main() {
    int people, tp;
    cout << "Enter the number of people in the household: ";
    cin >> people;
    cout << "Enter the number of tp rolls: ";
    cin >> tp;
    tpchecker(people, tp);
    return 0;
}

void tpchecker(int people, int tp) {
    const int sheetsperroll = 500; 
    const int per_person = 57; 
    const int days_quar = 14;
    int totalsheets = tp * sheetsperroll;
    int totalsheetsreq = people * per_person * days_quar;
    int dayslasting = totalsheets / (people * per_person);
    if (totalsheets < totalsheetsreq) {
        cout << "Your tp will only last " << dayslasting << " days, buy more!" << endl;
    }
    if (totalsheets >= totalsheetsreq) {
        cout << "Your tp will last " << dayslasting << " days, no need to panic!" << endl;
    }
}
