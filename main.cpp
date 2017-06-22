#include <iostream>
#include<coda.h>

using namespace std;

int main()
{
    coda c;
    c.initializeSequence();
   // c.removeFirstQuestion();
    c.addNewQuestion(11);
    c.printSequence();


    return 0;
}
