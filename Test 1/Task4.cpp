#include<iostream>
#include<list>
#include<string>
using namespace std;

void printTasks(const list<list<string>>& x) {
    for (const auto& row : x) {
        for (string val : row) cout << val << endl;
        cout << endl;
    }
}

void addMatrix(list<string>& x)
{
    cout << endl;
    string input;
    for (int i = 1; i <= 3; i++)
    {
		getline(cin, input);
        x.push_back(input);
    }
}

int main()
{
    list<list<string>> tasks;
	list<string> new_tasks;
    char choice;
    do
    {
		cout << "1. View Tasks" << endl; 
		cout << "2. Add Tasks" << endl; 
		cout << "3. Delete Tasks" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case '1':
			printTasks(tasks);
			break;
		case '2':
			addMatrix(new_tasks);
			tasks.push_back(new_tasks);
			break;
		case '3':
			if (tasks.size() > 0)
			{
				tasks.pop_back();
			}
			else
			{
				cout << "No tasks left!" << endl;
			}
			break;
		case '4':
			break;
		default:
			cout << "Invalid choice! Try Again" << endl;
			break;
		}
		cout << endl;
    } while (choice != '4');
	printTasks(tasks);
}