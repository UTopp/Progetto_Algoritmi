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

// --- set methods ---

 void Question::setQuestionText(string text)
{
    _question_text = text;
}

void Question::setQuestionID(int n)
{
    _question_id = n;
}

void Question::setNumberOfAnswers(int n)
{
     _number_of_answers = n;
}

void Question::setNextQuestions(vector<int> v)
{
    _next_questions.push_back(v);
}

void Question::setAnswer(int n)
{
    _answers_id.push_back(n);
}

// --- get methods ---

string Question::getQuestionText()
{
    return _question_text;
}

int Question::getQuestionID()
{
    return _question_id;
}

int Question::getNumberOfAnswers()
{
    return _number_of_answers;
}
void Question::printNextQuestions()
{
        vector< vector<int> >::iterator row;
        vector<int>::iterator col;
        int i = 0;
        int j = 0;

        for (row = _next_questions.begin(); row != _next_questions.end(); row++) {
                //cout << "Riga " << i << endl;
                i++;
            for (col = row->begin(); col != row->end(); col++) {
                    //cout << "Colonna " << j << endl;
                    j++;

                    cout << (*col) << endl;
            }
            j = 0;
    }
}
void Question::clearObj(){
        _question_text = "";
        _question_id = 0;

        _number_of_answers = 0;
        _answers_id.clear();
        _next_questions.clear();
}
void Question::printAnswers()
{
    vector<int>::iterator it_ans; //Meglio usare quello già dichiarato nel .h?
    for (it_ans = _answers_id.begin(); it_ans != _answers_id.end(); it_ans++)
    {
        cout << (*it_ans) << endl;
    }
}
