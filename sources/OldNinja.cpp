

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "all_ninja"
#include"OldNinja.hpp"
using namespace std;

using namespace ariel;

OldNinja:: OldNinja(String nam, Point poin){
    this->name = nam;
    this->loc = poin;
}

