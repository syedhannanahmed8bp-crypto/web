#include<iostream>
using namespace std;

class student{
    string name;
    double marks1;
    double marks2;
    double marks3;

    public:
    student(string n,double m1,double m2,double m3){
        name=n;
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }
    friend class average;


};
class average{
    public:
    double calculateAverage(student s){
        return (s.marks1+s.marks2+s.marks3)/3;
    } 
    void display(student s1){
        cout<<"Name: "<<s1.name<<endl;
        cout<<"Average: "<<calculateAverage(s1)<<endl;
        if(calculateAverage(s1)>50){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL";
        }
    }  
};
int main (){
    student syed("syed",98,97,96);
    average a;
    a.display(syed);
    return 0;
}