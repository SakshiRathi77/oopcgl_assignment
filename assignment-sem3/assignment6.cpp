#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    bool operator==(const student &s1){
        return(rollno=s1.rollno);
    }
    // bool operator<(const student &s1){
    //     return(rollno<s1.rollno);
    // }
    // bool operator>(const student &s1){
    //     return(rollno>s1.rollno);
    // }
    void getdata(){
        cout<<"enter student name :";
        cin>>name>>endl;
        cout<<"enter roll no. :";
        cin>>rollno;
    }
    void display(){
        cout<<"name of student is :"<<name<<endl;
        cout<<"rollno of student is :"<<rollno<<endl;

    }
}