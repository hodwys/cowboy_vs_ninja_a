
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character"
using namespace std;

using namespace ariel;



Character::Character(Point loca, int targ, String nam){
    this->loc = loca;
    this-> target = targ;
    this->name = nam;
}

Point Character::getLocation(){
    Point temp(0,0);
    return temp;
}
int Character::getTarget(){
    return this->target;
}
String Character::getName(){
    return this->name;
}

void Character::Set_location(Point loca){
    this->loc = loca;
}
void Character::Set_target(int tar){
    this->target = tar;
}
void Character::Set_name(String nam){
    this->name = nam;
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
void Character::print(){
    cout <<"print function"<< endl;
}

