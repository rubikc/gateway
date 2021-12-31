/*
ID: wenhe201
TASK: gift1
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ofstream fout ("gift1.out");
ifstream fin ("gift1.in");

int ba[10];
string n[10];
int p;

int index(string name){
    cout << "index " << name << endl;
    for (int i=0; i<p;i++){
        if (name==n[i])
        return i;
    }

    cout << "not found **** \n";
    return 0;
}
int main()
{  
    fin>>p;
    for(int i=0; i<p; i++){
        fin>>n[i];
        cout<<i<<";"<<n[i]<<endl;
    }
    
    for (int i=0; i<p; i++){
        string d;
        int a,b;
        string r[10];
        fin>>d;
        fin>>a>>b;
        cout<<d<<" "<<a<<" "<<b<<endl;
        for(int j=0;j<b;j++){
            fin>>r[j];
            cout << "\t" << r[j] << endl;
        }

        int i1=index (d);
        if (b==0){
            continue ;
        }

        int x,y;
        x=a%b-a;
        ba[i1]+=x;
        y=a/b;
        for(int j=0; j<b;j++){
            int q=index(r[j]);
             ba[q]+=y;
        }
            
    }
            
    for (int i=0; i<p;i++){
        fout<<n[i]<<" "<<ba[i]<<endl;
    }   
    return 0;
}


