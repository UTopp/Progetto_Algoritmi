#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Question
{
    public:
        Question();
        ~Question();
        void setQuestionText(string);
        void setQuestionID(int);
        void setNumberOfAnswers(int);
        void setNextQuestions(vector<int>);
        void setAnswer(int);
        void setPossibleAnswers(list<int>);               //I can have 2 or more answers --> list

        string getQuestionText();
        int getQuestionID();
        int getNumberOfAnswers();
        int getAnswer();



    protected:

    private:
        string _question_text;
        int _id;
        int _given_answer;
        int _number_of_answers;
        list<int> _possible_answers;
        vector<int> _next_questions;
        vector<int>::iterator it;

};

#endif // QUESTION_H
