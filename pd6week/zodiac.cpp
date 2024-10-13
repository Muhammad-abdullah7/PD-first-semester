#include <iostream>
#include <string>
using namespace std;
string findzodiacsign(int day, string month);
int main() {
    int day;
    string month;
    cout << "Enter the day of the month: ";
    cin >> day;
    cout << "Enter the month to find the zodiac sign: ";
    cin >> month;
    string res = findzodiacsign(day, month);
    cout<<"Your zodiac sign is: "<<res<<endl;
    return 0;
}
string findzodiacsign(int day, string month) {
    if ((day >= 21 && month == "March") || (day <= 19 && month == "April")) {
        return "Aries";
    }
    else if ((day >= 20 && month == "April") || (day <= 20 && month == "May")) {
        return "Taurus";
    }
    else if ((day >= 21 && month == "May") || (day <= 20 && month == "June")) {
        return "Gemini";
    }
    else if ((day >= 21 && month == "June") || (day <= 22 && month == "July")) {
        return "Cancer";
    }
    else if ((day >= 23 && month == "July") || (day <= 22 && month == "August")) {
        return "Leo";
    }
    else if ((day >= 23 && month == "August") || (day <= 22 && month == "September")) {
        return "Virgo";
    }
    else if ((day >= 23 && month == "September") || (day <= 22 && month == "October")) {
        return "Libra";
    }
    else if ((day >= 23 && month == "October") || (day <= 21 && month == "November")) {
        return "Scorpio";
    }
    else if ((day >= 22 && month == "November") || (day <= 21 && month == "December")) {
        return "Sagittarius";
    }
    else if ((day >= 22 && month == "December") || (day <= 19 && month == "January")) {
        return "Capricorn";
    }
    else if((day>=20&&month=="January")||(day <= 18 && month == "February")) {
        return "Aquarius";
    }
    else if ((day>=19&&month=="February")||(day<=20&&month=="March")) {
        return "Pisces";
    }
    return " ";
}
