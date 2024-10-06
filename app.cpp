#include <iostream>
using namespace std;

void printheader();
void option();
double val_in(int option_1, double tot_pri, double &tax_rate);

int main() {
    printheader();
    double tax_rate = 0.0; 
    double option1, price;
    cout << "Enter the price of the good: ";
    cin >> price;
    while (true) {
        option(); 
        cout << "Enter the option to select the choice: ";
        cin >> option1;
        double result = val_in(option1, price, tax_rate);
        if (option1 == 3) {
            break; 
        }
        if (option1 == 1) {
            cout << "The tax rate is: " << result << "%" << endl;
        } else if (option1 == 2) {
            cout << "The profit gained on this product is: " << result << endl;
        }
    }
    
    cout << "Press Enter to exit...";
    cin.ignore(); 
    cin.get(); 
    return 0;
}

void printheader() {
    cout << " ------------------------------------------------------------------------------- " << endl;
    cout << "   ######     #####   ####      #####   ##    #    ######    ######              " << endl;
    cout << "   #     #    #   #    #        #   #   # #   #   #          #                   " << endl;
    cout << "   ######     #####    #        #####   #  #  #   #          #####               " << endl;
    cout << "   #     #    #   #    #        #   #   #   # #   #          #                   " << endl;
    cout << "   ######     #   #    ######   #   #   #    ##    ######    ######              " << endl;
    cout << "                          #     #   #######   #####   ########     ####          " << endl;
    cout << "                          #     #      #     #     #     #        #    #         " << endl;
    cout << "                          #     #      #     #           #        #    #         " << endl;
    cout << "                          #     #      #      #####      #        ######         " << endl;
    cout << "                           #   #       #           #     #        #    #         " << endl;
    cout << "                             #      #######        #     #        #    #         " << endl;
    cout << "                          ########################                               " << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
}

void option() {
    cout << "Enter option 1 for data entry:" << endl;
    cout << "Enter option 2 for calculation:" << endl;
    cout << "Enter option 3 for exit:" << endl;
}
double val_in(int option_1, double tot_pri, double &tax_rate) {
    if (option_1 == 1) {
        cout << "Enter the tax rate: ";
        cin >> tax_rate; 
        return tax_rate; 
    }
    if (option_1 == 2) {
        double tax_amm = tot_pri * (tax_rate / 100.0);
        double profit = tot_pri - tax_amm; 
        return profit; 
    }
    if (option_1 == 3) {
        exit(0);
    }
    return 0; 
}
