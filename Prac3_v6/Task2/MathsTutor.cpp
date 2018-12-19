#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main ()
{
  int seed, questions, Q1, Q2, correct, totalQ;


  cout << "Give a seed value: ";
  cin >> seed;

  if (seed == 0)
    {
    srand(time(0))  ;
    }

  else
    {
      srand(seed);
    }

  correct = 0;
  cout << "Number of questions: ";
  cin >> questions;

  totalQ = questions;

  int questionNum = 1;
  int answer, answerI;

  while (questions > 0 )
    {
        Q1 = (rand() % (100 - 10)) + 10 ;
        Q2 = (rand() % (100 - 10)) + 10;
        answer = Q1 + Q2;

        cout << questionNum << ". " << Q1 << " + " << Q2
        << " = " ;
        cin >> answerI;

        if (answerI != answer)
          {
             cout << "No. Your answer is " << answerI << ". The correct answer is " << answer << endl;
          }

        else if (answerI == answer)
        {
          cout << "Yes. Your answer is correct\n";
          correct += 1;
        }

          questionNum += 1;
          questions -= 1;
    }

    string dash = "------------------------------------------";

    cout << dash << endl;
    cout << "You scored " << correct << " / " << totalQ;


return 0;
}
