#include <iostream>
using namespace std;
class Student {
protected:
    int roll_no;
    string name;
public:
    void getStudentData() {
        cout<<"Enter Roll Number: ";
        cin>>roll_no;
        cout<<"Enter Student Name: ";
        cin>>name;
    }
        void displayStudentData() {
        cout<<"\nRoll Number: "<<roll_no <<endl;
        cout<<"Student Name: "<<name<<endl;
    }
};

class Result : public Student {
private:
    int marks1, marks2, marks3;
    int total;
    float percentage;
  public:
    void getResult() {
        getStudentData();
       cout<<"Enter marks of Subject 1: ";
        cin>>marks1;

    cout<<"Enter marks of Subject 2: ";
    cin>>marks2;
     cout<<"Enter marks of Subject 3: ";
     cin>>marks3;
      total = marks1 + marks2 + marks3;
      percentage = total / 3.0;
    }

    void displayResult() {
        displayStudentData();

        cout<<"Subject 1 Marks: "<<marks1<<endl;
        cout<<"Subject 2 Marks: "<<marks2<<endl;
        cout<<"Subject 3 Marks: "<<marks3<<endl;
        cout<<"Total Marks: "<<total<<"/300"<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;
         if (percentage >= 40)
            cout<<"Result: PASS"<<endl;
        else
            cout<<"Result: FAIL"<<endl;
    }
};

int main(){
    Result student;
student.getResult();
cout << "\n----- STUDENT RESULT -----" << endl;
student.displayResult();

    return 0;
}