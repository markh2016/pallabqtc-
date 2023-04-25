#include <QCoreApplication>
#include "calculateareas.h"


using namespace std ;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   CalculateAreas * objectPointer = new CalculateAreas ;

   int selection = 0;

   do {

    cout << "Please select one of the following   \n" << endl ;
    cout << "Enter a your section based on area of shape you want to calculate \n"<<
        "1=circle \n2=square \n3=rectangle \n4=equilateralTriangle \n5=rightAngledTriangle \n6=scaleneTriangle \n7= Exit programe "<< endl ;


    cout << "Type a number: " ;

    cin >> selection ;

    cout << "You chose "  << selection  << endl;
    if(selection==7)
    {
         cout << "About to exit programe " << endl ;
    }

        switch(selection){



        case 1:
            objectPointer->calcCircle() ;
         break ;

        case 2:

            objectPointer->calcSquare() ;
            break ;

        case 3:

           objectPointer->calcRect()  ;

        break ;

        case 4:

             objectPointer->calcEquiLateralTriangle()  ;
            break ;

        case 5:

            objectPointer->calcRightAngleTriangle() ;
            break ;

        case 6:

            objectPointer->calcScaleneTriangle() ;
            break ;

        }
   } while (selection > 0 && selection < 7) ;


   cout << "Hows that for you  ***** PALLAB NANDI **** Using qt C++ \n"<<
       "But I'm sure  you can improve this and use  GUI  with error checking instead " << endl ;


   cout << "Deleting objectPointer " << endl ;

       delete objectPointer ;


   // return a.exec();

        return 0 ;
}
