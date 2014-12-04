#include <iostream>
#include <cstring>
using namespace std;

int my_string_len(char str[]){
int counter=0;
while(str[counter]!='\0'){
cout << "Character at position " << counter << " is " << str[counter] << endl;
counter++;
}
return counter;
}

void my_string_cat(char dest[], char src[], int dest_size){
cout << strcat(src,dest) << endl;
}

int main(){
char array1[] = "Carl";
char array2[] = "Jack";
int len1=0,len2=0;
len1=my_string_len(array1);
len2=my_string_len(array2);
int size=len1+len2;
my_string_cat(array2,array1,size);
}
