#include <iostream>
using namespace std;

typedef int Data;

struct Slot 
{
    Data value;
    int key;
};

struct Node 
{
    Slot slot;
    Node* next;
};

int main() 
{
	Node table[10];


	Slot slot;
	for(int i=0; i<1; i++){
		cin >> slot.value;
		slot.key = slot.value;
	}

}