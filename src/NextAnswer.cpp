#include "NextAnswer.h"

NextAnswer::NextAnswer()
{
    //ctor
}

NextAnswer::~NextAnswer()
{
    //dtor
}

void NextAnswer::setAnswerID(int n)
{
    _answer_id = n;
}

void NextAnswer::setNextQuestions(vector<int> v)
{
    _next_questions = v;
}

int NextAnswer::getAnswerID()
{
    return _answer_id;
}

vector<int> NextAnswer::getNextQuestions()
{
    return _next_questions;
}
