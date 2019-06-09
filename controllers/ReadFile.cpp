#include "ReadFile.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

ifstream inf("File.txt");

void *readFile{
        if (!inf){
            cerr << "Uh oh, File.txt could not be opened for writing!" << endl;
            exit(1);
        }
        while (inf)
        {
            string strInput;
            getline(inf, strInput);
            cout << strInput << endl;
        }
};