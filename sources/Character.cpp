
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character.hpp"
using namespace std;
//using namespace ariel;
namespace ariel{

Character::Character(Point loca, int targ, string nam) : loc(loca),target(targ),name(nam)  {
    // this->loc = loca;
    // this-> target = targ;
    // this->name = nam;

}
Character::Character( string nam ,Point loca) : loc(loca), name(nam){
    // this->loc = loca;
    // this->name = nam; 
}

Point Character::getLocation(){
    Point temp(0,0);
    return temp;
}
int Character::getTarget(){
    return this->target;
}
string Character::getName(){
    return this->name;
}

void Character::Set_location(Point loca){
    this->loc = loca;
}

void Character::Set_target(int tar){
    this->target = tar;
}


bool Character::isAlive(){
    return false;
}
double Character:: distance(Character* other){
    return 1.1;
}
void Character::hit(int count_hit){
    cout<<"hit funtion"<< endl;
}
string Character::print(){
    string s ="print function";
    return s;
}

}