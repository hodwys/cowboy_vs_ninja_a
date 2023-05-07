#ifndef TEAM
#define TEAM

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

namespace ariel{

class Team : public Character{

    public:
        Team(Character *lead);
        void add(Character * fr_team);
        void attack(Team * other);
        int stillAlive();
        void print(); 

};
}




#endif