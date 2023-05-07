    
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
using namespace std;

//using namespace ariel;

 
   
Point::Point(){
    this->X = 0;
    this->Y = 0;
}

Point::Point(double x, double y){
this->X = x;
this->Y = y;
}


double Point:: Get_X(){
    return this->X;
}

double Point::Get_Y(){
    return this->Y;
}

void Point::Set_x(double x){
    this->X=x;
}

void Point::Set_Y(double y){
    this->Y =y;
}

double Point::distance(Point poin){
    
    return 1.1;
}

void Point::print(Point poin){
    cout<<"("<<poin.Get_X() << "," << poin.Get_Y()<<")"<<endl;
}

Point Point::moveTowards(Point start, Point end, double dist){
    Point temp(0,0);
    return temp;
}

