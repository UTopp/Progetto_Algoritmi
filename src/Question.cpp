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
    _id = n;
}

void Question::setNumberOfAnswers(int n)
{
    _number_of_answers = n;
}

string Question::getQuestionText();
{
    return _question_text;
}

int Question::getQuestionID()
{
    return _id;
}

<<<<<<< HEAD
=======
int Question::getNumberOfAnswers()
{
    return _number_of_answers;
}

void Question::getAnswer(int n)
{

}
>>>>>>> 7225fa54859120770a31ec956961804381992ee8
