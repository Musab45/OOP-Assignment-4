//#include<iostream>
//#include<list>
//using namespace std;
//
//void printList(list<int> x)
//{
//	cout << "{ ";
//	for (auto i : x)
//	{
//		cout << i << " ";
//	}
//	cout << " }" << endl;
//}
//int main()
//{
//	list<int> list1{ 12,23,4,124 };
//	list<int> list2{ 1,43,55,87,6 };
//	
//	cout << "Unsorted lists: " << endl;
//	printList(list1);
//	printList(list2);
//
//	cout << endl;
//
//	list1.sort();
//	list2.sort();
//	cout << "Sorted list: " << endl;
//	printList(list1);
//	printList(list2);
//
//	cout << endl;
//
//	cout << "Merged List: " << endl;
//	list1.merge(list2);
//	printList(list1);
//}