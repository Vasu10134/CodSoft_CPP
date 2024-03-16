#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() 
{
    srand(time(NULL));
    int randNo=rand()%100+1;
    int guess;

    cout<<"Guess a no. between 1 to 100 : ";
    do {
        cin>>guess;

        if(guess<randNo) 
        {
            cout<<"Too low! Try again : ";
        } 
        else if(guess>randNo) 
        {
            cout<<"Too high! Try again : ";
        } 
        else 
        {
            cout<<"Congratulations! You guessed it Right...! ";
        }
    }
    while(guess!=randNo);

    return 0;
}
