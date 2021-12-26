#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class student{
    public:
    int rollno;
    char name[30];
    bool operator==(const student &s3){
       return rollno==s3.rollno;
    }
    bool operator<(const student &s3){
        return rollno<s3.rollno;
    }
    friend ostream & operator<<(ostream &cout,const student &s  );
    friend istream & operator>>(istream &cin,const student &s  );

};
ostream  & operator<<(ostream &cout,const student &s  ){
    cout<<"\n\t "<<s.rollno<<"\t\t"<<s.name<<endl;
    return cout;
}
istream & operator>>(istream &cin,const student &s  ){
    cout<<"enter student name :/n";
    cin>>s.name<<endl;
    cout<<"enter student roll no. :\n";
    cin>>s.rollno<<endl;
    return cin;
}
    bool myfumc(student &s1,student &s2){
        return s1.rollno>s2.rollno;
    }
vector<student> read(){
    vector<student>a;
    student s;
    int n;
    cout<<"enter total no. of students :";
    cin>>n>>endl;
    for(int i=0;i<n;i++){
        cin>>s;
        a.push_back(s);
    }
    return a;
}
void display(const student &s){
    cout<<s;
}
void print(const vector <student> &a){
    cout<<"\n\t "<<"rollno"<<"\t\t"<<"name"<<endl;
    for_each(a.begin(),a.end(),display);
}
void insert(vector <student> &a){
    student s;
    cin>>s;
    a.pushback(s);
}

void del(vector <student> &a){
    student s;
    cout<<"enter roll no. to be delete :";
    cin>>s.rollno>>endl;
    vector<student>::iterator it;
    it=find(a.begin(),a.end(),s);
    if(it!=a.end()){
        a.erase(it);}
        else{
            cout<<"not found";
        }
    }

void search(vactor<student>&a){
    student k;
    cout<<"enter the rollno to be search :";
    cin>>k.rollno;
    vector<student>::iterator it;
    it=find(a.begin(),a.end(),k);
    if(it!=a.end()){
        cout<<*it;
    else{
        cout<<"not found";
    }
    }
}
void sort(vector <student> &a ){
    sort(a.begin(),a.end(),myfumc);
}
int main(){
    vector<student> a;
    int ch;
    cout<<"---------------------------------main  menu-------------------------------\n 1. create the vector\n 2. to display the vector \n 3. to insert  \n 4. to delete 5. to search\n 6. to sort \n 7.to exit\n ";
    do{
        cout<<"enter your choice :";
        cin>>ch>>endl;
        switch(ch){
            case 1:
            a.read();
            break;
            case 2:
            print(a);
            case 3:
            insert(a);
            break;
            case 4:
            del(a);
            break;
            case 5:
            search(a);
            break;
            case 6:
            sort(a);
            print (a);
            break;
            default :
            break;
        }
    }while(ch!=7);
return 0;
}