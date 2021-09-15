#include "Ball.h"
#include <iomanip>
#include <iostream>
using namespace std;


Ball::Ball(double x,double y,double xSpeed,double ySpeed){
	this->x=x;
	this->y=y;
	this->xSpeed=xSpeed;
	this->ySpeed=ySpeed;
}

double Ball::getX() const{
	return x;
}

double Ball::getY() const{
	return y;
}

double Ball::getXSpeed() const{
	return xSpeed;
}

double Ball::getYSpeed() const{
	return ySpeed;
}

void Ball::setX(double x){
	this->x=x;
}

void Ball::setY(double y){
	this->y=y;
}

void Ball::setXSpeed(double xSpeed){
	this->xSpeed=xSpeed;
}

void Ball::setYSpeed(double ySpeed){
	this->ySpeed=ySpeed;
}

void Ball::setXY(double x,double y){
	this->x=x;
	this->y=y;
}

void Ball::setXYSpeed(double xSpeed,double ySpeed){
	this->xSpeed=xSpeed;
	this->ySpeed=ySpeed;
}

void Ball::move(){
	this->x+=xSpeed;
	this->y=ySpeed;
}

void Ball::print(){
	cout<<"Ball @: "<<fixed<<setprecision(2)<<this->x<<", "<<this->y<<" con velocidad "<<this->xSpeed<<", "<<this->ySpeed<<endl;
}
