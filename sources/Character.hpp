#ifndef POINT_HPP
#define POINT_HPP


#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
using namespace std;

using namespace ariel;

class Character{

    Point loc;
    int target; 
    String name;

    public:
        Character(Point loc, int target, String name);
        Point getLocation();
        int getTarget();
        String getName();

        void Set_location();
        void Set_target();
        void Set_name();

        bool isAlive();
        double distance(Character* other);
        void hit(int count_hit);
        void print();
        

}

#endif