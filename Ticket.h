#ifndef TICKET_H
#define TICKET_H
#include <string>
#include <iostream>
#include "Registration.h"
#include "Details.h"
#include <fstream>
using namespace std;

class Ticket:public registration, Details {
    public:
        void Bill(){
            std::string flightName[] = {"Canada", "Dubai", "America", "United", "China", "Europe", "UK"};

    // Get the flight choice
    int choice;
    int getNoOfTickets;
    std::cout << "Enter the flight choice: ";
    std::cin >> choice;

    std::cout<<"Enter number of tickets: ";
    cin >> getNoOfTickets;
    // Check if the flight choice is valid
    if (choice >= 1 && choice <= 7) {
        std::string destination = flightName[choice - 1];

        // Calculate the total charges based on the flight choice
        float totalCharges = charges * getNoOfTickets;

        // Display the bill
        std::cout << "-------- Bill --------" << std::endl;
        std::cout << "Flight: " << destination << std::endl;
        std::cout << "Number of Tickets: " << getNoOfTickets << std::endl;
        std::cout << "Charges per Ticket: " << charges << std::endl;
        std::cout << "Total Charges: " << totalCharges << std::endl;

        // Save the bill to a file
        std::ofstream file("bill.txt");
        if (file.is_open()) {
            file << "-------- Bill --------" << std::endl;
            file << "Flight: " << destination << std::endl;
            file << "Number of Tickets: " << getNoOfTickets << std::endl;
            file << "Charges per Ticket: " << charges << std::endl;
            file << "Total Charges: " << totalCharges << std::endl;
            file.close();
            std::cout << "Bill saved to bill.txt" << std::endl;
        } else {
            std::cout << "Failed to save the bill" << std::endl;
        }
    } else {
        std::cout << "Invalid flight choice" << std::endl;
    }
        }
    
      
};

#endif