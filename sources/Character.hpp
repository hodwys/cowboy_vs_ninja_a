#ifndef CHARACTER
#define CHARACTER


#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
using namespace std;
namespace ariel{

// using namespace ariel;

class Character{

    Point loc;
    int target; 
    string name;

    public:
        Character(Point loc, int target, string name);
        Character(string name, Point loc);

        Point getLocation();
        int getTarget();
        string getName();

        void Set_location(Point poin);
        void Set_target(int tar);
        //void Set_name(string nam);

        bool isAlive();
        double distance(Character* other);
        void hit(int count_hit);
        string print();
        

};
}
#endif