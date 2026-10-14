#include<iostream>
using namespace std;
class vehicle{
    protected:
    string vehiclenumber;
    string ownername;
    int hours;
    protected 
    vehicle(string v, string o, int h){
        vehiclenumber v;
        ownername o;
        hours h;
    }
    void showedetail(){
        cout<<"mall parking billing system"<<endl;
        cout<<"vehiclenumber:"<<vehiclenumber<<endl;
        cout<<"ownername:"<<ownername<<endl;
        cout<<"hours:"<<hours<<endl;
    }
   return 0;
}

