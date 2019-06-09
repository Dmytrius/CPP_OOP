#include <iostream>
#include <fstream>
#include <cstdlib>
#include "File.h"

using namespace std;

ofstream outf("File.txt", ios::app);

void File::writeFile(string str) {
    if (!outf) {
        cerr << "Uh oh, File.txt could not be opened for writing!" << endl;
        exit(1);
    }
    outf << str << endl;
    outf.close();
}

void File::readFile(string nameFile) {
    if (!outf) {
        cerr << "Uh oh, File.txt could not be opened for writing!" << endl;
        exit(1);
    }
    outf.open(nameFile, ios::app);
    outf.close();
}


