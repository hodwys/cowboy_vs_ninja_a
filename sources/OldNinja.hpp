#ifndef OLDNINJA
#define OLDNINJA

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "all_ninja"
using namespace std;

using namespace ariel;

class OldNinja : public all_ninja{


    public:
       OldNinja(String nam, Point poin);
}


#endif