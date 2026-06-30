#include <iostream>
using namespace std;


class employ{

public:
    int id;
    string name;
    string company;
    int age;
    // This is the into function

    employ(int id = 0, string name = " ", string company = " ", int age = 0){
        this->id = id;
        this->name = name;
        this->company = company;
        this->age = age;
    }

    void into(){
        cout << "ID: " <<this->id << endl;
        cout << "Name: " <<this->name << endl;
        cout << "Company: " << this->company << endl;
        cout << "Age: " << this->age<< endl;
    }

    void Ask_Promotion(){
        if(this->age > 30){ 
            cout << this->name << " is promoted" << endl; 
        }
        else{ 
            cout << this->name << " is not promoted" << endl; 
        }

    }


};


// Creating this class for learning the inheritance concept in c++ programming Language

class Developer : public employ{
public:
    string favLan;

    Developer(string name,string company,int age,string favLang):employ(0, name, company, age)
    {
        this->name = name;
        this->company = company;
        this->age = age;
        this->favLan = favLang;
    }

    void FixBug(){
        cout << this->name << " fixed bug using " << this->favLan << endl;
    }

};


int main(){

 
    employ e1= employ(101, "Karthik", "J&J", 25);
    e1.into();

    Developer d1 = Developer("Karthik", "J&J", 25, "C++");
    d1.FixBug();

    return 0;
}