#ifndef POINT_H
#define POINT_H
#include <cmath>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point(int x,int y);
		int getX() const;
		int getY() const;
		void setX(int x);
		void setY(int y);
		void setXY(int x, int y);
		double getMagnitude();
		double getArgument();
		void print() const;
	
};

#endif
