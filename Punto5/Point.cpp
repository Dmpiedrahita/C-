#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x,int y){
	this->x=x;
	this->y=y;
}

int Point::getX() const{
	return x;
}

int Point::getY() const{
	return y;
}

void Point::setX(int x){
	this->x=x;
}

void Point::setY(int y){
	this->y=y;
}

void Point::setXY(int x,int y){
	this->x=x;
	this->y=y;
}

double Point::getMagnitude(){
	return sqrt(x*x+y*y);
}

double Point::getArgument(){
	return atan2(y,x);
}

void Point::print() const{
	cout<<"El valor de x es: "<<this->x<<" el valor de y es: "<<this->y<<endl;
}
