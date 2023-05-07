#ifndef POINT_HPP
#define POINT_HPP


#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

//using namespace ariel;



class Point{

    double X;
    double Y;

    public:
        Point();
        Point(double x, double y);

        double Get_X();
        double Get_Y();
        void Set_x(double x);
        void Set_Y(double y);

        double distance(Point poin);
        void print(Point poin);

        Point moveTowards(Point start, Point end, double dist);

};


#endif