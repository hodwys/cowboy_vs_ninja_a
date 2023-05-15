#ifndef OLDNINJA
#define OLDNINJA

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"

#include "all_ninja.hpp"
using namespace std;
namespace ariel{
//using namespace ariel;

class OldNinja : public all_ninja{

    int numofha;
    public:
       OldNinja(string nam, Point poin);
};
}

#endif