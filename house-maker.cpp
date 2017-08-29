#include "house.h"
#include <iostream>
#include <string>
using namespace std;

void makeHouse(House*);

void makeHouse(House* emptyHouse) {
    int roomCount;
    float length, breadth, height;
    string description;
    
    cout << "\n\nSpecify the house details by responding to the following prompts:\n" << endl;
    
    cout << "Number of rooms: ";
    cin >> roomCount;
    cout << "Length: ";
    cin >> length;
    cout << "Breadth: ";
    cin >> breadth;
    cout << "Height: ";
    cin >> height;
    cout << "Description: ";
    cin.ignore(256, '\n');
    getline(cin, description);
    
    emptyHouse -> setRoomCount(roomCount);
    emptyHouse -> setLength(length);
    emptyHouse -> setBreadth(breadth);
    emptyHouse -> setHeight(height);
    emptyHouse -> setDescription(description);
    
    cout << "\n***House Created***" << endl;
    cout << "***Returning to home screen***" << endl;
}

int main() {
    int userIntendedTask;
    House house(0, 0, 0, 0, "");
    House* housePointer = &house;

    cout << "\n\n ==== Welcome to House Maker ==== \n" << endl;

    do {
        cout << "\nWhat would you like to do:\n\n";
        cout << "1. Create a house\n";
        cout << "2. View the detail of your house\n";
        cout << "3. Change the details of your house\n";
        cout << "4. Close the program and destroy your house\n";

        cout << "\nEnter a number corresponding to a task you want to perform from the above list" << endl;
        cout << "> ";
        cin >> userIntendedTask;

        switch(userIntendedTask) {
            case 1:
                cout << "You want to create a house" << endl;
                makeHouse(housePointer);
                break;
            case 2:
                cout << "You want to view the house's details" << endl;
                break;
            case 3:
                cout << "You want to modify the house's details" << endl;
                break;
            case 4:
                cout << "Closing program" << endl;
                break;
            default:
                cout << "*** Invalid option selected ***" << endl;
        }
    } while (userIntendedTask != 4);
    return 0;
}
