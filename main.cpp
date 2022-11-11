#include <iostream>
#include <conio.h>
#include <string>
#include <unordered_map>

using namespace std;

int Cbarcos=1;
string Tj1[10][10];
string Tj2[10][10];

string T_tiro1[10][10];
string T_tiro2[10][10];


 void  Mostrartablero(string tablero[][10]);
 
 void intro_tablero(string tablero[][10]);

 void configurarTablero(int, string tablero[][10]);

 void Tablatiro(string tablero[][10]);

 void jugar();
 
 void limite_impacto(bool& Der,bool& izq, bool& inf, bool& sup, int f, int c,string tabla[][10]);
 
 bool comprobar_impacto(bool& ubicar,int f, int c,int opcion, string tabla[][10]);
 
 void impacto(int opcion,int& Puntaje,bool ubicacion,int& Cantbarco, unordered_map<string, string> ump_string);
 
 void Comprobar_Direccion(int posicion,int f,int c);
 
 bool invalidar_nave(int ps,bool& inv_nave,int f, int c,int Selec_barco, string tab[][10]);
 
 bool invalidar_coordenada(int pos, bool& rangos,int barco,int fl, int cl, string tabla[][10]);
 
 

int main(int argc, char** argv) {
	
	
	cout<<"..................::Batalla Naval::................................."<<endl;
	
	cout<<"\nJugador 1 llene su tablero "<<endl,
	cout<<endl;
	intro_tablero(Tj1);
	configurarTablero(Cbarcos,Tj1);
	cout<<"\n"<<endl;
	cout<<"-----------------------------------------------------------------";
	cout<<endl;	
	cout<<"tablero jugador 1: "<<endl;
	Mostrartablero(Tj1);
	system("pause");
	
	intro_tablero(Tj2);
	cout<<"\nJugador 2 llene su tablero "<<endl;
	cout<<endl;
	configurarTablero(Cbarcos,Tj2);
	cout<<"Tablero jugador 2: "<<endl;
	Mostrartablero(Tj2);
	system("pause");
	
	jugar();

	getch();
	return 0;
}
