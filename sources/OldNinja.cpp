

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "all_ninja.hpp"
#include"OldNinja.hpp"
using namespace std;
namespace ariel{
//using namespace ariel;

OldNinja:: OldNinja(string nam, Point poin):all_ninja(nam,poin){
     this->numofha =100;
    // this->loc = poin;
}

}