#include "Question.h"
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string>
#include <list>
#include <vector>
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

void Question::setNextQuestions(vector<int> v)
{
    _next_questions = v;
}

void Question::setAnswer(int n)
{
    _given_answer = n;
}

void Question::setPossibleAnswers(list<int> l)
{
    _possible_answers = l;
}

string Question::getQuestionText()
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

int Question::getAnswer()
{
    return _given_answer;
}
