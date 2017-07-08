#include "AllAnswers.h"

#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

AllAnswers::AllAnswers()
{
    //ctor
}

AllAnswers::~AllAnswers()
{
    //dtor
}

void AllAnswers::initializeList()
{
    cout << "Insert answers file:" << endl;
        cin >> _starting_file_name;
        _starting_file.open(_starting_file_name.c_str());
            if (!_starting_file.is_open()) {
                    cerr<<"ERROR! This file does not exist."<<endl;
                        exit(EXIT_FAILURE);
                }
    Answer ansobject;
    int t;

     while (!_starting_file.eof()){


                        getline(_starting_file, _text_file, ' ');
                        t = atoi(_text_file.c_str());
                        ansobject.setAnswerID(t);

                        getline(_starting_file, _text_file, '\n');
                        ansobject.setAnswerText(_text_file);

                        it = answers.end();
                        answers.insert(it, ansobject);
                        *it++;
                    }


            _starting_file.close();

     }


void AllAnswers::printList()
{
         for (it = answers.begin(); it != answers.end(); it++)
    {
        cout << (*it).getAnswerID() << " " << (*it).getAnswerText() <<  endl;
    }
}
