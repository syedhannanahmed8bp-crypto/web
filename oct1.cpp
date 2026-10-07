#include<iostream>
using namespace std;

// class Time{
//     int hour;
//     int minute;
//     int second;
//     public:
//     Time(int h,int m,int s){
//         m=m+(s/60);
//         s=s%60;
//         h=h+(m/60);
//         m=m%60;
//         hour=h;
//         minute=m;
//         second=s;
//         cout<<"Time in correct form"<<endl;
//         cout<<h<<"hours "<<m<<"minutes "<<s<<"seconds "<<endl;
//     }
// };
class Result{
    int rollNo;
    string name;
    float marks;
    char grade;
    public:
    Result(int r,string n,float m){
        if(m>=90 && m<=100){
            grade='A';
        }else if(m>=75 && m<90){
            grade='B';
        }else if(m>=50 && m<=74){
            grade='C';
        }else if(m<50 && m>=0){
            grade='F';
        }else{

            cout<<"Invalid marks(between 1-100)"<<endl;
            grade='X';
        }
        rollNo=r;
        name=n;
        marks=m;
    }
    void display(){
        cout<<"Student Result"<<endl;
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Grade : "<<grade<<endl;
    }
};

int main(){
    // Time t1(4,5433,150);
    Result s1(1,"Ayaan",118);
    s1.display();

    return 0;
}