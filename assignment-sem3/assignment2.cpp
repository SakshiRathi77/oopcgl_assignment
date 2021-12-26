<<<<<<< Updated upstream
#include<iostream>
#
using namespace std;
class database{
public:
int roll_no;
int section;
char name[50];
char dob[10];
long int contact_no;
char blood_group[2];
static int count;
database(){
    int roll_no=0;
    int section=0;
    long int contact_no=0;
    count ++;
}
database(database &d){
   int roll_no=d.roll_no;
int section=d.section; 
}
~database(){
    cout<<"deleting student database\n";
    count--;
}
inline void getdata(){
    cout<<"enter the name of student\n";
    cin>>name;
    cout<<"enter the rollno of student\n";
    cin>>roll_no;
    cout<<"enter the section of student\n";
    cin>>section;
    cout<<"enter the dob of student\n";
    cin>>dob;
    cout<<"enter the contact number of student\n";
    cin>>contact_no;
    try{
    cout<<"enter the blood group of student\n";
    cin>>blood_group;
    if(blood_group=="A"||blood_group=="B"||blood_group=="O"||blood_group=="AB")
    { 
        throw blood_group;
    }}
    catch(char blood_group){
            cout<<"blood group entered is invalid\n";
    }
    // count++;
}
friend class student;

};
int database::count=0;
class student{
    public:
    void display(database &d){
        cout<<d.count<<"\t"<<d.roll_no<<"\t"<<d.name<<"\t"<<d.section<<"\t"<<d.blood_group<<"\t"<<"\t"<<d.contact_no<<"\t"<<d.dob<<endl;
    }
};
// database::count=0;
int main(){
    int n;
    cout<<"enter total strenght of class \n";
    cin>>n;
    database *d[n];
    cout<<"---------------------------------------main menu---------------------------------\n1.to enter student details\n 2.to display database 3.to exit"<<endl;
    
int ch;
    do{
    
    cout<<"enter the choice :";
    cin>>ch;  
    switch (ch)
    {
    case 1:
    int a;
    cout<<"enter total no. of students\n";
    cin>>a;
    for (int i=0;i<a;i++){
        d[i]=new database();
        d[i]->getdata();

    }
    case 2:
    cout<<"enter total no. of students to display\n";
    cin>>a;
    cout<<"count"<<"\t"<<"roll_no"<<"\t"<<"name"<<"\t"<<"section"<<"\t"<<"blood_group\t"<<"contact_no"<<"\t"<<"dob"<<endl;
    for (int i=0;i<a;i++){
      student s[i];
      s[i].display(*d[i]);


    }
        break;
    
    default:
        break;
    }
    }while(ch<3);

    // d1.getdata();
    // student s1;
    // s1.display(d1);
    return 0;
}

=======
#include<iostream>
#
using namespace std;
class database{
public:
int roll_no;
int section;
char name[50];
char dob[10];
long int contact_no;
char blood_group[2];
static int count;
database(){
    int roll_no=0;
    int section=0;
    long int contact_no=0;
    count ++;
}
database(database &d){
   int roll_no=d.roll_no;
int section=d.section; 
}
~database(){
    cout<<"deleting student database\n";
    count--;
}
inline void getdata(){
    cout<<"enter the name of student\n";
    cin>>name;
    cout<<"enter the rollno of student\n";
    cin>>roll_no;
    cout<<"enter the section of student\n";
    cin>>section;
    cout<<"enter the dob of student\n";
    cin>>dob;
    cout<<"enter the contact number of student\n";
    cin>>contact_no;
    try{
    cout<<"enter the blood group of student\n";
    cin>>blood_group;

}
friend class student;

};
int database::count=0;
class student{
    public:
    void display(database &d){
        cout<<d.count<<"\t"<<d.roll_no<<"\t"<<d.name<<"\t"<<d.section<<"\t"<<d.blood_group<<"\t"<<"\t"<<d.contact_no<<"\t"<<d.dob<<endl;
    }
};
// database::count=0;
int main(){
    int n;
    cout<<"enter total strenght of class \n";
    cin>>n;
    database *d[n];
    cout<<"---------------------------------------main menu---------------------------------\n1.to enter student details\n 2.to display database 3.to exit"<<endl;
    
int ch;
    do{
    
    cout<<"enter the choice :";
    cin>>ch;  
    switch (ch)
    {
    case 1:
    int a;
    cout<<"enter total no. of students\n";
    cin>>a;
    for (int i=0;i<a;i++){
        d[i]=new database();
        d[i]->getdata();

    }
    case 2:
    cout<<"enter total no. of students to display\n";
    cin>>a;
    cout<<"count"<<"\t"<<"roll_no"<<"\t"<<"name"<<"\t"<<"section"<<"\t"<<"blood_group\t"<<"contact_no"<<"\t"<<"dob"<<endl;
    for (int i=0;i<a;i++){
      student s[i];
      s[i].display(*d[i]);


    }
        break;
    
    default:
        break;
    }
    }while(ch<3);

    // d1.getdata();
    // student s1;
    // s1.display(d1);
    return 0;
}

>>>>>>> Stashed changes
