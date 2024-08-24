#include <iostream>

using namespace std;

void displayMainMenu();

int main() {
	int choice;
	cout << "       MAIN MENU  \n";
	cout << "_ _ _ _ _ _ _ _ _ _ _ _\n";
	cout << "1. To Display List of Files\n";
	cout << "2. To Create New Directory\n";
	cout << "3. To Change the Working Directory\n";
	cout << "4. Exit\n";
	cout << "Enter the Number: ";
	cin >> choice;
	
	switch (choice){
		case 1:
			cout << "               \n";
			cout << "LIST FILE DETAIL\n";
			cout << "_ _ _ _ _ _ _ _ \n";
			cout << "1. List All Files\n";
			cout << "2. List of Extension Files\n";
			cout << "3.List of Name Wise\n";
			cout << "Enter the Number: ";
			cin >> choice;
			
			
			switch (choice){
				case 1:
					cout << "               \n";
					cout << "List of All (*.*) Files\n";
					cout << "file1.txt\n";
					cout << "file2.cpp\n";
			     	cout << "report.doc\n";
			     	cout << "image.jpg\n";
			    	cout << "(continues...)\n";
			    	cout << "               \n";
			    	cout << "Total Files: ";
			    	cin >> choice;	
			    	system("dir");
					break;	
			}

		case 2:	
		    cout << "Enter the Directory name: ";
		    cout << "NewFolder\n";
		    cout << "Current directory: ";
		    cout << "C: ";
			break;
		
	}
}


