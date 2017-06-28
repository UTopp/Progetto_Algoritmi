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
        void setGivenAnswer(int);
        void setNextQuestions(vector<int>);     //vector because it might be more than one question

        string getQuestionText();
        int getQuestionID();
        int getNumberOfAnswers();

    protected:

    private:
        string _question_text;
        int _id;
        int _number_of_answers;
        int _given_answer;

        list<int> _possible_answers_id;
        vector<int> _next_questions;
        vector<int>::iterator it;

};

#endif // QUESTION_H
