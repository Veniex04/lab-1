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
					break;	
				}
                return 0;
	    
     
		case 2:	
		    cout << "               \n";
			cout << "Enter the Directory name: ";
		    cout << "NewFolder\n";
		    cout << "Current directory: ";
		    cout << "C: ";
		    cin >> choice;
            cout << "NewFolder Directory Successfully Created\n";
			break;
	
	    case 3:
            cout << "Current directory: C:\n";
            cout << "          Change directory\n";
            cout << "     _ _ _ _ _ _ _ _ \n";
            cout << "1. Step by Step Backward\n";
            cout << "2. Go to Root Directory\n";
            cout << "3. Forward Directory\n";
            cout << "Enter the Number: ";
            cin >> choice;
                
            switch (choice) {
                case 1:
                    cout << "Step by Step Backward selected.\n";
                    break;
                case 2:
                    cout << "Go to Root Directory selected.\n";
                    break;
                case 3:
                    cout << "Please enter the Directory name:";
                    cin >> choice;
                    cout << "Current directory: ";
                    cout << "C: ";
                    cin >> choice;
                    break;
                default:
                    cout << "Invalid choice for directory change.\n";
                    break;
            }
            break;
                
        case 4:
            cout << "Exiting program...\n";
            return 0;
                
        default:
            cout << "Invalid menu choice.\n";
            break;
        }
        	
	
}


