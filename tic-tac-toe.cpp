#include <iostream>
using namespace std;
int main()
{
	int ticTacToe[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
	int player = 2;
	int row, col;
	bool isDraw = false;
	for (int i = 0; i < 9; i++)
	{
		cout << "Player " << player << " enter row and column: ";
		cin >> row >> col;
		if (ticTacToe[row][col] == 0)
		{
			ticTacToe[row][col] = player;
			if (ticTacToe[0][0] == player && ticTacToe[0][1] == player && ticTacToe[0][2] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if (ticTacToe[1][0] == player && ticTacToe[1][1] == player && ticTacToe[1][2] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if (ticTacToe[2][0] == player && ticTacToe[2][1] == player && ticTacToe[2][2] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if (ticTacToe[0][0] == player && ticTacToe[1][0] == player && ticTacToe[2][0] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if (ticTacToe[0][1] == player && ticTacToe[1][1] == player && ticTacToe[2][1] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if (ticTacToe[0][2] == player && ticTacToe[1][2] == player && ticTacToe[2][2] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if (ticTacToe[0][0] == player && ticTacToe[1][1] == player && ticTacToe[2][2] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if ()
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else if (ticTacToe[0][2] == player && ticTacToe[1][1] == player && ticTacToe[2][0] == player)
			{
				cout << "Player " << player << " wins!" << endl;
				break;
			}
			else
			{
				if (player == 1)
				{
					player = 2;
				}
				else
				{
					player = 1;
				}
			}									
		}
	}

}