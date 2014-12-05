#include <iostream>
#include "printer.h"
using namespace std;

int main ()
{
 	
    int i[] = {39,56,9};
    int size=3;
    Print(i); 
    
    vector<int> col;
	for(int i=1; i<=6; ++i){
		col.push_back(i);
	}
	
	foo(col);

   return 0;
}
