#include <iostream>
#include <fstream>
#include <cstdlib>
#include "File.h"

using namespace std;



void File::writeFile(string nameFile) {
    fstream iof("File.txt", ios::app);
    if (!iof) {
        cerr << "Uh oh, File.txt could not be opened for writing!" << endl;
        exit(1);
    }
    iof << nameFile << endl;
    iof.close();
}

void File::readFile(string nameFile) {
    fstream iof(nameFile, ios::in);
    if (!iof) {
        cerr << "Uh oh, File.txt could not be opened for writing!" << endl;
        exit(1);
    }
    while (iof) {
        string input;
        getline(iof, input);
        cout << input << endl;
    }
    iof.close();
}


