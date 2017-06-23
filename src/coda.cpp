#include "coda.h"
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string>
using namespace std;

Coda::Coda()
{
    //initializeSequence();

}

Coda::~Coda()
{
    //dtor
}
void Coda::removeFirstQuestion(){

            sequence.erase(sequence.begin());

}

void Coda::addNewQuestion(int num){
        it= sequence.begin();
        sequence.insert(it, num);
}

void Coda::initializeSequence(){
    cout << "Insert sequence file:" << endl;
    cin >> _starting_file_name;
    _starting_file.open(_starting_file_name.c_str());
    if (!_starting_file.is_open()) {
            cerr<<"ERROR! This file does not exist."<<endl;
            exit(EXIT_FAILURE);
        }

    while (!_starting_file.eof()){
        int i;

        _starting_file >> i;


        sequence.push_back(i);
    }
};

void Coda::printSequence(){
    it = sequence.begin();
    for (; it != sequence.end(); it++){
        cout << (*it)++ << " ";
    }

        cout << endl;
};
