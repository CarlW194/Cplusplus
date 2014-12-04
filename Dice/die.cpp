#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"
using namespace std;

int die::dieNum(int side){
	if(side<4){
		side=6;
		cout << "There was an error in size so now it is 6 HAHA!!" << endl;
		numside_=side;
	}
	else{
		numside_=side;
	}
	value_+=side;
	return side;
}

//sets number dice rolled
int die::roll(){
	int roll=rand() % numside_ + 1;
	return roll;
}

int die::getValue(){
	return value_;
}

int die::getNumsides(){
	return numside_+(value_-numside_)-1;
}
