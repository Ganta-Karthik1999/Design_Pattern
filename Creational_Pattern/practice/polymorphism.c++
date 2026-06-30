#include<iostream>
using namespace std;


class Complex{

public:
    int real;
    int imag; 
    /*
    Here we will use the Constructor initializer List how it works 
    
    instead of using the Complex(int r int i ){
        real = r
        imag = i 
    
        }

    we can do 

        instead of using the >>>>> Complex(int r int i ):real(r),imag(i){}

        */
    Complex(int r ,int i):real(r),imag(i){}

    Complex operator+(Complex &obj){
        return Complex(real + obj.real, imag + obj.imag);
    }

};


int main()
{
    Complex c2(2,1),c1(3,2);

    Complex c3=c2+c1;
    
    cout<< c3.real<<"+"<<c3.imag<<"i"<<endl;
 
    return 0;
}