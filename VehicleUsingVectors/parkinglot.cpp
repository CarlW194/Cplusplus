#include <iostream>
#include <vector>
#include <algorithm>
#include "parkinglot.h"
#include "vehicle.h"
using std::cout;

ParkingLot::ParkingLot(){
}

ParkingLot::~ParkingLot(){
	
}

void ParkingLot::addVehicle(Vehicle *v){
	vehicles.push_back(v);
	count++;
}

int ParkingLot::getVehicleCount() const{
	return count;
}

void ParkingLot::printVehicles() const{
	for(int i = 0; i < getVehicleCount(); i++)
		vehicles[i]->print();
	
}
	
