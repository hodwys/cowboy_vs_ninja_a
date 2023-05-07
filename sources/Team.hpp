#ifndef TEAM
#define TEAM

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Character.hpp"
#include "Point.hpp"
#include "Cowboy.hpp"
#include "all_ninja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"


using namespace std;

namespace ariel{

class Team{

    public:
        Team(Character *lead);
        void add(Character * fr_team);
        void attack(Team * other);
        int stillAlive();
        void print(); 

};
}




#endif