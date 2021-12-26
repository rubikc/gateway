/*
ID: wenhe201
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ofstream fout ("test.out");
ifstream fin ("test.in");

int main() {
    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}

