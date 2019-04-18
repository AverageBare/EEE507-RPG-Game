#include <iostream>
using namespace std;

int menu()
{
	int choice;

	// Menu opions - jmcm
	do
	{
		for(int loop=0; loop<10; loop++) cout << endl;
		char spacer[] = "                                          ";

		cout << endl
			<< spacer << "1 - START.\n"
			<< spacer << "2 - DIFICULTY.\n"  
			<< spacer << "3 - CREDITS.\n"
			<< spacer << "4 - HELP.\n"
			<< spacer << "5 - Exit.\n"
			<< spacer << "Enter your choice and press return: ";
		cin >> choice;

		switch (choice)
		{
			case 1:
				//code to start the game - jmcm
				int main();
			break;
			case 2:
				//code to set game dificulty - jmcm
			break;
			case 3:
				// credits - containing developers names - jmcm
			break;
			case 4:
				// instructional information to aid the player - jmcm
			break;
			case 5:
			cout << "End of Program.\n";
			break;
			default:
			cout << "Not a Valid Choice. \n"
			<< "Choose again.\n";
			break;

			return 0;
		}

	}
	while (choice !=5);
	return 0;
}


































