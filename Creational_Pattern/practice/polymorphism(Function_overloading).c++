/*This is the Example of Polymorphism Function Overloading*/
#include<iostream>
using namespace std;


class employee
{
    public:

    void salary(int a){cout<<"Salary of employee is: "<<a<<endl;}

    void salary(float a){cout<<"Salary of employee is: "<<a<<endl;}
    
    void salary(double a){cout<<"Salary of employee is: "<<a<<endl;}

};
 

int main()
{
    employee e1;
    e1.salary(10);
    e1.salary(10.5f);
    e1.salary(10.5);


}

