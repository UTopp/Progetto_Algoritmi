#include "AllQuestions.h"
#include "NextAnswer.h"
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
    int t, length;
    char buffer[10];
    string temp_str;
    NextAnswer temp_nextanswer;

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
                                    t = atoi(_text_file.c_str());
                                    x.setQuestionID(t);

                                    getline(_starting_file, _text_file, ' ');
                                    t = atoi(_text_file.c_str());
                                    x.setNumberOfAnswers(t);
                                    _number_of_answers = t;

                                    getline(_starting_file, _text_file, '\n');
                                    x.setQuestionText(_text_file);

                                    it = questions.end();
                                    questions.insert(it, x);

                                }
                            else if(_text_file.compare("[A]") == 0)
                            {
                                getline(_starting_file, _text_file, '\n');
                                _text_file.push_back(' ');


                                length = _text_file.find(' ');
                                _text_file.copy(buffer, length, 0);
                                buffer[length]= '\0';

                                _text_file.erase(0, length+1);
                                t = atoi(buffer);
                                temp_nextanswer.setAnswerID(t);



                                cout << "answer id: " << t << endl;

                                //cout << t << " ";


                                //cout << "-" << _text_file << "-" << endl;
                                //cout << "_text_file length: " << _text_file.length() << endl;

                                while(_text_file.length() !=0 && _text_file.find(' ') != -1 )
                                {

                                    length = _text_file.find(' ');
                                    _text_file.copy(buffer, length, 0);
                                    buffer[length]= '\0';
                                    _text_file.erase(0, length+1);
                                    t = atoi(buffer);
                                    temp_nextanswer.setNextQuestion(t);


                                    cout << "    next question: " << t << endl;



                                    //cout << "_text_file length: " << _text_file.length() << endl;
                                    //cout << _text_file.find(' ') << endl;


                                }
                                        cout << endl;
                                }


                            else
                            {
                                cerr << "error";
                            }

            *it++;
            //cout << endl;

    }
    _starting_file.close();

}
void AllQuestions::printList()
{
    it = questions.begin();
    /*
    for (; it != questions.end(); it++)
    {
        cout << (*it).getQuestionID() << " " << (*it).getNumberOfAnswers() << " " << (*it).getQuestionText() << endl;
    } */

}
