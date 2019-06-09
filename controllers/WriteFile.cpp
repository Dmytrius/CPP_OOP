#include <iostream>
#include <fstream>
#include <cstdlib>
#include "WriteFile.h"

using namespace std;

ofstream outf("File.txt");

void WriteFile::writeFile(string str) {
    if (!outf) {
        cerr << "Uh oh, File.txt could not be opened for writing!" << endl;
        exit(1);
    }
    outf << str << endl;
};

