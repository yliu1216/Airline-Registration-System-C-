#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <string>
#include <iostream>
#include "management.h"
using namespace std;

class registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights(Management& management){
            string flightName[]={"Canada", "Dubai", "America", "United", "China", "Europe", "UK"};
            for(int i = 0; i<6; i++){
                cout<<(i+1)<<".flight to"<<flightName[i]<<endl;
            }

            cout<<"\nWelcome o the Airlines!"<<endl;
            cout<<"Press the number of the country of which you want to book the flight: ";
            cin>>choice;

            switch(choice){
                case 1: 
                    {
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. DUB -  498"<<endl;
                        cout<<"2. DUB -  699"<<endl;
                        cout<<"3. DUB -  689"<<endl;

                        cout<<"\nSelect the flight you want to book: "<<endl;
                        cin>>choice1;

                    
                        if(choice1 == 1){
                            charges = 1400;
                            cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 2){
                            charges = 1200;
                            cout<<"\nYou have successfully booked the flight UA - 699"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 3){
                            charges = 2400;
                            cout<<"\nYou have successfully booked the flight DUB - 689"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else{
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights(management);
                        }
                        if(back == 1){
                            management.mainMenu();
                        }else{
                            management.mainMenu();
                        }
                    }

                case 2:
                    {
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. CAN -  498"<<endl;
                        cout<<"2. CAN -  699"<<endl;
                        cout<<"3. CAN -  689"<<endl;

                        cout<<"\nSelect the flight you want to book: "<<endl;
                        cin>>choice1;

                    
                        if(choice1 == 1){
                            charges = 1400;
                            cout<<"\nYou have successfully booked the flight CAN - 498"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 2){
                            charges = 1200;
                            cout<<"\nYou have successfully booked the flight CAN - 699"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 3){
                            charges = 2400;
                            cout<<"\nYou have successfully booked the flight CAN - 689"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else{
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights(management);
                        }
                        if(back == 1){
                            management.mainMenu();
                        }else{
                            management.mainMenu();
                        }
                    }   
                    
                    case 3:
                    {
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. AM -  498"<<endl;
                        cout<<"2. AM -  699"<<endl;
                        cout<<"3. AM -  689"<<endl;

                        cout<<"\nSelect the flight you want to book: "<<endl;
                        cin>>choice1;

                    
                        if(choice1 == 1){
                            charges = 1400;
                            cout<<"\nYou have successfully booked the flight AM - 498"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 2){
                            charges = 1200;
                            cout<<"\nYou have successfully booked the flight AM - 699"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 3){
                            charges = 2400;
                            cout<<"\nYou have successfully booked the flight AM - 689"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else{
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights(management);
                        }
                        if(back == 1){
                            management.mainMenu();
                        }else{
                            management.mainMenu();
                        }
                    }

                    case 4:
                    {
                        cout<<"Following are the flights \n"<<endl;
                        cout<<"1. UN -  498"<<endl;
                        cout<<"2. UN -  699"<<endl;
                        cout<<"3. UN -  689"<<endl;

                        cout<<"\nSelect the flight you want to book: "<<endl;
                        cin>>choice1;

                    
                        if(choice1 == 1){
                            charges = 1400;
                            cout<<"\nYou have successfully booked the flight UN - 498"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 2){
                            charges = 1200;
                            cout<<"\nYou have successfully booked the flight UN - 699"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else if(choice == 3){
                            charges = 2400;
                            cout<<"\nYou have successfully booked the flight UN - 689"<<endl;
                            cout<<"Try go back to menu and take the tickets"<<endl;
                        }else{
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights(management);
                        }
                        if(back == 1){
                            management.mainMenu();
                        }else{
                            management.mainMenu();
                        }
                    }

                    default:{
                        cout<<"Invalid input, shifting you to the main menu ! "<<endl;
                        management.mainMenu();
                        break;
                    }
        }
    }
};

#endif