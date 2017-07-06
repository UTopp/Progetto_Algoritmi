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
        cout << "Insert questions file:" << endl;
    cin >> _starting_file_name;
    _starting_file.open(_starting_file_name.c_str());
    if (!_starting_file.is_open()) {
            cerr<<"ERROR! This file does not exist."<<endl;
            exit(EXIT_FAILURE);
        }

    while (!_starting_file.eof()){

                getline(_starting_file, _text_file,' ');
                            if (_text_file.compare("[Q]") == 0)
                                {
                                    Question x;
                                    getline(_starting_file, _text_file, ' ');
                                    int t = atoi(_text_file.c_str());
                                    x.setQuestionID(t);

                                    getline(_starting_file, _text_file, ' ');
                                    t = atoi(_text_file.c_str());
                                    x.setNumberOfAnswers(t);

                                    getline(_starting_file, _text_file, '\n');
                                    x.setQuestionText(_text_file);

                                    it = questions.begin();
                                    questions.insert(it, x);

                                }
                            else if(_text_file.compare("[A]") == 0){
                                _starting_file.ignore(150,'\n');
                            }
                            else {
                                cerr << "error";
                            }
            *it++;

    }
    it = questions.begin();
    for (; it != questions.end(); it++){
            cout << (*it).getQuestionID() << " " << (*it).getNumberOfAnswers() << " " << (*it).getQuestionText() << endl;

    }
}
