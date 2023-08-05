#include<iostream>
#include<string>
using namespace std;

string input(string a, string b)
{
	string g;
	cout << "Who Wanna Play First !!!! " << endl;
	getline(cin, g);
	if (g == a)
	{
		return a;
	}
	else
	{
		return b;
	}

}

void display(char arr[3][3], string a, string b, string y)
{
	int flag = 1;
	string turn = y;
	system("CLS");
	cout << endl << endl;
	cout << "\t\t\t\t ! TIC TAC TOE GAME ! " << endl << endl<<endl;
	cout << "\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t  " << arr[0][0] << "  |" << "  " << arr[0][1] << "  |" << "  " << arr[0][2] << "  \n";
	cout << "\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t_____ _____ _____\n";
	cout << "\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t  " << arr[1][0] << "  |" << "  " << arr[1][1] << "  |" << "  " << arr[1][2] << "  \n";
	cout << "\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t_____ _____ _____\n";
	cout << "\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t  " << arr[2][0] << "  |" << "  " << arr[2][1] << "  |" << "  " << arr[2][2] << "  \n";
	cout << "\t\t\t\t     |     |     \n";
	cout << endl << endl;


}

void game(string l, string j, string k, char arr[3][3])
{
	int flag=0;
	int choice = 0;
	string turn;
	if (k == l)
	{
		turn = l;
		while (flag == 0)
		{
			if (turn == l)
			{
				cout << l << " " << "Please ! Enter Your Move ! : ";
				cin >> choice;
				if (choice > 9 || choice < 1)
				{
					cin >> choice;
				}
			}
			else if (turn == j)
			{
				cout << j << " " << "Please ! Enter Your Move ! : ";
				cin >> choice;
				if (choice > 9 || choice < 1)
				{
					cin >> choice;
				}
			}

			switch (choice)
			{
			case (1):
				if (turn == l)
				{
					arr[0][0] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[0][0] = 'O';
					break;
				}
			case (2):
				if (turn == l)
				{
					arr[0][1] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[0][1] = 'O';
					break;
				}
			case (3):
				if (turn == l)
				{
					arr[0][2] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[0][2] = 'O';
					break;
				}
			case (4):
				if (turn == l)
				{
					arr[1][0] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[1][0] = 'O';
					break;
				}
			case (5):
				if (turn == l)
				{
					arr[1][1] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[1][1] = 'O';
					break;
				}
			case (6):
				if (turn == l)
				{
					arr[1][2] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[1][2] = 'O';
					break;
				}
			case (7):
				if (turn == l)
				{
					arr[2][0] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[2][0] = 'O';
					break;
				}
			case (8):
				if (turn == l)
				{
					arr[2][1] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[2][1] = 'O';
					break;
				}
			case (9):

				if (turn == l)
				{
					arr[2][2] = 'X';
					break;
				}
				else if (turn == j)
				{
					arr[2][2] = 'O';
					break;
				}

			default:
				cout << "Invalid move !!";
			}
		
				display(arr, l, j, k);
				
				 if (turn == l)
				{

					if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' || arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
					{
						cout << "Congratulations !! " << l << " you WINS ! " << endl << endl;
						flag = 1;
						break;

					}
					else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' || arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' || arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' || arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
					{
						cout << "Congratulations !! " << j << " you WINS ! " << endl << endl;
						flag = 1;
						break;
					}
					else if (arr[0][0] != '1' && arr[0][1] != '2' && arr[0][2] != '3' && arr[1][0] != '4' && arr[1][1] != '5' && arr[1][2] != '6' && arr[2][0] != '7' && arr[2][1] != '8' && arr[2][2] != '9')
					{


						flag = 1;
						cout << "Oops !! Game is DRAW !! " << endl << endl;
						break;

					}
				}
				else if (turn == j)
				{

					if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' || arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
					{
						cout << "Congratulations !!  " << j << " you WINS ! " << endl << endl;
						flag = 1;
						break;
					}
					else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' || arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' || arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' || arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
					{
						cout << "Congratulations !! " << l << " you WINS ! " << endl << endl;
						flag = 1;
						break;
					}
					else if (arr[0][0] != '1' && arr[0][1] != '2' && arr[0][2] != '3' && arr[1][0] != '4' && arr[1][1] != '5' && arr[1][2] != '6' && arr[2][0] != '7' && arr[2][1] != '8' && arr[2][2] != '9')
					{


						flag = 1;
						cout << "Oops !! Game is DRAW !! " << endl << endl;
						break;

					}

				}
				if (turn == l)
				{
					turn = j;
				}
				else if (turn == j)
				{
					turn = l;
				}
			

		}

	}
	else if (k == j)
	{
		turn = j;
		while (flag == 0)
		{
			if (turn == l)
			{
				cout << l << " " << "Enter Your Move ! : ";
				cin >> choice;
				if (choice > 9 || choice < 1)
				{
					cin >> choice;
				}
			}
			else if (turn == j)
			{
				cout << j << " " << "Enter Your Move ! : ";
				cin >> choice;
				if (choice > 9 || choice < 1)
				{
					cin >> choice;
				}
			}

			switch (choice)
			{
			case (1):
				if (turn == l)
				{
					arr[0][0] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[0][0] = 'X';
					break;
				}
			case (2):
				if (turn == l)
				{
					arr[0][1] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[0][1] = 'X';
					break;
				}
			case (3):
				if (turn == l)
				{
					arr[0][2] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[0][2] = 'X';
					break;
				}
			case (4):
				if (turn == l)
				{
					arr[1][0] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[1][0] = 'X';
					break;
				}
			case (5):
				if (turn == l)
				{
					arr[1][1] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[1][1] = 'X';
					break;
				}
			case (6):
				if (turn == l)
				{
					arr[1][2] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[1][2] = 'X';
					break;
				}
			case (7):
				if (turn == l)
				{
					arr[2][0] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[2][0] = 'X';
					break;
				}
			case (8):
				if (turn == l)
				{
					arr[2][1] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[2][1] = 'X';
					break;
				}
			case (9):

				if (turn == l)
				{
					arr[2][2] = 'O';
					break;
				}
				else if (turn == j)
				{
					arr[2][2] = 'X';
					break;
				}

			default:
				cout << "Invalid move !!";
			}
			
			display(arr, l, j, k);
		
			 if (turn == l)
			{

				if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' || arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
				{
					cout << "Congratulations !! " << l << " you WINS ! " << endl << endl;
					flag = 1;
					break;

				}
				else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' || arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' || arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' || arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
				{
					cout << "Congratulations !! " << j << " you WINS ! " << endl << endl;
					flag = 1;
					break;
				}
				else if (arr[0][0] != '1' && arr[0][1] != '2' && arr[0][2] != '3' && arr[1][0] != '4' && arr[1][1] != '5' && arr[1][2] != '6' && arr[2][0] != '7' && arr[2][1] != '8' && arr[2][2] != '9')
				{
					flag = 1;
					cout << "\t\t\t\t\tOops !! Game is DRAW !! " << endl << endl;
					break;

				}
			}
			else if (turn == j)
			{

				if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' || arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' || arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
				{
					cout << "Congratulations !!  " << j << " you WINS ! " << endl << endl;
					flag = 1;
					break;
				}
				else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' || arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' || arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' || arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
				{
					cout << "Congratulations !! " << l << " you WINS ! " << endl << endl;
					flag = 1;
					break;
				}
				else if (arr[0][0] != '1' && arr[0][1] != '2' && arr[0][2] != '3' && arr[1][0] != '4' && arr[1][1] != '5' && arr[1][2] != '6' && arr[2][0] != '7' && arr[2][1] != '8' && arr[2][2] != '9')
				{
					flag = 1;
					cout << "\t\t\t\t\tOops !! Game is DRAW !! " << endl << endl;
					break;

				}


			}

			if (turn == j)
			{
				turn = l;
			}
			else if (turn == l)
			{
				turn = j;
			}
			
		}
	}


}
int main()
{
	char g;
	do {
		string a, b, c;
		int flag = 1;
		
		system("CLS");
		cout << "\t\t\t\t\t ! TIC TAC TOE GAME ! " << endl << endl;
		cout << "Enter The Name Of First Player : " << endl;
		getline(cin, a);
		cout << endl << "Enter The Name Of Second Player : " << endl;
		getline(cin, b);
		cout << endl;
		string y = input(a, b);
		system("CLS");
		cout << "\t\t\t\t Lets Play !!!" << endl << endl;
		char x[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };

		display(x, a, b, y);

		game(a, b, y, x);
		
		cout << endl << endl << "DO YOU WANNA CONTINUE !!!  " << endl;
		cin >> g;
	} while (g == 'y' || g == 'Y');





	system("pause");
	return 0;
}