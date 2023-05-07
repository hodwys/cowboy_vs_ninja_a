#ifndef TEAM
#define TEAM

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

using namespace ariel;

class team : public Character{


    public:
        team(Character *lead);
        void add(Character * fr_team);
        void attack(team * other);
        int stillAlive();
        void print(); 


}




#endif