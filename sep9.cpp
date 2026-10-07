#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inches;
    friend Distance calculator(Distance d1,Distance d2);
    public: 
    void setNumber(int f,int i){
        feet=f;
        inches=i;
    }
    void print(){
        cout<<feet<<" feet "<<inches<<" Inches is the distance"<<endl;
    }

};

Distance calculator(Distance d1,Distance d2){
Distance d3;
d3.setNumber(d1.feet+d2.feet,d1.inches+d2.inches);
return d3;

}
int main(){
    Distance s1;
    s1.setNumber(6,4);
    s1.print();
    Distance s2,final;
    s2.setNumber(5,11);
    s2.print();
    final=calculator(s1,s2);
    final.print();

}