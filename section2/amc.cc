/*
ID: wenhe201
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int g[5][5];

int count(int x, int y){
	if (g[x][y]==1)
		return 0;

	if ((x==3)&&(y==4))
		return 1;
	int a=0;

	if (x<3){
		a+=count(x+1,y);
	}

	if (y<4){

		a+=count(x,y+1);
	}
	return a;
}

int main() {
    	g[2][2]=1;

	int a=count(1,1);
	cout<<a<<endl;
    	return 0;
}

