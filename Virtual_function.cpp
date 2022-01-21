#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Student
{

    public:
    string name;
    int roll_no;
    string school_name = "ABC matric. Hr. secondary school";

    public:

    void scl_name(){
        cout<<"school name : "<<school_name<<endl;
    }

    virtual void print(){
        cout<<"student details";
    }
};

class student1 : public Student{
public: 
    void print(){
        cout<<"Student1 name is : ";
        cin>>name;
        cout<<"Student1 roll no is : "<<" ";
        cin>>roll_no;
    }
};

class student2 : public Student{
public: 
    void print(){
        cout<<endl<<"Student2 name is : "<<" ";
        cin>>name;
        cout<<"Student2 roll no is : "<<" ";
        cin>>roll_no;
    }
};
int main(){
    Student *s;
    student1 s1;
    s = &s1;

    s->print();
    s->scl_name();

    student2 s2;
    s = &s2;

    s->print();
    s->scl_name();

}
