#include "house.h"
#include <iostream>
using namespace std;

House::House(int roomCount, int length, int breadth, int height, string description) {
    this -> roomCount = roomCount;
    this -> length = length;
    this -> breadth = breadth;
    this -> height = height;
}

House::~House() {
    cout << "Demolishing the house" << endl;
}

int House::getRoomCount() {
    return roomCount;
}

int main() {
    int sampleRoomCount = 2;
    int sampleLength = 12.8;
    int sampleBreadth = 8.5;
    int sampleHeight = 4.9;
    string sampleDescription = "This house is small with two all-purpose rooms.";
    House thing(sampleRoomCount, sampleLength, sampleBreadth, sampleHeight, sampleDescription);
    cout << thing.getRoomCount() << endl;
    return 0;
}
