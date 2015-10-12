//Rock Paper Scissors game by Moonbat
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned)time(0));

    int choice; //Declare variable integer type

    int compchoice = rand()%2 + 1; //Generator random number(its ganerates a selection of numbers
                                   // from 0, 1, 2)

    cout << "Welcome to ~ Rock Paper Scissors ~!! I assume you know how to play,";
    cout << " so lets begin. You are playing against the computer. Type 0 for";
    cout << " rock, 1 for paper, and 2 for scissors.\n";

    cin >> choice; //Input number

    if (choice == 0)
    {
        if (compchoice == 0)
        cout << "\nIt's a tie!\n\n\n";
        else if (compchoice == 1)
        cout << "\nPaper beats rock! Sorry, you lose!\n\n\n";
        else if (compchoice == 2)
        cout << "\nRock beats scissors! You win!\n\n\n";
    }

    if (choice == 1)
    {
        if (compchoice == 0)
        cout << "\nIt's a tie!\n\n\n";
        else if (compchoice == 1)
        cout << "\nPaper beats rock! You win!\n\n\n";
        else if (compchoice == 2)
        cout << "\nScissors beat paper! Sorry, you lose!\n\n\n";
   }

   if (choice == 2)
   {
        if (compchoice == 0)
        cout << "\nIt's a tie!\n\n\n";
        else if (compchoice == 1)
        cout << "\nScissors beat paper! You win!\n\n\n";
        else if (compchoice == 2)
        cout << "\nRock beats scissors! Sorry, you lose!\n\n\n";
   }

   else
   {
        cout << "\nTry again!\n\n";
   }
    return main();
}
