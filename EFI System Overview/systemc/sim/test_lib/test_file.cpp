#include <iostream>
#include <string.h>
#include "../../lib/Array.hpp"
#include "../../lib/File.hpp"
#include "../../include/GlobalDefines.hpp"

using namespace std;

int main() {
    float** EGOTable = Array::create(EGO_ROWS, EGO_COLS);

    string name = "../../data/initial/";
    string fileName;
    fileName = name + EGO_LOOP_PATH;

    bool empty = File::read(fileName.c_str(), EGOTable, EGO_ROWS, EGO_COLS);	// TRUE | FALSE

    if (!empty)
    {
        cout << "\nEmpty";
    }

    for (int i = 0; i < EGO_ROWS; i++) {
        for (int j = 0; j < EGO_ROWS; j++)
        {
            cout << EGOTable[i][j] << " ";
        }
        cout << endl;
    }

    string name1 = "../../data/running/";
    string fileName1;
    fileName1 = name1 + EGO_LOOP_PATH;

    File::write(fileName1.c_str(), EGOTable, EGO_ROWS, EGO_COLS);

    Array::del(EGOTable, EGO_ROWS);

    return 0;
}
