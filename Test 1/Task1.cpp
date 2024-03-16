//#include<iostream>
//using namespace std;
//
//class Node
//{
//public:
//	int value;
//	Node* next;
//	Node* prev;
//};
//
//void printList(Node* n)
//{
//	while (n->next != NULL)
//	{
//		cout << n->value << " ";
//		n = n->next;
//	}
//}
//
//void printListRev(Node* n)
//{
//	cout << endl;
//	while (n->prev != NULL)
//	{
//		cout << n->value << " ";
//		n = n->prev;
//	}
//}
//
//void searchList(int i, Node* n)
//{
//	cout << endl;
//	while (n->next != NULL)
//	{
//		if (i == n->value)
//		{
//			cout << endl;
//			cout << "ELement Found! : " << n->value << endl;
//			break;
//		}
//		else
//		{
//			n = n->next;
//		}
//	}
//	if (i != n->value)
//	{
//		cout << endl;
//		cout << "Element not found!" << endl;
//	}
//}
//
//int main()
//{
//	Node* head = new Node();
//	Node* second = new Node();
//	Node* third = new Node();
//
//	head->value = 1;
//	head->next = second;
//	head->prev = NULL;
//
//	second->value = 2;
//	second->next = third;
//	second->prev = head;
//
//	third->value = 3;
//	third->next = NULL;
//	third->prev = second;
//
//	printList(head);
//
//	printListRev(third);
//
//	searchList(2, head);
//	searchList(5, head);
//
//	return 0;
//}