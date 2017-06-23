#include <iostream>
#include<coda.h>
#include<Question.h>
#include<AllQuestions.h>
using namespace std;

int main()
{
    Coda c;
    c.initializeSequence();
    c.removeFirstQuestion();
    c.addNewQuestion(11);
    c.printSequence();

    AllQuestions q;
    q.initializeList();

    return 0;
}
