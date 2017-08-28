#include <iostream>
#include <string>
#include <sstream>
#include "house.cpp"
using namespace std;

int promptUser(bool);
void makeHouse();
void houseAttributeSetter();

int promptUser(bool houseExists) {
    int userInput;
    cout << "Type the number corresponding to the action you want to perform:" << endl;
    cout << " 1. Create House\n 2. Close house maker program\n" << endl;
    if (houseExists) {
        cout << " 3. Get this house's room count\n 4. Get this house's length\n 5. Get this house's breadth\n 6. Get this house's height\n 7. Get this house's description\n 8. Change one of the house's attributes" << endl;
    }
    cout << "> ";
    cin >> userInput;
    
    return userInput;
}

void makeHouse() {
    int roomCount;
    float length, breadth, height;
    string description;
    stringstream input;
    
    cout << "Enter number of rooms in this house: " << endl;
    cin >> input;
    input >> roomCount;
    
    cout << "Enter length of this house: " << endl;
    cin >> input;
    input >> length;
    
    cout << "Enter breadth of this house: " << endl;
    cin >> input;
    input >> breadth;
    
    cout << "Enter height of this house: " << endl;
    cin >> input;
    input >> height;
    
    cout << "Enter some extended description for this house: " << endl;
    cin >> input;
    input >> description;
    
    House house(roomCount, length, breadth, height, description)
}

int main() {
    cout << "Welcome to this hypothetical house maker\n" << endl;
    
    bool houseExists = false;
    int promptOutput;
        
    do {
      promptOutput = promptUser(houseExists);
      
      switch (promptOutput) {
        case 1:
            makeHouse();
            houseExists = true;
            break;
        case 2:
            promptOutput = 0;
            break;
        case 3:
            cout << house.getRoomCount() << endl;
            break;
        case 4:
            cout << house.getLength() << endl;
            break;
        case 5:
            cout << house.getBreadth() << endl;
            break;
        case 6:
            cout << house.getHeight() << endl;
            break;
        case 5:
            cout << house.getDescription() << endl;
            break;
        case 6:
            houseAttributeSetter();
            break;
        default:
            cout << "Invalid option selected" << endl;
            promptOutput = -1;
      }
    } while (promptOutput != 0);
    
    return 0;
}

