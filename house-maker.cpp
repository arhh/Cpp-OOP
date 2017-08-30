#include "house.h"
#include <iostream>
#include <string>
using namespace std;

void makeHouse(House*);
void getHouseDetails(House*);
void setHouseDetails(House*);

void makeHouse(House* emptyHouse) {
    int roomCount;
    float length, breadth, height;
    string description;
    
    cout << "\n\nSpecify the house details by responding to the following prompts:\n" << endl;
    
    cout << "Number of rooms: ";
    cin >> roomCount;
    cout << "Length (in metres): ";
    cin >> length;
    cout << "Breadth (in metres): ";
    cin >> breadth;
    cout << "Height (in metres): ";
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

void getHouseDetails(House* house) {
    int detailToGet;
    
    cout << "\n\nSpecify which of the following house details you want to display:\n" << endl;
    
    cout << "1. Number of rooms" << endl;
    cout << "2. Length" << endl;
    cout << "3. Breadth" << endl;
    cout << "4. Height" << endl;
    cout << "5. Description" << endl;
    cout << "> ";
    
    cin >> detailToGet;
    
    cout << endl;
    
    switch(detailToGet) {
            case 1:
                cout << "Number of rooms in house: " << house -> getRoomCount() << endl;
                break;
            case 2:
                cout << "Length of house: " << house -> getLength() << " metre(s)" << endl;
                break;
            case 3:
                cout << "Breadth of house: " << house -> getBreadth() << " metre(s)" << endl;
                break;
            case 4:
                cout << "Height of house: " << house -> getHeight() << " metre(s)" << endl;
                break;
            case 5:
                cout << "Description for house: " << house -> getDescription() << endl;
                break;
            default:
                cout << "*** Invalid option selected ***" << endl;
        }
    cout << "\n***Returning to home screen***" << endl;
}

void setHouseDetails(House* house) {
    int detailToSet;
    
    cout << "\n\nSpecify which of the following house details you want to modify:\n" << endl;
    
    cout << "1. Number of rooms" << endl;
    cout << "2. Length" << endl;
    cout << "3. Breadth" << endl;
    cout << "4. Height" << endl;
    cout << "5. Description" << endl;
    cout << "> ";
    
    cin >> detailToSet;
    
    cout << "\nEnter new value:" << endl;
    cout << "> ";
    
    switch(detailToSet) {
            case 1:
                {
                int oldRoomCount, newRoomCount;
                oldRoomCount = house -> getRoomCount();
                cin >> newRoomCount;
                house -> setRoomCount(newRoomCount);
                cout << "Number of rooms in house updated from " << oldRoomCount << " to " << newRoomCount << endl;
                }
                break;
            case 2:
                {
                float oldLength, newLength;
                oldLength = house -> getLength();
                cin >> newLength;
                house -> setLength(newLength);
                cout << "Length of house updated from " << oldLength << " to " << newLength << endl;
                }
                break;
            case 3:
                {
                float oldBreadth, newBreadth;
                oldBreadth = house -> getBreadth();
                cin >> newBreadth;
                house -> setBreadth(newBreadth);
                cout << "Breadth of house updated from " << oldBreadth << " to " << newBreadth << endl;
                }
                break;
            case 4:
                {
                float oldHeight, newHeight;
                oldHeight = house -> getHeight();
                cin >> newHeight;
                house -> setHeight(newHeight);
                cout << "Height of house updated from " << oldHeight << " to " << newHeight << endl;
                }
                break;
            case 5:
                {
                string oldDescription, newDescription;
                oldDescription = house -> getDescription();
                cin.ignore(256, '\n');
                getline(cin, newDescription);
                house -> setDescription(newDescription);
                cout << "Description of house updated from " << oldDescription << " to " << newDescription << endl;
                }
                break;
            default:
                cout << "*** Invalid option selected ***" << endl;
        }
    cout << "\n***Returning to home screen***" << endl;
}

int main() {
    int userIntendedTask;
    House house(0, 0, 0, 0, "");
    House* housePointer = &house;

    cout << "\n\n ==== Welcome to House Maker ==== \n" << endl;

    do {
        cout << "\nWhat would you like to do:\n\n";
        cout << "1. Create a house\n";
        cout << "2. View some detail of your house\n";
        cout << "3. Change the details of your house\n";
        cout << "4. Close the program and destroy your house\n";

        cout << "\nEnter a number corresponding to a task you want to perform from the above list" << endl;
        cout << "> ";
        cin >> userIntendedTask;

        switch(userIntendedTask) {
            case 1:
                makeHouse(housePointer);
                break;
            case 2:
                getHouseDetails(housePointer);
                break;
            case 3:
                cout << "You want to modify the house's details" << endl;
                setHouseDetails(housePointer);
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
