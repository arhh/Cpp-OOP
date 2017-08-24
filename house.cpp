#include "house.h"
#include <iostream>
#include <string>
using namespace std;

House::House(int roomCount, float length, float breadth, float height, string description) {
    this -> roomCount = roomCount;
    this -> length = length;
    this -> breadth = breadth;
    this -> height = height;
    this -> description = description;
}

House::~House() {
    cout << "Demolishing house" << endl;
}

// Getter for House instance variables
int House::getter(int variable) {
    return variable;
}

// Over-loaded getter for House instance variables
string House::getter(string variable) {
    return variable;
}

// Over-loaded getter for House instance variables
float House::getter(float variable) {
    return variable;
}

// Getter for roomCount variable
int House::getRoomCount() {
    return getter(roomCount);
}

// Getter for length variable
float House::getLength() {
    return getter(length);
}

// Getter for breadth variable
float House::getBreadth() {
    return getter(breadth);
}

// Getter for height variable
float House::getHeight() {
    return getter(height);
}

// Getter for house description variable
string House::getDescription() {
    return getter(description);
}

// Setter for roomCount variable
void House::setRoomCount(int roomCount) {
    this -> roomCount = roomCount;
}

// Setter for length variable
void House::setLength(float length) {
    this -> length = length;
}

// Setter for breadth variable
void House::setBreadth(float breadth) {
    this -> breadth = breadth;
}

// Setter for height variable
void House::setHeight(float height) {
    this -> height = height;
}

// Setter for house description variable
void House::setDescription(string description) {
    this -> description = description;
}

int main() {
    int sampleRoomCount = 2;
    float sampleLength = 12.8;
    float sampleBreadth = 8.5;
    float sampleHeight = 4.9;
    string sampleDescription = "This house is small with two all-purpose rooms.";
    House thing(sampleRoomCount, sampleLength, sampleBreadth, sampleHeight, sampleDescription);
    cout << thing.getRoomCount() << endl;
    cout << thing.getLength() << endl;
    cout << thing.getBreadth() << endl;
    cout << thing.getHeight() << endl;
    cout << thing.getDescription() << endl;
    thing.setRoomCount(5);
    thing.setLength(21.6);
    thing.setBreadth(38.1);
    thing.setHeight(6);
    thing.setDescription("This house is big with 5 rooms.");
    cout << thing.getRoomCount() << endl;
    cout << thing.getLength() << endl;
    cout << thing.getBreadth() << endl;
    cout << thing.getHeight() << endl;
    cout << thing.getDescription() << endl;
    return 0;
}

