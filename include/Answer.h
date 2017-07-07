#ifndef ANSWER_H
#define ANSWER_H
#include <string>

using namespace std;

class Answer
{
    public:
        Answer();
        virtual ~Answer();
        void setAnswerText(string);
        void setAnswerID(int);

        int getAnswerID();
        string getAnswerText();

    protected:

    private:
        string _answer_text;
        int _answer_id;
};

#endif // ANSWER_H
