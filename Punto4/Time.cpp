#include "Time.h"

Time::Time(int h,int m,int s){
	hour=h;
	minute=m;
	second=s;
}

int Time::getHour() const{
	return hour;
}

int Time::getMinute()const {
	return minute;
}

int Time::getSecond() const{
	return second;
}

void Time::setHour(int h){
	if (h>=0 && h<=23){
		this->hour=h;
	}
}

void Time::setMinute(int m){
	if (m>=0 && m<=59){
		this->minute=m;
	}
}

void Time::setSecond(int s){
	if (s>=0 && s<=59){
		this->second=s;
	}
}

void Time::setTime(int h,int m, int s){
	this->hour=h;
	this->minute=m;
	this->second=s;
	
}

void Time::nextSecond(){
	this->second++;
	if (second==60 ){
		this->second=0;
		this->minute++;
		if(minute==60){
			this->minute=0;
			this->hour++;
			if(hour==24){
				hour=0;
			}
		}
	}
}

void Time::print(){
	cout<<endl<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setfill('0')<<setw(2)<<second;
}

