#include <iostream>
#include <string>

using namespace std;


extern string Tj1[][10];
extern string Tj2[][10];
 void jugar();



void limite_impacto(bool& Der,bool& izq, bool& inf, bool& sup,int f,int c, string tabla[][10]){
   
   

	//Limite derecho:
	if(Der==false){
	if((c==9 && f==9) || (c==9 && f!=9)){
	   Der=true;}
	   
	 if(c!=9 && f!=9){
	 if(tabla[f][c+1]=="+" || tabla[f][c+1]=="o"){Der=true;}
    }
    }
	    
						  
    //limite izquierdo:
    if(izq==false){
	
    if((c==0 && f==0) || (c==0 && f!=0) ){
		izq=true;
		}
		
    if(c!=0 && (tabla[f][c-1]=="+")){
		izq=true; }
	}
	
							
   
    //limite inferior:
    if(inf==false){
	
    if((f==9 && c==9) || (f==9 && c!=9) ){
		inf=true;}
		
	if(f!=9 && (tabla[f+1][c]=="+") ){
	    inf=true;}
	}
					  
					     
	 //limite superior:
	if(sup==false){
	
	if((f==0 && c==0) || (f==0 && c!=0)){sup=true;}

	if(f!=0 && ( tabla[f-1][c]=="+") ){sup=true;}
	 
	}


}
