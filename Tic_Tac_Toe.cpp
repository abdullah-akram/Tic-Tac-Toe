#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;





char arr[5][5] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', };



//DISPLAY TABLE
void display()
{
    cout << "\033[2J\033[1;1H";

    system("clear");

    cout << " WELCOME TO TIC TAC \n\n";
    cout << " PLAYER [X]\n PLAYER [O]\n";


    cout << "   ------------------------\n";
    cout << "     0   1    2    3    4 \n";
    cout << "   ------------------------\n";
    cout << "| |    |    |    |    |   \n";
    cout << "|0|  " << arr[0][0] << " |  " << arr[0][1] << " |  " << arr[0][2] << " |  " << arr[0][3] << " |  " << arr[0][4] << " \n";
    cout << "| |    |    |    |    |   \n";
    cout << "   ------------------------\n";
    cout << "| |    |    |    |    |   \n";
    cout << "|1|  " << arr[1][0] << " |  " << arr[1][1] << " |  " << arr[1][2] << " |  " << arr[1][3] << " |  " << arr[1][4] << " \n";
    cout << "| |    |    |    |    |   \n";
    cout << "   ------------------------\n";
    cout << "| |    |    |    |    |   \n";
    cout << "|2|  " << arr[2][0] << " |  " << arr[2][1] << " |  " << arr[2][2] << " |  " << arr[2][3] << " |  " << arr[2][4] << " \n";
    cout << "| |    |    |    |    |   \n";
    cout << "   ------------------------\n";
    cout << "| |    |    |    |    |   \n";
    cout << "|3|  " << arr[3][0] << " |  " << arr[3][1] << " |  " << arr[3][2] << " |  " << arr[3][3] << " |  " << arr[3][4] << " \n";
    cout << "| |    |    |    |    |   \n";
    cout << "   ------------------------\n";
    cout << "| |    |    |    |    |   \n";
    cout << "|4|  " << arr[4][0] << " |  " << arr[4][1] << " |  " << arr[4][2] << " |  " << arr[4][3] << " |  " << arr[4][4] << " \n";
    cout << "| |    |    |    |    |   \n";
    cout << "   ------------------------\n";


}






//FOR CHANGING TURNS

void turn()
{

    int row = 0, col = 0;
    char turn = 'x';




    if (turn == 'x')
    {
        cout << "\n\nEnter the row and column \n" << endl << "Player[X] turn \n\n Enter row :";
        cin >> row;

        cout << "\nEnter column : ";
        cin >> col;

        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if ((i == row && j == col) && (arr[i][j] != 'X'))
                {
                    arr[i][j] = 'X';
                    display();
                    turn = 'o';
                }

            }
    }

    if (turn == 'o')
    {
        cout << "Enter the row and column " << endl << "Player[O] turn \n\n Enter row :";
        cin >> row;

        cout << "\nEnter column : ";
        cin >> col;

        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if ((i == row && j == col) && (arr[i][j] != 'X'))
                {
                    arr[i][j] = 'O';
                    display();
                    turn = 'x';
                }

            }

    }





}









int main()
{

    int count = 0;
    // display();
    while (true)

    {




        cout << "\033[2J\033[1;1H";



        display();











        //FOR WINNING


        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' && arr[3][3] == 'X' && arr[4][4] == 'X')
                {
                    cout << "Player[X] wins !!!";
                    return 0;

                }

                if (arr[0][4] == 'X' && arr[1][3] == 'X' && arr[2][2] == 'X' && arr[3][1] == 'X' && arr[4][0] == 'X')
                {
                    cout << "Player[X] wins !!!";
                    return 0;

                }

                if (arr[i][4] == 'X' && arr[i][3] == 'X' && arr[i][2] == 'X' && arr[i][1] == 'X' && arr[i][0] == 'X')
                {
                    cout << "Player[X] wins !!!";
                    return 0;

                }

                if (arr[0][j] == 'X' && arr[1][j] == 'X' && arr[2][j] == 'X' && arr[3][j] == 'X' && arr[4][j] == 'X')
                {
                    cout << "Player[X] wins !!!";
                    return 0;

                }



            }








        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' && arr[3][3] == 'O' && arr[4][4] == 'O')
                {
                    cout << "Player[O] wins !!!";
                    return 0;

                }

                if (arr[0][4] == 'O' && arr[1][3] == 'O' && arr[2][2] == 'O' && arr[3][1] == 'O' && arr[4][0] == 'O')
                {
                    cout << "Player[O] wins !!!";
                    return 0;

                }

                if (arr[i][4] == 'O' && arr[i][3] == 'O' && arr[i][2] == 'O' && arr[i][1] == 'O' && arr[i][0] == 'O')
                {
                    cout << "Player[O] wins !!!";
                    return 0;

                }

                if (arr[0][j] == 'O' && arr[1][j] == 'O' && arr[2][j] == 'O' && arr[3][j] == 'O' && arr[4][j] == 'O')
                {
                    cout << "Player[O] wins !!!";
                    return 0;

                }



            }





        turn();


    }





}
