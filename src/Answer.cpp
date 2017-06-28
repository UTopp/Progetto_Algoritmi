#include "Answer.h"

Answer::Answer()
{
    //ctor
}

Answer::~Answer()
{
    //dtor
}

void Answer::setAnswerID(int n)
{
    _answer_id = n;
}

void Answer::setNextQuestions(vector<int> v)
{
    _next_questions = v;
}

int Answer::getAnswerID()
{
    return _answer_id;
}

vector<int> Answer::getNextQuestions()
{
    return _next_questions;
}
