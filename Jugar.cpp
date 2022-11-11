#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


extern string T_tiro1[][10];
extern string T_tiro2[][10];

extern string Tj1[][10];
extern string Tj2[][10];
  
void Tablatiro(string tablero[][10]);

void  Mostrartablero(string tablero[][10]);

bool comprobar_impacto(bool& ubicar,int f, int c,int opcion, string tabla[][10]);

void impacto(int opcion,int& Puntaje,bool ubicacion,int& Cantbarco, unordered_map<string, string> ump_string);


  
  void jugar(){
   	int fila, columna;
   	int posicion;
   	int rondas=1;
   	int Cbarcos1=1;
   	int Cbarcos2=1;
   	int puntos1=0;
   	int puntos2=0;
   	string nave;
   	int opcion;
   	
   	
   	
   	//Mapa de naves averiadas;
  
	
	//Mapa de opciones:
	unordered_map<string, int> opciones_map{
		{"a", 1},
		
		{"b", 2},
		
		{"s", 3},
		
		{"c", 4},
		
		{"l", 5}
	};
	
	
	//Mapa de naves destruidas:
	unordered_map<string, string> destruidos_map{
	     
	     {"a", "Portaaviones Destruido! + 3Pts"},
	     
	     {"b", "buque Destruido! + 3Pts"},
	     
	     {"s", "Submarino Destruido! +3 Pts"},
	     
	     {"c", "crucero Destruido! +3 Pts"},
	     
	     {"l", "lancha Destruida! +3 Pts"}
	     
	     };
   	
   	
   	Tablatiro(T_tiro1);
   	Tablatiro(T_tiro2);
	   
	   
	while(rondas<13 && Cbarcos1>0 && Cbarcos2>0){
	 cout<<"\n"<<endl;
	 cout<<"Ronda :"<<rondas<<endl;
	 cout<<"\nBarcos Restantes jugador 1: "<<Cbarcos1<<endl;
	 cout<<"Barcos Restantes jugador 2: "<<Cbarcos2<<endl;
	 cout<<"\nPuntos Jugador 1:"<<puntos1<<endl;
	 cout<<"Puntos jugador 2: "<<puntos2<<endl;
	 system("pause");
	     	

	   	cout<<"\n-----------Turno del Jugador 1-------------------"<<endl;
	   	
	   	cout<<"\nTabla de naves J1:"<<endl;
	   	Mostrartablero(Tj1);
	   	cout<<endl;
	   	cout<<"\nTabla de tiros J1:"<<endl;
	   	Mostrartablero(T_tiro1);
	   	cout<<endl;
	   	
	   	do{
   		cout<<"Horizontal (1), Vertical (2)"<<endl;
   	    cout<<"\nDigite la direccion del  tiro: ";
   	    cin>>posicion;
	   }while(posicion!= 1 && posicion!=2);
	   
	   if(posicion==1){
	   	cout<<"Digite las coordenadas del tiro"<<endl;
	   	cin>>fila>>columna;
	   }else{
	   	cout<<"Digite las coordenadas del tiro"<<endl;
	   	cin>>columna>>fila;
	   }
	   cout<<"\n"<<endl;
	   
   		if(Tj2[fila][columna]!="+"){
   			bool ubicado=false;
   		    nave=Tj2[fila][columna];
   		    opcion=opciones_map[nave];
 
   			cout<<"\n"<<endl;
   			T_tiro1[fila][columna]="x";
   			Tj2[fila][columna]="x";
   			comprobar_impacto(ubicado,fila,columna,opcion,Tj2);
   		    impacto(opcion,puntos1,ubicado,Cbarcos2, destruidos_map);
   		
   			Mostrartablero(T_tiro1);
   			
		   }
		   else{
		   	cout<<"Tiro al agua"<<endl;
		   	T_tiro1[fila][columna]="o";
		   	Tj2[fila][columna]="o";
		   	Mostrartablero(T_tiro1);
		   }
	   	
			   system("pause");
			   cout<<endl;
			   
		    cout<<"\n---------------------Turno Jugador 2-----------------------"<<endl;
			   
			cout<<endl;
			cout<<"\nTabla de naves J2: "<<endl;
			Mostrartablero(Tj2);
			cout<<endl;
			cout<<"\nTabla de tiros J2: "<<endl;
			Mostrartablero(T_tiro2);
			cout<<endl;
			   	
			   	
			   	do{
			   		cout<<"\nHorizontal (1), Vertical (2)"<<endl;
			   		cout<<"\nDigite la direccion del tiro: "<<endl;
			   		cin>>posicion;
			   		
				   }while(posicion!=1 && posicion!=2);
			   
			   
			        if(posicion==1){
	   	            cout<<"\nDigite las coordenadas del tiro: ";
	                cin>>fila>>columna;
	                cout<<endl;
	                }
	                else{
	   	            cout<<"\nDigite las coordenadas del tiro: ";
	   	             cin>>columna>>fila;
	               	cout<<endl;
	                 }
	                 cout<<"\n"<<endl;
	                 
	                if((Tj1[fila][columna])!="+"){
	                bool ubicado2=false;
   		            nave=Tj1[fila][columna];
   		            opcion=opciones_map[nave];
   		               
   			        cout<<"\n"<<endl;
   			        T_tiro2[fila][columna]="x";
   			        Tj1[fila][columna]="x";
   			        comprobar_impacto(ubicado2,fila,columna,opcion,Tj1);
   			        impacto(opcion,puntos2,ubicado2,Cbarcos1, destruidos_map);

   			        Mostrartablero(T_tiro2);
					 }
					 else{
					cout<<"\nTiro al agua!"<<endl;
			   	    Tj1[fila][columna]="o";
			   	    T_tiro2[fila][columna]="o";
			   	    Mostrartablero(T_tiro2);
					 }
	                
			   
			   rondas++;
			   system("pause");
			   
			   }
			   
	   	 	cout<<"\nRESULTADO FINAL: "<<endl;
	   	 	cout<<endl;
	   	 		cout<<"Jugador 1: "<<endl;
	   	 	cout<<"\nBarcos: "<<Cbarcos1<<endl;
	   	 	cout<<"\nPuntos totales: "<<puntos1<<endl;
	   	 	cout<<endl;
	   	 	cout<<"Jugador2: "<<endl;
	   	 	cout<<"\nBarcos: "<<Cbarcos2<<endl;
	   	 	cout<<"\nPuntos totales: "<<puntos2<<endl;
	   	 	
	   	 	cout<<endl;
	   	 	
	   	 	if(Cbarcos2==0 || puntos1>puntos2 || Cbarcos1>Cbarcos2){
				cout<<"\nGanador: Jugador 1!";
				}
			else if(Cbarcos1==0 || puntos2>puntos1 || Cbarcos2>Cbarcos1){
				cout<<"\nGanador: Jugador 2!";	
				}
			else{
			cout<<"\nEmpate!";
			}
			   
		   
			   
}



