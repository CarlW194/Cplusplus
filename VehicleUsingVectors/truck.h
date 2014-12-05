#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

#include "vehicle.h"

// class Truck definition
class Truck : public Vehicle {

public:
   Truck( double );

   bool hasCargo() const;
   void setCargo( bool );

   virtual void horn() const;
   virtual void print() const;
   virtual string getClassName() const;

private:
   bool cargo;

};
