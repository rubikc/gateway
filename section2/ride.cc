:q/*
ID: wenhe201
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ofstream fout ("ride.out");
ifstream fin ("ride.in");

int meow(string s){
    int p=1;
    for(int i=0; i<s.size();i++){
        p*=s[i]-'A'+1;
    }
    p%=47;
    return p;
}

int main() {
    int a, b;
    string s1, s2;
    fin >> s1>>s2;

    a=meow(s1);
    b=meow(s2);
    
    if (a==b)
        fout<<"GO\n";
    else 
        fout<<"STAY\n";

    return 0;
}

