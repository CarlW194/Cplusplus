#include <string>
using namespace std;

struct customer{
	string name;
	customer *next;
}*c;


void print_customer(customer *head);

customer *create_list(string name);

void insert_name(customer* head, string name);

int list_length(customer* head);



