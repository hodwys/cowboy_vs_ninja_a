#ifndef COWBOY
#define COWBOY

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Character.hpp"
using namespace std;

using namespace ariel;

class Cowboy : public Character{

    int balls;



    public:
   
        Cowboy(String nam, Point poin);

        //int bal, int count_hit
           //6        11

        void shoot(Character * malo);
        bool hasboolets();
        bool reload();

}






#endif