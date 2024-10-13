#include <iostream>
using namespace std;
double cal_average(double eng, double maths, double che, double soc_sci, double bio); 
string grades(double result); 
int main() {
    double eng, maths, che, soc_sci, bio;
    string name;
    double result;
    string grades1;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the marks of English: ";
    cin >> eng;
    cout << "Enter the marks of Maths: ";
    cin >> maths;
    cout << "Enter the marks of Chemistry: ";
    cin >> che;
    cout << "Enter the marks of Social Sciences: ";
    cin >> soc_sci;
    cout << "Enter the marks of Biology: ";
    cin >> bio;
    result = cal_average(eng, maths, che, soc_sci, bio);
    cout << "Percentage: " << result << "%" << endl;
    grades1 = grades(result);
    cout << "Grade: " << grades1 << endl;
    return 0;
}
double cal_average(double eng, double maths, double che, double soc_sci, double bio) {
    const double tot_marks = 500.0;
    double tot = eng + maths + che + soc_sci + bio;
    return (tot / tot_marks) * 100;
}
string grades(double result) {
    if (result >= 90 && result <= 100) {
        return "A+";
    }
    if (result >= 80 && result < 90) {
        return "A";
    }
    if (result >= 70 && result < 80) {
        return "B+";
    }
    if (result >= 60 && result < 70) {
        return "B";
    }
    if (result >= 50 && result < 60) {
        return "C";
    }
    if (result >= 40 && result < 50) {
        return "D";
    }
    if (result < 40) {
        return "F";
    }
    return " ";
}
