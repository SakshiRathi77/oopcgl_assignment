#include<iostream>
using namespace std;
template<class T>
class sort{
    public:
    int n;
    T a[30];
    void getdata(){
        cout<<"enter the total no. to be sorted \n";
        cin>>n;
        cout<<"enter the numbers \n";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<a[i];
            cout<<endl;
        }
    }
    void selection_sort(){
        T temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n+1;j++){
                if(a[i]<a[j]){
                     temp=a[i];
                     a[i]=a[j];
                     a[j]=temp;
                }
            }
        }
    }
};
int main(){
    cout<<"---------------------------main menu-------------------------\n 1. to enter the  int numbers \n .2 to enter float numbers \n 3. to display sorted array \n 4. to exit"<<endl;
    sort<int> s1;
    sort <float> s2;
    sort <char> s3;
    int a;
    do{
        cout<<"enter your choice :";
        cin>>a;
        switch(a){
            case 1:
            s1.getdata();
            s1.selection_sort();
            break;
            case 2:
            s2.getdata();
            s2.selection_sort();
            break;
            case 3:
            int b;
            do{
            cout<<"which array you want to see :\n 1. integer \n 2. float \n";
            cin>>b;
            switch (b){
                case 1:
                s1.display();
                break;
                case 2:
                s2.display();
                break;
                default:
                break;
            }}while (b<3);
        
            
            default:
            break;

            
        }
    }while(a<4);
    return 0;
}