#include <string>
using namespace std;

struct customer{
	string name;
	customer *next;
};

void print_customer(customer &head);

