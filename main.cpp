#include <iostream>
#include<coda.h>

using namespace std;

int main()
{
    Coda c;
    c.initializeSequence();
    c.removeFirstQuestion();
    c.addNewQuestion(11);
    c.printSequence();


    return 0;
}
