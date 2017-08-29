#include "house.h"
#include <iostream>
using namespace std;

int main() {
    int userIntendedTask;
    cout << "\n\n ==== Welcome to House Maker ==== \n" << endl;
    
    do {
        cout << "\nWhat would you like to do:\n\n";
        cout << "1. Create a house\n";
        cout << "2. Close the program and destroy your house\n";
        cout << "3. View the detail of your house\n";
        cout << "4. Change the details of your house\n";
        
        cout << "Enter a number corresponding to a task you want to perform from the above list" << endl;
        cout << "> ";
        cin >> userIntendedTask;
        
        switch(userIntendedTask) {
            case 1:
                cout << "You want to create a house" << endl;
                break;
            case 2:
                cout << "Closing program" << endl;
                break;
            case 3:
                cout << "You want to view the house's details" << endl;
                break;
            case 4:
                cout << "You want to modify the house's details" << endl;
                break;
            default:
                cout << "*** Invalid option selected ***" << endl;
        }
    } while (userIntendedTask != 2);
    return 0;
}

