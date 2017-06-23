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

        string getQuestionText();
        int getQuestionID();
<<<<<<< HEAD

=======
        int getNumberOfAnswers();
        int getAnswer();
>>>>>>> 7225fa54859120770a31ec956961804381992ee8


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
