#include <iostream>
#include <string>
using namespace std;
class publication{
  public:
  string title;
  float price;
  publication(){
      title="o";
      price=0.0;
  }
  ~publication(){
      cout<<"deleting data!!!\n";
  }
  
};
class book:public publication{
    public:
    int pagecount;
    void getdata(){

        cout<<"enter the name of book\n";
        cin>>title;
        cout<<"enter the price of book \n";
        cin>>price;
        cout<<"enter the pagecount of book \n";
        cin>>pagecount;
}
    void display(){

    try
 		{
 			if(title.length()<3)
 				throw title;
 				
 			if(price<=0.0)
 				throw price;
            if (pagecount<=0)
                throw pagecount;
 		}
 		catch(string)
 		{
 			cout<<"\nError: Title below 3 characters is not allowed";
 			title="";
 		}
 		
 		catch(float f)
 		{
 			cout<<"\nError: Price not valid: \t"<<f;
			price=0.0;
 		}	
         catch (int i){
             cout<<"\n invalid pagecount \t"<<i;
             pagecount=0;
         }
 		cout<<"\tTitle is :"<<title;
 		cout<<"\tPrice is :"<<price;
         cout<<"\tpagecount is"<<pagecount;

 	}
};     

class tape:public publication{
    public:
    int time;
    void getdata(){
        
        cout<<"enter the name of audiocasttle \n";
        cin>>title;
        cout<<"enter the price of  audiocasttle\n";
        cin>>price;
        cout<<"enter the timeperiod of  audiocasttle \n";
        cin>>time;}

    void display(){
        try
 		{
 			if(title.length()<3)
 				throw title;
 				
 			if(price<=0.0)
 				throw price;
            if (time<=0)
                throw time;
 		}
 		catch(string)
 		{
 			cout<<"\nError: Title below 3 characters is not allowed";
 			title="";
 		}
 		
 		catch(float f)
 		{
 			cout<<"\nError: Price not valid: \t"<<f;
			price=0.0;
 		}	
         catch (int i){
             cout<<"\n invalid timeperiod \t"<<i;
            time=0;
         }
 		cout<<"\tTitle is :"<<title;
 		cout<<"\tPrice is :"<<price;
         cout<<"\ttimeperiod is"<<time;

 	}
    
    };
    
int main(){
    cout<<"----------------------main menu-------------------------------------------------------------\n 1. to enter details of books \n2 .to enter details of audiocastle 3. to  display the books data \n 4. to display audiocasttle data \n "<<endl;
    tape t1,t2;
    book b1,b2;
    int ch;
    do{ 
        cout<<"\nenter the choice :";
        cin>>ch;
        switch ( ch)
        {
        case 1:
        b1.getdata();


            break;
        case 2:
        t1.getdata();
       
            break;
        case 3:

            b1.display();
        
            break; 
        case 4:
        t1.display();
        break;        
        default:
            break;
        }
    }while (ch <5);
    return 0;

    
}