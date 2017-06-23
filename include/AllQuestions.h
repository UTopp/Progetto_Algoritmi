#ifndef ALLQUESTIONS_H
#define ALLQUESTIONS_H

#include <iostream>
#include <list>
#include "question.h"


class AllQuestions
{
    public:
        AllQuestions();
        virtual ~AllQuestions();
        std::list<Question> questions;

    protected:
    private:
};

#endif // ALLQUESTIONS_H
