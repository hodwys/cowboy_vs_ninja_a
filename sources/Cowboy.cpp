
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Character.hpp"
#include "Cowboy.hpp"
using namespace std;
namespace ariel{

//using namespace ariel;


        Cowboy::Cowboy(string nam, Point poin):Character(nam,poin),balls(6){
            // this->name = nam;
            // this-> Point = poin;
           // this-> balls = 6;
           // this-> hit = 11;
        }

        //int bal, int count_hit
           //6        11

        void Cowboy::shoot(Character * malo){
            cout<<"shoot function"<< endl;        }
        bool Cowboy::hasboolets(){
            return false;
        }
        bool Cowboy::reload(){
            return false;
        }
        
        
}