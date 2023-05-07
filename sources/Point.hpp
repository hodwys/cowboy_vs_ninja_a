#ifndef POINT_HPP
#define POINT_HPP


#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

using namespace ariel;



class Point{

    double X;
    double Y;

    public:
        Point();
        Point(double x, double y);

        double Get_X();
        double Get_Y();
        void Set_x();
        void Set_Y();

        double distance(Point poin);
        void print(Point poin);

        Point moveTowards(point start, point end, double dist);

}

#endif