#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Question
{
@@ -11,6 +17,12 @@ class Question
    protected:

    private:

        string _question_text;
        int _id;
        int _number_of_questions;
        vector<int> _possible_answers_id;
        vector<int>::iterator it;
};

#endif // QUESTION_H
