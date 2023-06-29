#include "management.h"
#include <iostream>
using namespace std;

void Management::mainMenu(){
    int Menuchoice;
    int schoice;
    int back;

    cout<<"\t         LIU AIRLINES \n"<<endl;
    cout<<"\t-------Main menu--------- \n"<<endl;

    cout<<"\t-----------------------------------------------"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details      \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration          \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charge            \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                          \t|"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t-----------------------------------------------"<<endl;

    cout<<"Enter the choice: "<<endl;
    cin>>Menuchoice;

    /*Details d;
    registration r;
    ticket t;
    */

    switch(Menuchoice){
        case 1:
        {
            cout<<"-------Customers--------\n"<<endl;
            //d.information();
            cout<<"Press any key to go back to main menu";
            cin>>back;
            
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<<"---------Book a flight using this system ----------\n"<<endl;
           // r.flights();
            break;
        }

        case 3:
        {
            cout<<"---------Get Your ticket--------\n"<<endl;
            cout<<"Press 1 to display your ticket ";
            //cin>>back;

            if(back == 1){
               // t.display();
               cout<<"Press any key to go back to main menu: ";
               cin>>back;
               if(back == 1){
                mainMenu();
               }else{
                mainMenu();
               }

            }else{
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\n\t------------------Thank you----------------"<<endl;
            break;
        }
        default:{
            cout<<"Invalid input, please try again !!!!!"<<endl; 
        }

    }

}
