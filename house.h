#include <string>
using namespace std;

class House {
    private:
        int roomCount;
        float length, breadth, height;
        string description;
    public:
        House(int, float, float, float, string);
        ~House();
        int getter(int);
        string getter(string);
        float getter(float);
        int getRoomCount();
        float getLength();
        float getBreadth();
        float getHeight();
        string getDescription();
        
        void setRoomCount(int);
        void setLength(float);
        void setBreadth(float);
        void setHeight(float);
        void setDescription(string);
};

