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
        void setAnswer(int);
        void setNextQuestions(vector<int>);     //vector because it might be more than one question

        string getQuestionText();
        int getQuestionID();
        int getNumberOfAnswers();
        int getAnswer();


    protected:

    private:
        string _question_text;
        int _question_id;
        int _given_answer;
        int _number_of_answers;
        vector<int> _next_questions;
        vector<int>::iterator it;

};

#endif // QUESTION_H
