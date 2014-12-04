#include <iostream>
#include <cstring>
using namespace std;

void print_string_array(char str[]){
int counter=0;
while(str[counter]!='\0'){
cout << "Character at position " << counter << " is " << str[counter] << endl;
counter++;
}
}

void print_string_ptr(char *str){
cout << endl << *str;
}


int main(){
char array[] ="hello";
print_string_array(array);
char *str;
for(int j=0;j<5;j++){
str=&array[j];
print_string_ptr(str);
}
}

