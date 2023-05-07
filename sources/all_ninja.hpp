#ifndef ALL_NINJA
#define ALL_NINJA

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Character.hpp"
using namespace std;

//using namespace ariel;

class all_ninja : public Character{

    int speed;



    public:
        all_ninja(string nam, Point loca);
        void move(Character * malo);
        void  slash(Character * malo); 
   


};




#endif