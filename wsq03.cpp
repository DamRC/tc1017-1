// Pick a number

#include <iostream>
#include <ctime> // to include time set (to have different random numbers created each time)
#include <cstdlib> // to include the set of random
using namespace std;

int main()
{
   srand(time(NULL)); // create a seed for random numbers (use time so it's different each time (use null so it runs))
   int SecretValue;
   int GuessValue;
   int Attempts;
   SecretValue = rand () % 100 + 1; // to have a range in the random numbers and not have it go to RAND_MAX
   Attempts = 0;
   
   cout << "Pick a number from 1 to 100" << endl;
   
   do // does whatever is in the set one time and then checks the condition in while to see if it'll run again
   {
      cin >> GuessValue;
      if (GuessValue < SecretValue)
      {
         cout << "You guessed too low, try again" << endl;
      }
      else if (GuessValue > SecretValue)
      {
         cout << "You guessed too high, try again" << endl;
      }
      Attempts = Attempts + 1;
   } while (GuessValue != SecretValue); // if condition isn't met, it continue to do what's next
   
   if (GuessValue == SecretValue)
   {
      cout << "Congrats! You guessed the number in " << Attempts << " attempt(s)" << endl;
   }
   
   return 0; // to make sure the program ends
}
