#include <iostream>
#include <string>

using namespace std;

extern string Tj1[][10];
extern string Tj2[][10];



bool invalidar_coordenada(int pos, bool& rangos,int barco,int fl, int cl, string tabla[][10]){


	switch(barco){
    			
    case 1:

    	if( (pos==1 || pos==2) && fl==9 && cl==9){rangos=true;}
    	
	    if( pos==1 && fl!=9 && cl==9){rangos=true;}
	     
		if( (cl==6 || cl==7 || cl==8) && ( (fl!=9 || fl==9) && pos==1) ){rangos=true;}
		
		
        if( pos==2 && cl!=9 && fl==9 ){rangos=true;}
    
        if((fl==6 || fl==7 || fl==8) && ( (cl==9 || cl!=9) && pos==2) ){rangos=true;}
        	
		    break;
					
					
	case 2:
    				
    	if( (pos==1 || pos==2) && fl==9 && cl==9){rangos=true;}
    	
		if( pos==1 && fl!=9 && cl==9){rangos=true;}
		
		if((cl==7 || cl==8) && ( (fl!=9 || fl==9) && pos==1) ){rangos=true;}
				    
				    
		if(pos==2 && cl!=9 && fl==9 ){rangos=true;}
		 
		if( (fl==7 || fl==8) && ( (cl==9 || cl!=9) && pos==2) ){rangos=true;}
		
		     break;
				     
			    
	case 3:
		
    	if( (pos==1 || pos==2) && fl==9 && cl==9){rangos=true;}
    	
		if(  (cl==8 || cl==9) && ( (fl!=9 || fl==9) && pos==1) ){rangos=true;}
		
		
		if( pos==2 && cl!=9 && fl==9 ){rangos=true;}
		
		if( (fl==8 || fl==9) && ( (cl!=9 || cl==9) && pos==2) ){rangos=true;}
				
				break;
				
				    
	case 4:
    	
		if( (pos==1 || pos==2) && fl==9 && cl==9){rangos=true;}
		
		if( cl==9 && ( (fl!=9 || fl==9) && pos==1) ){rangos=true;}
		
		if(fl==9 && ( (cl!=9 || cl==9) && pos==2) ){rangos=true;}
					
					
		}
	
	
	 return rangos;		   			   
}
					
			    	
    			
			

		

