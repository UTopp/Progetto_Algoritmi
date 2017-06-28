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
<<<<<<< HEAD
        void setGivenAnswer(int);
        void setNextQuestions(vector<int>);     //vector because it might be more than one question
=======
        void setNextQuestions(vector<int>);
        void setAnswer(int);
        void setPossibleAnswers(list<int>);               //I can have 2 or more answers --> list
>>>>>>> refs/remotes/origin/master

        string getQuestionText();
        int getQuestionID();
        int getNumberOfAnswers();
<<<<<<< HEAD
=======
        int getAnswer();


>>>>>>> refs/remotes/origin/master

    protected:

    private:
        string _question_text;
        int _id;
        int _given_answer;
        int _number_of_answers;
<<<<<<< HEAD
        int _given_answer;

        list<int> _possible_answers_id;
=======
        list<int> _possible_answers;
>>>>>>> refs/remotes/origin/master
        vector<int> _next_questions;
        vector<int>::iterator it;

};

#endif // QUESTION_H
