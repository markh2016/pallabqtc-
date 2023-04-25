#include "calculateareas.h"

CalculateAreas::CalculateAreas(QObject *parent)
    : QObject{parent}
{
    qDebug() << "Im  now constructing object of type CalculateAreas" <<"\nCreated for a friend of mine studying\n"<<
        "Simple Qt Console application using qt c++ Version 6.2.0 on debian11 linux platform \n ";
}


CalculateAreas::~CalculateAreas()
{
 qDebug() << "Im  now destructor object of type CalculateAreas" ;
}




void CalculateAreas::calcRect()
{
 string unit;

 cout << "Enter the units of the dimensions (mm, cm, or m): ";
 cin >> unit;
 cout << "Enter the length of a rectangle: ";
 cin >> length;
 cout << "Enter the breadth of a rectangle: ";
 cin >> width;


 answer = length * width;
 this->showResult("The area of the rectangle is " , answer , unit) ;

}

void CalculateAreas::calcScaleneTriangle()
{
 double a, b, c ,s;
 string unit;
 cout << "Enter the units of the dimensions (mm, cm, or m): ";
 cin >> unit;

 cout << "Enter the length of side a of a scalene triangle: ";
 cin >> a;
 cout << "Enter the length of side b of a scalene triangle: ";
 cin >> b;
 cout << "Enter the length of side c of a scalene triangle: ";
 cin >> c;


 s = (a + b + c) / 2;

answer = sqrt(s * (s-a) * (s-b) * (s-c));
this->showResult("The area of the scalene triangle is " , answer , unit) ;



}

 void CalculateAreas::calcEquiLateralTriangle()
{
double a;
string unit;
cout << "Enter the units of the dimension (mm, cm, or m): ";
cin >> unit;

cout << "Enter the length of a side of an equilateral triangle: ";
cin >> a;


this->showResult("The area  of this equilateral triangle  is : " , answer ,  unit);

}

void CalculateAreas::calcRightAngleTriangle()
{
double base, height;
string unit;
cout << "Enter the units of the dimension (mm, cm, or m): ";
cin >> unit;

cout << "Enter the base of the right-angle triangle: ";
cin >> base;
cout << "Enter the height of the right-angle triangle: ";
cin >> height;


answer = base * height / 2.0;

this->showResult("The area  of this  right angled triangle  is : " , answer ,  unit);

}

void CalculateAreas::calcSquare()
{
double side;
string unit;

cout << "Enter the units of the dimension (mm, cm, or m): ";
cin >> unit;

cout << "Enter the side length of the square: ";
cin >> side;

answer = side * side;

this->showResult("The area  of this square is : " , answer ,  unit);



}

void CalculateAreas::calcCircle()
{

  double radius;
  string unit;
  cout << "Enter the units of the radius (mm, cm, or m): ";
  cin >> unit;
  cout << "Enter the radius of a circle: ";
  cin >> radius;


  const double pi = 3.14159;
  answer = pi * radius * radius;

  showResult("The area  of this circle is : " , answer ,  unit);
}

void CalculateAreas::showResult(string message, double area, string units)
{

      cout << message << " " << area << " " << units << "^2" << endl ;

}




