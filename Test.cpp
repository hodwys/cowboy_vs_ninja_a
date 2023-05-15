#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "doctest.h"
using namespace std;

#include "sources/Team.hpp" //no need for other includes

namespace ariel{

// Point fuction

TEST_CASE("Get Point function"){

    Point a(1.7,0.3);
    double x = a.Get_X();
    double y = a.Get_Y();

    CHECK_EQ(x ,1.7 );
    CHECK_EQ(y , 0.3 );
}

TEST_CASE("Math function"){

    Point a(4,5);
    Point b(1,1);
    double d = a.distance(b);
    bool notE = (d == 5.0);
    CHECK_FALSE(notE);
    Point c = a.moveTowards(a,b,10.0);
    bool xEQ = (a.Get_X() == c.Get_X());
    bool yEQ = (a.Get_Y() == c.Get_Y());

    CHECK_FALSE((xEQ && yEQ));

}

// Team fuction
TEST_CASE("Team cons"){
    TrainedNinja b( "Adi", Point(1,0));
    Team a(&b);

    CHECK_THROWS(Team(&b));
}

TEST_CASE("add TrainedNinja"){

    TrainedNinja b("Adi", Point(1,0));
    TrainedNinja c("Matan", Point(0,1) );

    Team a(&b);
    CHECK_NOTHROW(a.add(&c));
    CHECK_THROWS(a.add(&c));
}

 TEST_CASE("attack fuction"){

    TrainedNinja a("Adi", Point(1,0));
    Cowboy b("Matan", Point(0,1) );

    Team alis(&a);
    Team bob(&b);
    CHECK_NOTHROW( bob.attack(&alis));
    CHECK_NOTHROW(alis.attack(&bob));
    
}

TEST_CASE("stillAlive fuction"){

    TrainedNinja a("Adi", Point(1,0));
    Cowboy b("Matan", Point(0,1) );

    Team alis(&a);
    Team bob(&b);

    while (alis.stillAlive()){
        bob.attack(&alis);
    }

    CHECK_THROWS( bob.attack(&alis));   
}

// Cowboy fuction


TEST_CASE("Cowboy shoot"){

    TrainedNinja b("Adi", Point(1,0));
    Cowboy C("Matan", Point(0,1));
    C.shoot(&b);
    while (b.isAlive())
    {
         C.shoot(&b);
    }
    CHECK_THROWS(C.shoot(&b));
    CHECK_FALSE(b.isAlive());
}
TEST_CASE("Cowboy hasboolets"){

    TrainedNinja b("Adi", Point(1,0));
    Cowboy C("Matan", Point(0,1));
    C.shoot(&b);
    while (C.hasboolets())
    {
         C.shoot(&b);
    }
    CHECK_THROWS(C.shoot(&b));
    C.reload();
    for(int i=0; i<7; i++){
        if(b.isAlive()){
            C.shoot(&b);
        }
    }
    CHECK_THROWS(C.shoot(&b));

}
// allNinja fuction

// TEST_CASE("allNinja fuction"){


// }


// Char fuction

TEST_CASE("Character fuction"){
    YoungNinja b("Matan",Point(0,1));
   // TrainedNinja
    Cowboy d("adi", Point(3,4));

    Point loc = b.getLocation();
    Point loc2 = d.getLocation();
    CHECK_EQ(loc.Get_X(), loc2.Get_X());
    CHECK_EQ(loc.Get_Y(), loc2.Get_Y());
    double dis = loc.distance(d.getLocation());
    b.move(&d);


    double dis_b = loc.distance(b.getLocation());
    int speed = b.get_speed();
    CHECK(int(dis_b+0.9)<= speed);



    Point loc3 = b.getLocation();
    double x3 = loc3.Get_X();
    double y3 = loc.Get_Y();
    bool x = ((x3 == loc.Get_X()));
    bool y = y3 == loc.Get_Y();
    CHECK_FALSE((x && y));
    double dis2= loc3.distance(d.getLocation());
  


    CHECK(dis2<dis);
    while(dis2 !=0){ 
        b.move(&d);

        dis2= b.getLocation().distance( d.getLocation()); 
     }//18
     CHECK_EQ(dis2,0);

}





     // Character(Point loc, int target, string name);
        // Character(string name, Point loc);

        // Point getLocation();
        // int getTarget();
        // string getName();

        // void Set_location(Point poin);
        // void Set_target(int tar);
        // //void Set_name(string nam);

        // bool isAlive();
        // double distance(Character* other);
        // void hit(int count_hit);
        // string print();

};
