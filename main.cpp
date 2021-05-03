#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Node 
{
	int Val;
	Node* Next;
};

Node* createNodesWithArray(int *a, int length) 
{
	Node* head = new Node;
	head->Val = *a;
	Node* p = head;
	for (int i = 1; i < length; i++) 
	{
		p->Next = new Node;
		p = p->Next;
		p->Val = a[i];
	}
	return head;
}

void printNodes(Node* head) 
{
	Node* nodes = head;
	if (!nodes) { return; }
	cout << nodes->Val;
	while (nodes->Next)
	{
		cout << '\t';
		nodes = nodes->Next;
		cout << nodes->Val;
	}
	return;
}

int main()
{
	int a[4] = { 1,2,3,4 };
	int* aa = a;
	Node* nodes = createNodesWithArray(aa, 4);
	printNodes(nodes);
}