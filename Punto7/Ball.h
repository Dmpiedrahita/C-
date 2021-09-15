#ifndef BALL_H
#define BALL_H

class Ball
{
	private:
		double x;
		double y;
		double xSpeed;
		double ySpeed;
	public:
		Ball(double x=0,double y=0,double xSpeed=0,double ySpeed=0);
	double getX() const;
	double getY() const;
	double getXSpeed() const;
	double getYSpeed() const;
	void setX(double x);
	void setY(double y);
	void setXSpeed(double xSpeed);
	void setYSpeed(double ySpeed);
	void setXY(double x,double y);
	void setXYSpeed(double xSpeed, double ySpeed);
	void move();
	void print();	
};

#endif
