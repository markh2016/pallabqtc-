#ifndef CALCULATEAREAS_H
#define CALCULATEAREAS_H

#include <QObject>
#include <cmath> // use for maths  functions
#include <QDebug>
#include <iostream>

using namespace std;

class CalculateAreas : public QObject
{
    Q_OBJECT



public:


    explicit CalculateAreas(QObject *parent = nullptr); // constructor in qt


    ~ CalculateAreas() ; // detsructor used to clean up usually and the  destroy object  created in main



   /* these are the functions we will use to do the maths */



    void calcRect() ;

    void calcTriangle() ;

    void calcScaleneTriangle() ;

    void calcEquiLateralTriangle() ;

    void calcRightAngleTriangle() ;

    void calcSquare();

    void calcCircle() ;

    void showResult(string message , double area , string units ) ; // shows the answer on console


    double answer = 0.0 ; // where we will store result  from  each area calculation

private :

    // our  global  variables that we will use and request from user within this class

    double length ;

    double width ;









signals:

};

#endif // CALCULATEAREAS_H
