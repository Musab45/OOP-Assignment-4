//#include<iostream>
//#include<list>
//#include<string>
//using namespace std;
//
//void printMatrix(const list<list<int>>& x) {
//	for (const auto& row : x) {
//		for (int val : row) cout << val << "\t";
//		cout << endl;
//	}
//}
//
//void addMatrix(list<int>& x)
//{
//	cout << endl;
//	int input;
//	for (int i = 1; i <= 3; i++)
//	{
//		cout << "Entry " << i << ":";
//		cin >> input;
//		x.push_back(input);
//	}
//}
//
//int main()
//{
//	list<list<int>> matrix
//	{
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//
//	list<int> input_list;
//	char choice;
//
//
//	do
//	{
//		cout << "1. View Matrix" << endl;
//		cout << "2. Add Row" << endl;
//		cout << "3. Delete Row" << endl;
//
//		cout << "Enter choice: ";
//		cin >> choice;
//
//		switch (choice)
//		{
//		case'1':
//			cout << endl;
//			printMatrix(matrix);
//			break;
//
//		case'2':
//			addMatrix(input_list);
//			matrix.push_back(input_list);
//			break;
//
//		case'3':
//			if (matrix.size() > 0)
//			{
//				matrix.pop_back();
//			}
//			else
//			{
//				cout << endl;
//				cout << "No more rows to remove!" << endl;
//			}
//			break;
//
//		case '4':
//			break;
//		default:
//			cout << "Invalid choice" << endl;
//		}
//		cout << endl;
//	} while (choice != '4');
//}