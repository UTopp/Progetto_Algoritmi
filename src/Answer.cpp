#include "Answer.h"

Answer::Answer()
{
    //ctor
}

Answer::~Answer()
{
    //dtor
}
 void Answer::setAnswerText(string text)
{
    _answer_text = text;
}
void Answer::setAnswerID(int n)
{
    _answer_id = n;
}
string Answer::getAnswerText()
{
    return _answer_text;
}

int Answer::getAnswerID()
{
    return _answer_id;
}
