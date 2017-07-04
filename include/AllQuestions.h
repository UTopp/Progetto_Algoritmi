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


#include "question.h"
using namespace std;

class AllQuestions
{
    public:
        AllQuestions();
        virtual ~AllQuestions();
        list<Question> questions;
        vector<int> sequence;
        list<Question>::iterator it;
        void initializeList();
        void printList();


    protected:
    private:
        string _starting_file_name;
        ifstream _starting_file;
        int _counter;
        string _aid;
        string _temp;
};

#endif // ALLQUESTIONS_H
