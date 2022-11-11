#include <iostream>
#include <string>

using namespace std;

void configurarTablero(int Cb, string tablero[][10]);

bool invalidar_nave(int ps,bool& rab,int f, int c,int Selec_b, string tab[][10]);


extern string Tj1[][10];
extern string Tj2[][10];


	
bool Lim_uno=false;
bool Lim_dos=false;
bool Lim_tres=false;
bool Lim_cuatro=false;
bool Lim_cinco=false;
bool Lim_seis=false;
	

void Comprobar_Direccion(int pos,int f, int c){
	

if( (pos==1 || pos==2) && (f==0 && c==0) ){Lim_uno=true;}
				
if( (pos==1 || pos==2) && (f==0 && c!=0) ){Lim_dos=true;}
		
if( (pos==1 || pos==2) && f!=9 && c==0){Lim_tres=true;}

									
if(pos==1 && ( (f==9 && c==5) || (f==9 && c!=5) )){Lim_cuatro=true;}
						
if((pos==1 || pos==2) && f!=9 ){Lim_cinco=true;}
				
if( (pos==2 && c==0) && (f==5 || f!=0) ){Lim_seis=true;}
													

}
	

