#ifndef ALLANSWERS_H
#define ALLANSWERS_H
#include <string>
#include <fstream>
#include <iterator>
#include <list>

#include "Answer.h"
using namespace std;


class AllAnswers
{
    public:
        AllAnswers();
        virtual ~AllAnswers();
        void initializeList();
        void printList();

        list<Answer> answers;
        list<Answer>::iterator it;
    protected:

    private:
        string _starting_file_name;
        ifstream _starting_file;
        int _counter;

        string _text_file;
};

#endif // ALLANSWERS_H
