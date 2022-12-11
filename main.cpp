#include <iostream>
#include <vector>
#include "hangmanfunctions.h"
#include "hangmanfunctions.cpp"
using namespace std;

int main()
{
    greet();

    string codeword = "metaverse";
    string answer = "         ";

    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while(answer != codeword && misses < 7)
    {
        display_misses(misses);
        display_status(incorrect, answer);

        cout<<"\n\nPlease enter a letter: ";
        cin>>letter;

        for(int i = 0; i<codeword.length(); i++)
        {
            if(letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;

            }
        }
        if(guess)
        {
            cout<<"\nCorrect!\n\n";
            system("clear");
        }
        else
        {
            cout<<"\nIncorrect!\n\n";
            incorrect.push_back(letter);
            misses++;
            system("clear");
        }
        guess = false;

    }

    end_game(answer, codeword);
    display_status(incorrect, answer);
    cout<<"\n\n";
    return 0;
}
