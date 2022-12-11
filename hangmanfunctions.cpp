#include <iostream>
#include <vector>
#include "hangmanfunctions.h"
using namespace std;

void greet()
{
    cout << "=================\n";
    cout << "Hangman: The Game\n";
    cout << "=================\n";
    cout << "\nInstructions: Save the man from being hanged by guessing the codeword.\n\n";
}

void display_misses(int misses)
{
  if(misses==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
    
}

void display_status(vector<char> incorrect, string answer)
{
    cout<< "\nIncorrect Guesses (7 total): \n\n";

    for(int i = 0; i<incorrect.size(); i++)
    {
        cout<<incorrect[i]<<" ";
    }

    cout<<"\n\nThe Codeword: \n\n";

    for(int i = 0; i<answer.length(); i++)
    {
        cout<<answer[i]<<"_";
    }
}

void end_game(string answer, string codeword)
{
    if(answer==codeword)
    {
        cout<<"Hooray! You saved the man from being hanged!\n\n";
    }
    else
    {
        cout<<"Oh no! The man is hanged!\n\n";
    }
}