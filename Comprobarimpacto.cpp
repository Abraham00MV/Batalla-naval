#include <iostream>
#include <string>

using namespace std;


extern string Tj1[][10];
extern string Tj2[][10];

 void jugar();
 void limite_impacto(bool& Der,bool& izq, bool& inf, bool& sup,int f,int c, string tabla[][10]);
 

bool comprobar_impacto(bool& ubicar,int f, int c,int opcion, string tabla[][10]){
	
	bool limD=false;
	bool limIz=false;
	bool limA=false;
	bool limAr=false;
	
    limite_impacto(limD,limIz,limA ,limAr,f,c,tabla);

switch(opcion){
		         
case 1:
//ubicar la derecha:
	if(limD==false){
	int pd=0;
	while(pd<3 && ubicar==false){
	if(tabla[f][c+1]=="a"){
	ubicar=true;
	 }
	 c++;
	pd++;
	 }
	 }
								    
 //ubicar a la izquierda:
	if(limIz==false){
	int pi=3;
	while(pi>=0 && ubicar==false){
	if(tabla[f][c-1]=="a"){
	ubicar=true;
	}
	 c--;
	 pi--;
	 }
	 }
	
	 //ubicar hacia abajo:
	if(limA==false){
	int pa=0;
	while(pa<3 && ubicar==false){
	if(tabla[f+1][c]=="a"){
	ubicar=true;
	 }
	pa++;
	 f++;
	}
	}

//ubicar hacia arriba:
	if(limAr==false){
	int par=3;
	while(par>=0 && ubicar==false){
	if(tabla[f-1][c]=="a"){
	ubicar=true;
	}
	par--;
	f--;
	}
	}
	
    break;
					
									
 case 2:
 	
	if(limD==false){
	int bd=0;
	while(bd<2 && ubicar==false){
	if(tabla[f][c+1]=="b"){
	ubicar=true;
	}
	c++;
	bd++;
	}
	}
								    
	 //ubicar a la izquierda:
	if(limIz==false){
	int bi=2;
	while(bi>=0 && ubicar==false){
	if(tabla[f][c-1]=="b"){
	ubicar=true;
	}
	c--;
	bi--;
	}
	}
	
	//ubicar hacia abajo:
	if(limA==false){
	int ba=0;
	while(ba<2 && ubicar==false){
	if(tabla[f+1][c]=="b"){
	ubicar=true;
	}
	ba++;
	f++;
	}
	}
								        
	//ubicar hacia arriba:
	if(limAr==false){
	int bar=2;
	while(ubicar==false && bar>=0){
	if(tabla[f-1][c]=="b"){ubicar=true;}
	else{
	bar--;
	f--;
	}
	}
	}
	
	 break;
	 
   case 3:
	if(limD==false){
	int sd=0;
	while(sd<1 && ubicar==false){
	if(tabla[f][c+1]=="s"){
	ubicar=true;
	}
	c++;
	sd++;
	}
	}
								    
	//ubicar a la izquierda:
	if(limIz==false){
	int si=1;
	while(si>=0 && ubicar==false){
	if(tabla[f][c-1]=="s"){
	ubicar=true;
	}
	c--;
	si--;
	}
	}
									    
								
	 //ubicar hacia abajo:
	if(limA==false){
	int sa=0;
	while(sa<1 && ubicar==false){
	if(tabla[f+1][c]=="s"){
	ubicar=true;
	}
	sa++;
	 f++;
	}
	}
									        
	//ubicar hacia arriba:
	if(limAr==false){
	int sar=1;
	while(sar>=0 && ubicar==false){
	if(tabla[f-1][c]=="s"){
	ubicar=true;
	}
	sar--;
	f--;
	}
	}
	
	break;
									    
	case 4:
	if(limD==false){
	if(tabla[f][c+1]=="c"){
	ubicar=true;
	}
	}
    //ubicar a la izquierda:
	if(limIz==false){
	if(tabla[f][c-1]=="c"){
	ubicar=true;
	}	
	}
	 
	//ubicar hacia abajo:
	if(limA==false){
    if(tabla[f+1][c]=="c"){
	ubicar=true;
	}
	}
	
	//ubicar hacia arriba:
	if(limAr==false){
	if(tabla[f-1][c]=="c"){
		ubicar=true;
	}									
	}
	 break;
	
	case 5:
	if(limD==false){
	if(tabla[f][c+1]=="l"){
	ubicar=true;
	}
	}
	 //ubicar a la izquierda:
	if(limIz==false){
	if(tabla[f][c-1]=="l"){
	ubicar=true;}	
	}
	//ubicar hacia abajo:
	if(limA==false){
	if(tabla[f+1][c]=="l"){
	ubicar=true;
	}
    }

	//ubicar hacia arriba:
	if(limAr==false){
	if(tabla[f-1][c]=="l"){
	ubicar=true;
	}
	}
	
	return ubicar;
  }
								
}
								

