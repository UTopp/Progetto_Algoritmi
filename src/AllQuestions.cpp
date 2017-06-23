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

    //while (!_starting_file.eof()){

                getline(_starting_file, _aid,' '); // Legge la prima lettera
                            if (_aid.compare("[Q]") == 0) {
                                getline(_starting_file, _temp, ' ');
                                    Question x;
                                    int t = atoi(_temp.c_str());
                                    x.setQuestionID(t);
                                getline(_starting_file, _temp, '\n');
                                    x.setQuestionText(_temp);
                                    cout << x.getQuestionID();

                                    it = questions.begin();
                                    questions.insert(it, x);


                    }

    //}
}
