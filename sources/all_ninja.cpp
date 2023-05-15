
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "all_ninja.hpp"
using namespace std;

//using namespace ariel;
namespace ariel{



all_ninja ::all_ninja(string nam, Point loca): Character(nam,loca){
    this->numofha=100;
    // this -> loc = loca;

}
void  all_ninja:: move(Character * malo){

}
void all_ninja:: slash(Character * malo){
    
} 
int all_ninja:: get_speed(){
    return this->speed;
}

}


