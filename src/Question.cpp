#include "Question.h"
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string>
using namespace std;

Question::Question()
{
    //ctor
}

Question::~Question()
{
    //dtor
}

 void Question::setQuestionText(string text)
{
    _question_text = text;
}
void Question::setQuestionID(int n)
{
    n = _id;
}

void Question::setNumberOfAnswers(int n)
{
    n = _number_of_answers;
}

string Question::getQuestionText();
{
    return _question_text;
}

int Question::getQuestionID()
{
    return _id;
}

int Question::getNumberOfAnswers()
{
    return _number_of_answers;
}

void Question::getAnswer(int n)
{

}
