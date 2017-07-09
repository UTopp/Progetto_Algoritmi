#include "AllQuestions.h"
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

AllQuestions::AllQuestions()
{
    _counter = 0;

}

AllQuestions::~AllQuestions()
{
    //dtor
}
void AllQuestions::initializeList()
{
    int t, length, i;
    char buffer[10];
    Question x;
    vector<int> temp_vector;

    cout << "Insert questions file:" << endl;
    cin >> _starting_file_name;
    _starting_file.open(_starting_file_name.c_str());
    if (!_starting_file.is_open())
    {
        cerr<<"ERROR! This file does not exist."<<endl;
        exit(EXIT_FAILURE);
    }

    while (!_starting_file.eof())
    {
        getline(_starting_file, _text_file,' ');
        if (_text_file.compare("[Q]") == 0)
        {
            getline(_starting_file, _text_file, ' ');
            t = atoi(_text_file.c_str());
            x.setQuestionID(t);

            getline(_starting_file, _text_file, ' ');
            t = atoi(_text_file.c_str());
            x.setNumberOfAnswers(t);
            _number_of_answers = t;         // ???

            getline(_starting_file, _text_file, '\n');
            x.setQuestionText(_text_file);

            for(i=0; i<_number_of_answers; i++)
            {
                getline(_starting_file, _text_file,' ');
                getline(_starting_file, _text_file, '\n');
                _text_file.push_back(' ');
                length = _text_file.find(' ');
                _text_file.copy(buffer, length, 0);
                buffer[length]= '\0';
                _text_file.erase(0, length+1);
                t = atoi(buffer);
                x.setAnswer(t);

                while(_text_file.length() !=0)
                {
                    length = _text_file.find(' ');
                    _text_file.copy(buffer, length, 0);
                    buffer[length]= '\0';
                    _text_file.erase(0, length+1);
                    t = atoi(buffer);
                    temp_vector.push_back(t);
                }
            }
            x.setNextQuestions(temp_vector);
        }
        else
        {
            cerr << "error";
        }

        it = questions.end();
        questions.insert(it, x);
        *it++;

    }
    x.printAnswers();
    _starting_file.close();

}
void AllQuestions::printList()
{
    /*
    for (it = questions.begin(); it != questions.end(); it++)
    {
        cout << (*it).getQuestionID() << " " << (*it).getNumberOfAnswers() << " " << (*it).getQuestionText() << endl;
    }  */

}
