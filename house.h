#include <string>
using namespace std;

class House {
    private:
        int roomCount;
        float length, breadth, height;
        string description;
    public:
        House(int, int, int, int, string);
        ~House();
        int getRoomCount();
        int getLength();
        int getBreadth();
        int getHeight();
        string getDescription();
        void setLength(int);
        void setBreadth(int);
        void setHeight(int);
        void setDescription(string);
};

