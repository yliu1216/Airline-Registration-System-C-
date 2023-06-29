#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include <string>
#include <iostream>
using namespace std;

class Details{
    public:
       static string name, gender;
       int phoneNumber;
       int age;
       string id;
       char arr[100];

       void information(){
        try{
          cout<<"\n Enter the customer ID: "<<endl;
          cin >> id;

          cout<<"\n Enter the name: "<<endl;
          cin >> name;

          cout<<"\n Enter the age: "<<endl;
          cin>>age;

          cout<<"\n Enter Address: "<<endl;
          cin>> arr;

          cout<<"Enter gender: "<<endl;
          cin>> gender;

          cout<<"Enter phone number: "<<endl;
          cin>> gender;

          cout<<"Information saved"<<endl;
        }
        catch(int myNum){
             cout << "Access denied - Something went wrong.\n";
             cout << "Error number: " << myNum;
        }

       }
    

};

#endif