#ifndef TRAINEDNINJA
#define TRAINEDNINJA

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "all_ninja.hpp"
using namespace std;

//using namespace ariel;

class TrainedNinja : public all_ninja{


    public:
        TrainedNinja(string nam, Point poin);
};


#endif