#include <iostream>

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


    a.initializeList();
    a.printList();


    return 0;
}
