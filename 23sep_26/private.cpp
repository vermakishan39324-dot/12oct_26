#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    public:
void display(int n){
    marks=n;
}
};
int main(){
    student obj;
    obj.display(50);
    return 0;
}
