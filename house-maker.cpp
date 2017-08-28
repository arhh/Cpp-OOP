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
    cout << " 1. Create House\n
    cout << " 2. Close house maker program" << endl;
    if (houseExists) {
        cout << " 3. Get this house's room count\n
        cout << " 4. Get this house's length\n
        cout << " 5. Get this house's breadth\n
        cout << " 6. Get this house's height\n
        cout << " 7. Get this house's description\n
        cout << " 8. Change one of the house's attributes" << endl;
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
    
    cout << "\n\nSpecify the following details about the house\n" << endl;
    
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

void houseAttributeSetter() {
    int userInput;    
    
    cout << "\n\n---Welcome to the House Attribute Setter tool---" << endl;
    cout << "Select a characteristic of the house you would like to change:" << endl:
    cout << "1. Room count\n"
    cout << "2. Length\n"
    cout << "3. Breadth\n"
    cout << "4. Height\n"
    cout << "5. Description" << endl;
    cin >> userInput;
    
    switch (userInput) {
        case 1:
            float newRoomCount;
            cout << "Enter updated room count of house: " << endl;
            cin newRoomCount;
            house.setRoomCount(newRoomCount);
            break;
        case 2:
            float newLength;
            cout << "Enter updated length of house: " << endl;
            cin newLength;
            house.setLength(newLength);
            break;
        case 3:
            float newBreadth;
            cout << "Enter updated breadth of house: " << endl;
            cin newBreadth;
            house.setBreadth(newBreadth);
            break;
        case 4:
            float newHeight;
            cout << "Enter updated height of house: " << endl;
            cin newHeight;
            house.setHeight(newHeight);
            break;
        case 4:
            float newDescription;
            cout << "Enter updated description of house: " << endl;
            cin newDescription;
            house.setDescription(newDescription);
            break;
        default:
            cout << "Invalid option selected" << endl;
      }
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

