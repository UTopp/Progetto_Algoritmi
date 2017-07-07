#include "AllAnswers.h"

#include <iostream>
#include <fstream>
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


     while (!_starting_file.eof()){

                getline(_starting_file, _text_file,' ');


     }
}

void AllAnswers::printList()
{

}
