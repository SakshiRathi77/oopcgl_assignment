#include<iostream>
using namespace std;
class complex{
    public:
    float real;
    float img;
    
    complex(){
        real=0;
        img=0;
    }
    complex(float real,float img){
        real=this->real;
        img=this->img;
    }

    void display(){
        cout<<this->real<<"+i"<<this->img<<"\n";        
    }
    complex operator +(const complex &c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
        complex operator -(complex &c){
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
        complex operator *(complex &c){
        complex temp;
        temp.real=real*c.real-img*c.img;
        temp.img=real*c.img+img*c.real;
        return temp;
    }
friend ostream &operator<<(ostream &cout,complex &c);
friend istream &operator>>(istream &cin,complex &c);
};
ostream &operator<<(ostream &cout,complex &c){
    cout<<"complex no. is"<<c.real<<"+i"<<c.img<<"\n";
    return cout;
}
 istream &operator>>(istream &cin,complex &c)
 {
     cin>>c.real;
     cin>>c.img;
     return cin;
 }
 int main(){
     int n;
    complex a;
    complex b,c1;
     cout<<"-------------------main program-------------------------\n 1.enter the coplex no.\n 2.display the no. \n3 sum of complex no. \n 4. substraction of complex no. \n 5. muttiplication of no. ";

do{ cout<<"\n enter your choice no. :";
    cin>>n;
switch (n)
{
case 1:
cout<<"enter the real part and img part of first no. :\n";
cin>>a.real>>a.img;
cout<<"enter the real part and img part of second  no. :\n";
cin>>b.real>>b.img;

case 2:
    a.display();
    b.display();
    break;
case 3:
   
    c1=a+b;
    cout<<"sum of two complex no. is :\n";
    c1.display();
    break;
case 4:

    c1=a-b;
    cout<<"sub of two complex no. is :\n";
    c1.display();
    break;
case 5:
    cout<<"multiplication of two complex no. :\n";
    c1=a*b;
    c1.display();
    break;


default:
    break;
}
 }while(n<6);
 return 0;
 }
 