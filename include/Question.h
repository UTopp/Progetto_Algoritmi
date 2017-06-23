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
        void setNextQuestions(int);

        int getQuestionID();
        int getAnswer();


    protected:

    private:
        string _question_text;
        int _id;
        int _number_of_answers;
        list<int> _possible_answers_id;
        vector<int> _next_questions;
        vector<int>::iterator it;

};

#endif // QUESTION_H
