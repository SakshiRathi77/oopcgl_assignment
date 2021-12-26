#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream file("mocktest.txt");
    string line;
    // file("abc3.txt");
    if(!file){
        cout<<"file not opened\n";
        return 0;
    }
    cout<<"file opened successfully\n";
    while(file){
        getline(cin,line);
        if(line=="exit")
        break;
        file<<line<<endl;    
    }
    file.seekg(0,ios::beg);
    while(file){
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();
    return 0;
}