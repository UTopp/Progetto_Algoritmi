#ifndef CODA_H
#define CODA_H
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>

using namespace std;

class Coda
{
    public:
        Coda();
        virtual ~Coda();
        void initializeSequence();
        void printSequence();
        void addNewQuestion(int num);
        void removeFirstQuestion();
    protected:

    private:
        string _starting_file_name;
        ifstream _starting_file;
        vector<int> sequence;
        vector<int>::iterator it;

};

#endif // CODA_H
