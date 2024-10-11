#include <iostream>
using namespace std;
void aggregate(double matmark_1,double intermark_1,double ecat_1,double totagg_1,double matmark_2,double intermark_2,double ecat_2,double totagg_2,string name_1,string name_2);
void print();
void compare();

int main(){
double matmar_1, intermar_1, eca_1,totag_1, matmar_2, intermar_2, eca_2, totag_2;
string nam_1, nam_2;
    print();
    aggregate(matmar_1, intermar_1, eca_1, totag_1, matmar_2, intermar_2, eca_2, totag_2, nam_1, nam_2);
    compare();
} 
void print(){
    cout<<"______________________________________________________"<<endl;
    cout<<"          UNIVERSITY OF ENGINEERING AND TECHNOLOGY     "<<endl;
    cout<<"                    AGGEAGATE CALCULATOR"<<endl;
    cout<<"______________________________________________________"<<endl;
}
void aggregate(double matmark_1,double intermark_1,double ecat_1,double totagg_1,double matmark_2,double intermark_2,double ecat_2,double totagg_2,string name_1,string name_2){ 

cout<<"Enter the name of the student:"<<endl;
cin>>name_1;
    cout<<"Enter the marks of Matric:"<<endl;
    cin>>matmark_1;
    cout<<"Enter the marks of Inter:"<<endl;
    cin>>intermark_1;
    cout<<"Enter the marks of Ecat:"<<endl;
    cin>>ecat_1;
    totagg_1=(((matmark_1/1100)*10)+((intermark_1/505)*40)+((ecat_1/400)*50));
    cout<<"Total aggreagte of yours for UET is :"<<totagg_1<<endl;
    cout<<"Enter the name of the student:"<<endl;
cin>>name_2;
      cout<<"Enter the marks of Matric:"<<endl;
    cin>>matmark_2;
    cout<<"Enter the marks of Inter:"<<endl;
    cin>>intermark_2;
    cout<<"Enter the marks of Ecat:"<<endl;
    cin>>ecat_2;
    totagg_2=(((matmark_2/1100)*10)+((intermark_2/505)*40)+((ecat_2/400)*50));
    cout<<"Total aggreagte of yours for UET is :"<<totagg_2<<endl;
    

}void compare(){
    int num;
    cout<<"Enter the no of students for the calculation of aggregate:"<<endl;
    cin>>num;
    while(num<2){
        aggregate( matmark_1, intermark_1, ecat_1, totagg_1, matmark_2, intermark_2, ecat_2, totagg_2, name_1, name_2)
        if(totagg_1>totagg_2){
            cout<<"Roll no. 1 is assigned to "<<name_1<<endl;
        }if(totagg_1>totagg_2){
            cout<<"Roll no. 1 is assigned to "<<name_1<<endl;
        }
    }
}