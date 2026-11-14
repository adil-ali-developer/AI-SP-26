#include<iostream>
using namespace std;

class Adil{
    public:
    string name;
    int age;
    int rollno;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }

};

int main(){
    Adil obj;
    obj.name = "Adil";
    obj.age = 20;
    obj.rollno = 101;

    obj.display();

    return 0;
}

#include<iostream>
using namespace std;
class Adil{
    public:
    string name;
    int age;
    int rollno;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }

};
int main(){
    Adil obj;
    obj.name = "Adil";
    obj.age = 20;
    obj.rollno = 101;

    obj.display();

    return 0;
}