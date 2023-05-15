#ifndef COWBOY
#define COWBOY

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Character.hpp"
#include "Point.hpp"

using namespace std;
namespace ariel{
//using namespace ariel;

class Cowboy : public Character{

    int balls;



    public:
   
        Cowboy(string nam, Point poin);

        //int bal, int count_hit
           //6        11

        void shoot(Character * malo);
        bool hasboolets();
        bool reload();

};



}


#endif