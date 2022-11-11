#include <iostream>
#include <string>

using namespace std;

void  Mostrartablero(string tablero[][10]);

void Comprobar_Direccion(int pos,int f,int c);

bool invalidar_nave(int ps,bool& inv_nave,int f, int c,int Selec_barco, string tab[][10]);

bool invalidar_coordenada(int pos, bool& rangos,int barco,int fl, int cl, string tabla[][10]);

extern int Cbarcos;
extern string Tj1[][10];
extern string Tj2[][10];

 int barco;
 int pos;
 int f;
 int c;
 bool invalidar;
 bool fuera_rango;

 

void configurarTablero(int Cb, string tablero[][10]){
	

	
		for(int i=0;i<Cb;i++){
		//Selecciona tu barco:

		
		if(i>=1){
			cout<<"Llenando Tablero. . ."<<endl;
		}
		cout<<"\n"<<endl;
		
		 Mostrartablero(tablero);
		
		
		do{
		cout<<endl;
      cout<<"Portaaviones (1)"<<endl;
       cout<<"Buques (2)"<<endl;
       cout<<"Submarino (3)"<<endl;
      cout<<"Crucero (4) "<<endl;
      cout<<"lancha (5)"<<endl;
      cout<<endl;
      cout<<"\nDimension del portaaviones: 5 casillas";
      cout<<"\nDimension del buque: 4 casillas";
      cout<<"\nDimension del submarino: 3 casillas";
      cout<<"\nDimension del crucero: 2 casillas";
      cout<<"\nDimension de la lancha: 1 casilla";
      cout<<endl;
       cout<<"\nSeleccione un barco: ";
       cin>>barco;
       
       if(barco>5 || barco==0){
       	cout<<"\nError, nave no existe"<<endl;
	   }
	   
		}while(barco>5 || barco==0);
	
	  cout<<"Digite la direccion de su nave: "<<endl;
	  cout<<"Direccion: horizontal (1) | vertical (2) "<<endl;
	  
	 do{
	  	cout<<"\nDireccion: ";
	  	cin>>pos;
	  }while(pos!= 1 && pos!= 2);
	  
	   switch(barco){
	   	
	case 1:
	
	   do{
	   	invalidar=false;
	   	fuera_rango=false;
	  if(pos==1){
	  	cout<<"Digite las coordenadas : ";
	   cin>>f>>c;
	  }
	  else{
	  	cout<<"Digite las coordenadas : ";
	  	cin>>c>>f;
	  }
	  
	  if(i>0){invalidar_nave(pos,invalidar,f,c,barco,tablero);}
	  invalidar_coordenada(pos,fuera_rango,barco,f,c,tablero);
	  
	  if(invalidar==true){cout<<"Error posicion invalida, intente de nuevo"<<endl;}
	  if(fuera_rango==true){cout<<"Error fuera de rango, intente de nuevo"<<endl;}
	   
      }while(invalidar==true || fuera_rango==true);
	  
	  	if(pos==1){

		tablero[f][c]="a";
		tablero[f][c+1]="a";
		tablero[f][c+2]="a";
		tablero[f][c+3]="a";
		tablero[f][c+4]="a";
		system("cls");	
		     }
			 else{ 
		tablero[f][c]= "a";
		tablero[f+1][c]= "a";
		tablero[f+2][c]= "a";
		tablero[f+3][c]= "a";
		tablero[f+4][c]= "a";
		system("cls");
		  }
		  cout<<endl; break;
		  
    case 2:
    	
    do{
	   	invalidar=false;
	   	fuera_rango=false;

	  if(pos==1){
	  	cout<<"Digite las coordenadas : ";
	   cin>>f>>c;
	  }
	  else{
	  	cout<<"Digite las coordenadas : ";
	  	cin>>c>>f;
	  }
	  
	  if(i>0){invalidar_nave(pos,invalidar,f,c,barco,tablero);}	   
	   	invalidar_coordenada(pos,fuera_rango,barco,f,c,tablero);

	   if(invalidar==true){cout<<"Error posicion no valida, intente de nuevo"<<endl;}
	   if(fuera_rango==true){cout<<"Error fuera de rango, intente de nuevo"<<endl;}
	   
      }while(invalidar==true || fuera_rango==true);
    	
	 
        if(pos==1){
		tablero[f][c]="b";
		tablero[f][c+1]="b";
		tablero[f][c+2]="b";
		tablero[f][c+3]="b";
		system("cls");
			  }
			  
			  else{
		tablero[f][c]="b";
		tablero[f+1][c]="b";
		tablero[f+2][c]="b";
		tablero[f+3][c]="b";
		system("cls");
			  }
			  
			  
			cout<<endl; break;
			  
	case 3:
		
		do{
	   	invalidar=false;
	   	fuera_rango=false;

	   	
	  if(pos==1){
	  	cout<<"Digite las coordenadas : ";
	   cin>>f>>c;
	  }
	  else{
	  	cout<<"Digite las coordenadas : ";
	  	cin>>c>>f;
	  }
	  
	  if(i>0){invalidar_nave(pos,invalidar,f,c,barco,tablero);}
	   invalidar_coordenada(pos,fuera_rango,barco,f,c,tablero);
	   
	   if(invalidar==true){cout<<"Error Posicion invalida, intente de nuevo"<<endl;}
	   if(fuera_rango==true){cout<<"Error fuera de rango, intente de nuevo"<<endl;}

	   
	   
      }while(invalidar==true || fuera_rango==true);
		
		if(pos==1){
		tablero[f][c]="s";
		tablero[f][c+1]="s";
		tablero[f][c+2]="s";
		system("cls");
				  }
				  
			else{
		tablero[f][c]="s";
		tablero[f+1][c]="s";
		tablero[f+2][c]="s";
		system("cls");
				  }
				  
		cout<<endl; break;
				  
	case 4:
	do{
	   	invalidar=false;
	   	fuera_rango=false;

	  if(pos==1){
	  	cout<<"Digite las coordenadas : ";
	   cin>>f>>c;
	  }
	  else{
	  	cout<<"Digite las coordenadas : ";
	  	cin>>c>>f;
	  }
	  
	  if(i>0){invalidar_nave(pos,invalidar,f,c,barco,tablero);}
	  invalidar_coordenada(pos,fuera_rango,barco,f,c,tablero);
   
	   if(invalidar==true){cout<<"Error posicion invalida,intente de nuevo"<<endl;}
	   if(fuera_rango==true){cout<<"Error fuera de rango, intente de nuevo"<<endl;}

	   
	   
      }while(invalidar==true || fuera_rango==true);
	
		if(pos==1){
		tablero[f][c]="c";
		tablero[f][c+1]="c";
		system("cls");
				  }
				  
				else{
		tablero[f][c]="c";
		tablero[f+1][c]="c";
		system("cls");
				  	}
				  	
				  cout<<endl; break;
				  
	case 5:
		do{
	   	invalidar=false;
	  if(pos==1){
	  	cout<<"Digite las coordenadas : ";
	   cin>>f>>c;
	  }
	  else{
	  	cout<<"Digite las coordenadas : ";
	  	cin>>c>>f;
	  }
	  
	  if(i>0){invalidar_nave(pos,invalidar,f,c,barco,tablero);}	   
	   
	   if(invalidar==true){cout<<"Error de coordenada"<<endl;}
	   
      }while(invalidar==true);

		    	if(pos==1){
				tablero[f][c]="l";
				system("cls");
				       }
				
				if(pos==2){
	            tablero[f][c]="l";
				system("cls");
					 }
					  
	  	
	  }
	
		 cout<<endl;
				    
				
	} 
	
} 
	  
	  
	  
	  
	  
	  
	  
	  
	  
	

