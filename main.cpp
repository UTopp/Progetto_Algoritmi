#include <iostream>-

#include"coda.h"
#include"Question.h"
#include"AllQuestions.h"
#include"Answer.h"
#include "AllAnswers.h"

using namespace std;

int main()
{
    AllQuestions q;
    Coda c;
    AllAnswers a;

    /*
    c.initializeSequence();
    c.removeFirstQuestion();
    c.addNewQuestion(11);
    c.printSequence();
    */



    q.initializeList();
    q.printList();

<<<<<<< HEAD
=======
    /*
>>>>>>> 48217296f2506e751a467084db91683496383816
    a.initializeList();
    a.printList(); */

    cout << "checkList:" << endl;
    q.checkList();
    return 0;
}
