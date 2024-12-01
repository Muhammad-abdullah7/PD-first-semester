 #include <iostream>
 #include <string>
 #include <conio.h>
using namespace std;
void printheader();
void option1();
void option2();
void option3();
void option4();
void option5();
void option8();
int printmenu();
int option;
    double price_1,price_2,price_3,price_4;
    double quantity1,quantity2,quantity3,quantity4;
    double tax_1,tax_2,tax_3,tax_4;
    string name_1,name_2,name_3,name_4;
    double total1,total2,total3,total4;
    double tot_price;
  const double store_tax=5.0;
  double net_ammount,tax_mmount;
int main(){
    printheader();
    while(true){
        printmenu();
        option=printmenu();
        if(option!=1||option!=2||option!=3||option!=4||option!=5||option!=6||option!=7||option!=8||option!=9){
            cout<<"This is not a valid option! Please enter a valid one."<<endl;
        }
        if(option==1){
            option1();
        }
         else if(option==2){
            option2();
        }
        else  if(option==3){
             option3();
        }
        else  if(option==4){
              option4();
        }
      else   if(option==5){
            option5();
        }
       else  if(option==6){
            cout<<"The store's tax is :"<<store_tax<<endl;
        }
       else  if(option==7){
             tax_mmount=tot_price*(store_tax/100.0);
            net_ammount=tot_price+tax_mmount;
            cout<<"The total ammount of money you have to pay after the fix store's tax is: "<<net_ammount<<endl;
        }
       else  if(option==8){
            {
            option8();
}
        }
       else  if(option==9){
            return 0;
        }
        cout<<"Press any key to continue:";
        getch();
        system("cls");
    }
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
int printmenu()
{
int opt;
cout << "Select one of the following options number" << endl;
cout << "1. Enter option 1 for product no. 1" << endl;
cout << "2. Enter option 2 for product no. 2" << endl;
cout << "3. Enter option 3 for product no. 3" << endl;
cout << "4. Enter option 3 for product no. 4" << endl;
cout<<"  5.Calculate total price of all the products."<<endl;
cout<<"  6.Total tax on the price."<<endl;
cout<<"  7.Total price after the tax calculation."<<endl;
cout<<"  8.View the whole products data."<<endl;
cout<<"  9.Exit the program."<<endl;
cout << "Select your option";
cin >> opt;
return opt;
}
void option1(){
    cout<<"Enter the name of the product:";
            cin>>name_1;
            cout<<"Enter the price of the product:";
            cin>>price_1;
            cout<<"Enter the quantity of the product:";
            cin>>quantity1;
            cout<<"Enter the tax rate on this product:";
            cin>>tax_1;
}
void option2(){
            cout<<"Enter the name of the product:";
            cin>>name_2;
            cout<<"Enter the price of the product:";
            cin>>price_2;
            cout<<"Enter the quantity of the product:";
            cin>>quantity2;
            cout<<"Enter the tax rate on this product:";
            cin>>tax_2;
}
void option3(){
            cout<<"Enter the name of the product:";
            cin>>name_3;
            cout<<"Enter the price of the product:";
            cin>>price_3;
            cout<<"Enter the quantity of the product:";
            cin>>quantity3;
            cout<<"Enter the tax rate on this product:";
            cin>>tax_3;
            
}
void option4(){
            cout<<"Enter the name of the product:";
            cin>>name_4;
            cout<<"Enter the price of the product:";
            cin>>price_4;
            cout<<"Enter the quantity of the product:";
            cin>>quantity4;
            cout<<"Enter the tax rate on this product:";
            cin>>tax_4;
}
void option5(){
    total1=price_1*quantity1;
            total1=total1+(total1*(tax_1/100.0));
            cout<<"Total price of the product 1 after tax is: "<<total1<<endl;
             total2=price_2*quantity2;
            total2=total2+(total1*(tax_2/100.0));
            cout<<"Total price of the product 1 after tax is: "<<total2<<endl;
             total3=price_3*quantity3;
            total3=total3+(total3*(tax_1/100.0));
            cout<<"Total price of the product 1 after tax is: "<<total3<<endl;
             total4=price_4*quantity4;
            total4=total4+(total4*(tax_4/100.0));
            cout<<"Total price of the product 1 after tax is: "<<total4<<endl;
            tot_price=total1+total2+total3+total4;
            cout<<"The total ammount you have to pay is (except stroe's tax ):"<<tot_price<<endl;
}
void option8(){
    cout << "All Products Data" << endl;
cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Tax" << "\t" << "Total"<<endl;
cout << name_1 << "\t" << price_1 << "\t" << quantity1 << "\t\t" << tax_1 << "\t" << total1<<endl;
cout << name_2 << "\t" << price_2 << "\t" << quantity2 << "\t\t" << tax_2 << "\t" << total2<<endl;
cout << name_3 << "\t" << price_3 << "\t" << quantity3 << "\t\t" << tax_3 << "\t" << total3<<endl;
cout << name_4 << "\t" << price_4 << "\t" << quantity4 << "\t\t" << tax_4 << "\t" << total4<<endl;
}