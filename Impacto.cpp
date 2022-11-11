#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;



void impacto(int opcion,int& Puntaje,bool ubicacion,int& Cantbarco, unordered_map<string, string> ump_string){
   		
   		switch(opcion){
   			
    case 1 :
	  if(ubicacion==false){
	  cout<<ump_string["a"]<<endl;
	   Puntaje+=3; 
	    Cantbarco--;
			}
			   
	  if(ubicacion==true){
		cout<<"Portaavion averiado! + 2Pts"<<endl;
		Puntaje+=2;
			}
			   
		break;    
   			
   	case 2 :  
	 if(ubicacion==false){
		cout<<ump_string["b"]<<endl;
		Puntaje+=3;
		Cantbarco--;
		 }
		else{
		cout<<"Buque averiado! + 2 Pts"<<endl;
		Puntaje+=2;
		 }
   	      break;
   			     
   			     
   			          
   case 3 : 
   	if(ubicacion==false){
   	cout<<ump_string["s"]<<endl;
   	 Puntaje+=3;
   	    Cantbarco--;
			}
			
	if(ubicacion==true){
		cout<<"Submarino averiado! +2 Pts"<<endl;
		Puntaje+=2;	
			}
		
		break;
   		              
   		              
   	case 4 :
   	
	if(ubicacion==false){
   	cout<<ump_string["c"]<<endl;
   	Puntaje+=3;
   	Cantbarco--;
	 }
	else{
	cout<<"crucero averiado! +2 Pts"<<endl;
	Puntaje+=2;
	}
   
    break;
   		           
   		              
    case 5 :
   		
	cout<<ump_string["l"]<<endl;
   	Puntaje+=3; 
	 Cantbarco--;
	break;
		
   				
    }
   		
   		
 }
