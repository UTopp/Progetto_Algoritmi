#ifndef ALLQUESTIONS_H
#define ALLQUESTIONS_H
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

#include "Question.h"

using namespace std;

/*
    Desc:   Holds a copy of all the questions and the list (Coda) of questions in the order they will have to be
            asked to the user.
    AllQuestions object:
            -> questions:   list that contains Question objects
            -> sequence:    STILL IN DEVELOPMENT it should contain the ordered list
                            of questions to ask the user. it might become a Coda object
            -> _text_file:  support variable to momentarily save the text read from the file
*/

class AllQuestions
{
    public:
        AllQuestions();
        virtual ~AllQuestions();

        void initializeList();
        void printList();

        list<Question> questions;
        vector<int> sequence;
        list<Question>::iterator it;


    protected:
    private:
        string _starting_file_name;
        ifstream _starting_file;
        int _counter;
        int _number_of_answers;
        string _text_file; // support variable to momentarily save the text read from the file
};

#endif // ALLQUESTIONS_H
