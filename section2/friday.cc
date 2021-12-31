/*
ID: wenhe201
TASK: friday
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ofstream fout ("friday.out");
ifstream fin ("friday.in");

int main() {
    int N;
    fin>>N;
    int w[7];
    int d=1;

    for(int t = 0; t<7; t++){
        w[t]=0;
    }
    for (int y = 1900; y<1900+N; y++){
        for (int m = 1; m<=12; m++){
            cout<<((d+13-1)%7)<<endl;
            w[(d+13-1)%7]++;
            if (m == 2){
                d += 28;
                //if ((y%400) == 0 ||((y%4) == 0) && ((y%100)!= 0)){
                if ((y%400) == 0){
                    cout<<y<<endl;
                    d++;
                }else if ((y%4) == 0){
                    if (y%100 != 0){
                        d++;
                    }
                }
            }else if (m == 9 || m == 6 || m == 4 || m == 11){
                d += 30;
            }else {
                d += 31;
           }
        }
    }

    fout<<w[6]<<' '<<w[0]<<' '<<w[1]<<' '<<w[2]<<' '<<w[3]<<' '<<w[4]<<' '<<w[5]<<endl;
    
    
    return 0;
}

