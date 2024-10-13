#include <iostream>
using namespace std;
void price(string day, string fr_name, int quan);
int main() {
    string fr_name, day;
    int quan;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the fruit name: ";
    cin >> fr_name;
    cout << "Enter the quantity you bought: ";
    cin >> quan;
    price(day, fr_name, quan);
    return 0;
}
void price(string day, string fr_name, int quan) {
    double total ;
    if (day == "Sunday" || day == "Saturday") {
        if (fr_name == "banana") {
            total = quan * 2.70;
        } else if (fr_name == "apple") {
            total = quan * 1.25;
        } else if (fr_name == "orange") {
            total = quan * 0.90;
        } else if (fr_name == "grapefruit") {
            total = quan * 1.60;
        } else if (fr_name == "kiwi") {
            total = quan * 3.00;
        } else if (fr_name == "pineapple") {
            total = quan * 5.60;
        } else if (fr_name == "grapes") {
            total = quan * 4.20;
        }
    }
    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        if (fr_name == "banana") {
            total = quan * 2.50;
        } else if (fr_name == "apple") {
            total = quan * 1.20;
        } else if (fr_name == "orange") {
            total = quan * 0.85;
        } else if (fr_name == "grapefruit") {
            total = quan * 1.45;
        } else if (fr_name == "kiwi") {
            total = quan * 2.70;
        } else if (fr_name == "pineapple") {
            total = quan * 5.50;
        } else if (fr_name == "grapes") {
            total = quan * 3.85;
        }
    }else {
        cout<<"Invalid day or fruit entered. Please enter a valid one."<<endl;
    }
}