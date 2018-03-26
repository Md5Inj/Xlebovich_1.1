#include "MyApplication.h"

MyApplication::MyApplication()
{
    List l;
	char input = 0;
	int keyCode = 0, choice = 0;
    string s;
    char c[30];

	while ((int)input != 48)
	{
		cout << "1 - Add the element to array" << endl
			 << "2 - Print a array" << endl
			 << "3 - Remove the element" << endl
			 << "4 - Get element from date" << endl
			 << "5 - Get element from phone" << endl
             << "6 - Sort the array" << endl
			 << "0 - Exit" << endl;
		
		cin >> input;
		keyCode = (int)input;
		
		switch (keyCode) 
		{
			case 49:
			{
                l.Add();
				break;
			}

			case 50:
			{
				l.Print();
				break;
			}

			case 51:
			{
				cout << "Input the surname to delete: "; getline(cin, s);
				l.Remove(s);
				break;
			}

			case 52:
			{
				cout << "Input the date: "; cin >> c;
                (*l.GetFromDate(c)).Print();
				break;
			}

			case 53:
			{
				cout << "Input the phone: "; cin >> c;
                (*l.GetFromPhone(c)).Print();
				break;
			}

            case 54:
            {
                cout << "Input variant of sort(0 - surname, 1 - date, 2 - phone): "; cin >> choice;
                l.Sort(choice);
                break;
            }
		}

		system("read _");
		system("clear");
	}
}

MyApplication::~MyApplication()
{

}