#include <iostream>
#include <vector>

template <typename T, size_t size>
void Print (T (&array)[size]) 
{ 
    for(int x=0; x<size;x++){
    	std::cout << array[x] << " "; 
	}
	 
} 

template <typename T>
void foo(std::vector<T> v){
	typename std::vector<T>::iterator i; //All is good again!
	for(i=v.begin(); i!=v.end(); ++i)
			std::cout << *i << ' ';

}
