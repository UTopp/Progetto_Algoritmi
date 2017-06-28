#ifndef ANSWER_H
#define ANSWER_H

#include <vector>

using namespace std;

class Answer
{
    public:
        Answer();
        virtual ~Answer();

        void setAnswerID(int);
        void setNextQuestions(vector<int>);

        int getAnswerID();
        vector<int> getNextQuestions();

    protected:
    private:
        int _answer_id;
        vector<int> _next_questions;
};

#endif // ANSWER_H
