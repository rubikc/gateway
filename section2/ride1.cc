:/*
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

int main() {
    int a, b;
    string s1, s2;
    fin >> s1>>s2;
    cout<<s1<<endl;

    int p=1;
    for(int i=0; i<s1.size();i++) {
       p*=s1[i]-'A'+1;
    }
    a=p%47;
    cout<<p<< ' '<<a<<endl;

    p=1;
    for (int i=0; i<s2.size();i++)
    {
       p*=s2[i]-'A'+1;
    }

    b=p%47;

    cout<<p<< ' '<<b<<endl;
    if (a==b)
        fout<<"GO\n";
    else 
        fout<<"STAY\n";

    return 0;
}

