// Chapter 9 of C++ How to Program
// car.h
#ifndef CAR_H
#define CAR_H

#include <iostream>

#include <string>

using std::string;

// class car definition
class Car {

public:
   Car( string name, string color );

   void setMaxSpeed( int );
   int getMaxSpeed() const;

   void setEngineValves( int );
   int getEngineValves() const;

   string getColor() const;
   string getName() const;

   void print() const;

private:
   int maxSpeed;
   int engineValves;
   string color;
   string name;

}; // end class Car

#endif // CAR_H
