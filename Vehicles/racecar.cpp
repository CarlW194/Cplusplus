// Chapter 9 of C++ How to Program
// racecar.cpp
#include <iostream>

using std::cout;
using std::endl;

#include "racecar.h"

// constructor
Racecar::Racecar( string n, string c, string s ): Car(n, c)
   /* Write code to call base-class constructor */
{	
   /* Write code to copy s into private data member sponsor */

   sponsor = s;
   gearbox = 6;
   parachuteDeployed = false;

} // end class Racecar constructor

// function setGearbox definition
void Racecar::setGearbox( int gears )
{
   gearbox = ( ( gears <= 10 && gears >= 0 ) ? gears : 6 );

} // end function setGearbox

// function useParachute definition
void Racecar::useParachute() 
{
   parachuteDeployed = true;

} // end function useParachute

// function print definition
void Racecar::print() const
{
   /* Write statement that calls base-class member function print here */
   cout << getName() << " also has " << gearbox 
        << " gears and is sponsored by " << sponsor << ". ";

   if ( parachuteDeployed )
   	//Super* pSuper = mySub;
	//pSuper->someMethod();
      cout << /* Write statement that accesess base-class version of name here */ Car::getName()
           << " has used its parachute." << endl;
   else
      cout << /* Write statement that accesess base-class version of name here */ Car::getName()
           << " has not used its parachute." << endl;

} // end function print
