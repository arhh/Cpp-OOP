#include "house.h"
#include <iostream>
#include <string>
using namespace std;

House::House(int roomCount, float length, float breadth, float height, string description) {
    this -> roomCount = roomCount;
    this -> length = length;
    this -> breadth = breadth;
    this -> height = height;
}

House::~House() {
    cout << "Demolishing the house" << endl;
}

int House::getter(int variable) {
    return variable;
}

string House::getter(string variable) {
    return variable;
}

float House::getter(float variable) {
    return variable;
}

int House::getRoomCount() {
    return getter(roomCount);
}

float House::getLength() {
    return getter(length);
}

float House::getBreadth() {
    return getter(breadth);
}

float House::getHeight() {
    return getter(height);
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
    return 0;
}
