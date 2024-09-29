#include <iostream>
using namespace std;
void print ();
void aggregate (string name,double mat_mark,double inter_mark,double ecat_mark);
void compare(string std_1,double ecatmark_1,string std_2,double ecatmark_2);
int main(){
    double mat_1,inter_1,ecat_1;
    string name_1;
    print ();
    aggregate(name_1,mat_1,inter_1,ecat_1);
    double ecatmark1,ecatmark2;
    string std1,std2;
    compare(std1,ecatmark1,std2,ecatmark2);
}void print (){
cout<<"-----------------------------------------------------------"<<endl;
cout<<"                   #   #    ######   #######       "<<endl;
cout<<"                   #   #    #           #          "<<endl;
cout<<"                   #   #    #####       #          "<<endl;
cout<<"                   #   #    #           #          "<<endl;
cout<<"                   #####    #####       #          "<<endl;
cout<<"-----------------------------------------------------------"<<endl;
cout<<"             WELCOME TO THE AGGREGATE CALCUATOR"<<endl;
cout<<"             Enter your marks to find aggregate"<<endl;
}
void aggregate (string name,double mat_mark,double inter_mark,double ecat_mark){
    double aggregate_1;
    cout<<"Enter the your name:";
    cin>>name;
    cout<<"Enter you marks in matric:";
    cin>>mat_mark;
    cout<<"Enter your marks in F.Sc:";
    cin>>inter_mark;
    cout<<"Enter your obtained marks in ECAT:";
    cin>>ecat_mark;
    const double matmark=1100,intermark=550,ecatmark=400;
    aggregate_1=((mat_mark/matmark)*30)+((inter_mark/intermark)*30)+((ecat_mark/ecatmark)*50);
    cout<<"Your aggregate is:"<< aggregate_1<<" percent(%)."<<endl;
}void compare(string std_1,double ecatmark_1,string std_2,double ecatmark_2){
    cout<<"Enter your name:";
    cin>>std_1;
    cout<<"Enter your ECAT marks:";
    cin>>ecatmark_1;
     cout<<"Enter your name:";
    cin>>std_2;
    cout<<"Enter your ECAT marks:";
    cin>>ecatmark_2;
    
    if(ecatmark_1>ecatmark_2){
        cout<<"Roll No 01 is assigned to "<<std_1<<" with ECAT marks of "<< ecatmark_1<<endl;
    }if(ecatmark_2>ecatmark_1){
        cout<<"Roll No 01 is assigned to "<<std_2<<" with ECAT marks of "<< ecatmark_2<<endl;
}
   }