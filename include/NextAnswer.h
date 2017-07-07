#ifndef NEXTANSWER_H
#define NEXTANSWER_H

#include <vector>

using namespace std;
/*
    Answer object:
            ->  _answer_id : saves the possible answer to a question
            ->  _next_question : vector that holds the questions to add to the Coda
                if the answer is equal to _answer_id
*/

class NextAnswer
{
    public:
        NextAnswer();
        virtual ~NextAnswer();

        void setAnswerID(int);
        void setNextQuestion(int);
        void setNextQuestions(vector<int>);

        int getAnswerID();
        vector<int> getNextQuestions();

    protected:
    private:
        int _answer_id;
        vector<int> _next_questions;
};

#endif // NEXTANSWER_H
