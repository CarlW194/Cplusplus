#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
   Taxi *cab; 
   cab=new Taxi(3.3);
   Truck *mack;
   mack=new Truck( 7.64 );
   Taxi *cab2;
   cab2=new Taxi(4.8);
   Truck *mack2;
   mack2=new Truck( 9.4 );
   Taxi *cab3;
   cab3=new Taxi(5.5);
   Truck *mack3;
   mack3=new Truck( 10.74 );
   Taxi *cab4;
   cab4=new Taxi(6.3);
   Truck *mack4;
   mack4=new Truck( 2.99 );
   Taxi *cab5;
   cab5=new Taxi(5.4);
   Truck *mack5;
   mack5=new Truck( 9.49 );

   mack->setCargo(true);

   vector<Vehicle *> parkingLot;

   parkingLot[ 0 ] = cab;
   parkingLot[ 1 ] = mack;
   parkingLot[ 2 ] = cab2;
   parkingLot[ 3 ] = mack2;
   parkingLot[ 4 ] = cab3;
   parkingLot[ 5 ] = mack3;
   parkingLot[ 6 ] = cab4;
   parkingLot[ 7 ] = mack4;
   parkingLot[ 8 ] = cab5;
   parkingLot[ 9 ] = mack5;

   cout << "\nThe vehicles cannot get out of their parking spaces because of "
        << "traffic,\nso they respond: \n";

   for ( int i = 0; i < parkingLot.size(); i++ ) {

      parkingLot[i]->horn();

      cout << endl;

      parkingLot[i]->print();

      cout << endl;

   } // end for
	delete cab;
	delete mack;
   return 0;

}
