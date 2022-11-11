#include <string>
#include <iostream>

using namespace std;

extern string Tj1[][10];
extern string Tj2[][10];


void intro_tablero(string tablero[][10]){
	
	    for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			tablero[i][j]="+";
		}
	}
	
}
