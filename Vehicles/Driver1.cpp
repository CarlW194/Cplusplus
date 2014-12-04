// Chapter 9 of C++ How to Program
// driver for race car and car
#include <iostream>

using std::cout;
using std::endl;

#include "car.h"
#include "racecar.h"

int main()
{
   Car chevy( "Chevrolette", "black" );

   cout << "chevy: \n";
   /* Write code to print Car object */

   Racecar f1( "Ferrari", "red", "Bug2Bug" );

   f1.setEngineValves( 40 );
   f1.setMaxSpeed( 220 );
   f1.setGearbox( 7 );
   f1.useParachute();

   cout << "\n\nf1: \n";
   f1.print();

   return 0;

} // end main

