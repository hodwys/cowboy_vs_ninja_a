    
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
using namespace std;

//using namespace ariel;
namespace ariel{
 
   
Point::Point(){
    this->X = 0;
    this->Y = 0;
}

Point::Point(double poin_x, double poin_y) : X(poin_x), Y(poin_y){
// this->X = poin_x;
// this->Y = poin_y;
}


double Point:: Get_X(){
    return this->X;
}

double Point::Get_Y(){
    return this->Y;
}

void Point::Set_x(double poin_x){
    this->X=poin_x;
}

void Point::Set_Y(double poin_y){
    this->Y =poin_y;
}

double Point::distance(Point poin){
    
    return 0;
}

void Point::print(Point poin){
    cout<<"("<<poin.Get_X() << "," << poin.Get_Y()<<")"<<endl;
}

Point Point::moveTowards(Point start, Point end, double dist){
    Point temp(0,0);
    return temp;
}

}