#include <iostream>
#include <string>

using namespace std;

extern bool Lim_uno;
extern bool Lim_dos;
extern bool Lim_tres;
extern bool Lim_cuatro;
extern bool Lim_cinco;
extern bool Lim_seis;

void Comprobar_Direccion(int pos,int f,int c);

bool invalidar_nave(int ps,bool& inv_nave,int f, int c,int Selec_barco, string tab[][10]){
	int i=0;
	inv_nave=false;



switch(Selec_barco){

	case 1:
		Comprobar_Direccion(ps,f,c);
		
		while(Lim_uno==true && inv_nave==false && i<=4){
		if(tab[f][c+1]!="+" || tab[f+1][c]!="+"){
		inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;
		}
	    }
			 
		while(Lim_dos==true && i<=4 && inv_nave==false){
		if(tab[f][c-1]!="+"||tab[f][c+1]!="+"||tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;	
		}
	    }
				
		while(Lim_tres==true && i<=4 && inv_nave==false){
			if(tab[f][c+1]!="+"||tab[f+1][c]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		c++;
		i++;
		}
							
					
	    while(Lim_cuatro==true && i<=4 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f][c-1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((f==9 && c==0) && (tab[f][c-1]=="+" || tab[f][c-1]!="+")){inv_nave=false;}
		if((f==9 && c==0) && tab[f-1][c]!="+"){inv_nave=true;}
		c++;
		i++;
		}	
						    				 
		while(Lim_seis==true && i<=3 && inv_nave==false){
		 if(tab[f+1][c]!="+"|| tab[f][c+1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		 if((c==9 && (f!=9||f!=0) ) && (tab[f+1][c]!="+" || tab[f-1][c]!="+" || tab[f][c-1]!="+") ){
		inv_nave=true;}
		f++;
		i++;
		}
		
			
										  
		 while(Lim_cinco==true && i<=3 && inv_nave==false){
		 if(tab[f+1][c]!="+"||tab[f-1][c]!="+"||tab[f][c+1]!="+"||tab[f][c-1]!="+"){inv_nave=true;}
		 if(ps==2){
	     f++;
		 i++;
		 }
		 else{
		 c++;
		 i++;
		 }
	     }
	     
	     break;
	     
	
	case 2:
		
		
		Comprobar_Direccion(ps,f,c);
		
		while(Lim_uno==true && inv_nave==false && i<=3){
		if(tab[f][c+1]!="+" || tab[f+1][c]!="+"){
		inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;
		}
	    }
	    
	    if(inv_nave==true){inv_nave=false;}
		
		
		while(Lim_dos==true && i<=3 && inv_nave==false){
		if(tab[f][c-1]!="+"||tab[f][c+1]!="+"||tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;	
		}
	    }
	    
	    while(Lim_tres==true && i<=3 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f+1][c]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;	
		}
		else{
		c++;
		i++;
	    }
		}
		
		while(Lim_cuatro==true && i<=3 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f][c-1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((f==9 && c==0) && (tab[f][c-1]=="+" || tab[f][c-1]!="+")){inv_nave=false;}
		if((f==9 && c==0) && tab[f-1][c]!="+"){inv_nave=true;}
		c++;
		i++;
		}	
		
		while( Lim_seis==true && i<=3 && inv_nave==false){
		if(tab[f+1][c]!="+"|| tab[f][c+1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((c==9 && (f!=9||f!=0) ) && (tab[f+1][c]!="+" || tab[f-1][c]!="+" || tab[f][c-1]!="+") ){
		inv_nave=true;}
		f++;
		i++;
		}
		
		
		 while(Lim_cinco==true && i<=3 && inv_nave==false){
		 if(tab[f+1][c]!="+"||tab[f-1][c]!="+"||tab[f][c+1]!="+"||tab[f][c-1]!="+"){inv_nave=true;}
		 if(ps==2){
	     f++;
		 i++;
		 }
		 else{
		 c++;
		 i++;
		 }
	     }
	     
	     break;
	     
	
	case 3:
		Comprobar_Direccion(ps,f,c);
		
		while(Lim_uno==true && inv_nave==false && i<=2){
		if(tab[f][c+1]!="+" || tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;
		}
	    }
	    if(inv_nave==true){Lim_uno=false;}
	    
	    
	    while(Lim_dos==true && i<=2 && inv_nave==false){
		if(tab[f][c-1]!="+"||tab[f][c+1]!="+"||tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;	
		}
	    }
	    
	    
	    while(Lim_tres==true && i<=2 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f+1][c]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;	
		}
		else{
		c++;
		i++;
	    }
		}
		
		
		while(Lim_cuatro==true && i<=2 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f][c-1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((f==9 && c==0) && (tab[f][c-1]=="+" || tab[f][c-1]!="+")){inv_nave=false;}
		if((f==9 && c==0) && tab[f-1][c]!="+"){inv_nave=true;}
		c++;
		i++;
		}
		
		while(Lim_seis==true && i<=2 && inv_nave==false){
		if(tab[f+1][c]!="+"|| tab[f][c+1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((c==9 && (f!=9||f!=0) ) && (tab[f+1][c]!="+" || tab[f-1][c]!="+" || tab[f][c-1]!="+") ){
		inv_nave=true;}
		f++;
		i++;
		}
		
		
		while(Lim_cinco==true && i<=2 && inv_nave==false){
		 if(tab[f+1][c]!="+"||tab[f-1][c]!="+"||tab[f][c+1]!="+"||tab[f][c-1]!="+"){inv_nave=true;}
		 if(ps==2){
	     f++;
		 i++;
		 }
		 else{
		 c++;
		 i++;
		 }
	     }
	     
	     break;
	     
	case 4:
   
   	Comprobar_Direccion(ps,f,c);
   	

   	while(Lim_uno==true && inv_nave==false && i<=1){
		if(tab[f][c+1]!="+" || tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;
		}
	    }
	    if(inv_nave==true){Lim_uno=false;}
	    
	    
	    while(Lim_dos==true && i<=1 && inv_nave==false){
		if(tab[f][c-1]!="+"||tab[f][c+1]!="+"||tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;	
		}
	    }
	    
	    
	    while(Lim_tres==true && i<=1 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f+1][c]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;	
		}
		else{
		c++;
		i++;
	    }
		}
		
		//Cuatro
		while(Lim_cuatro==true && i<=1 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f][c-1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((f==9 && c==0) && (tab[f][c-1]=="+" || tab[f][c-1]!="+")){inv_nave=false;}
		if((f==9 && c==0) && tab[f-1][c]!="+"){inv_nave=true;}
		c++;
		i++;
		}
		
		while(Lim_seis==true && i<=1 && inv_nave==false){
		if(tab[f+1][c]!="+"|| tab[f][c+1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((c==9 && (f!=9||f!=0) ) && (tab[f+1][c]!="+" || tab[f-1][c]!="+" || tab[f][c-1]!="+") ){
		inv_nave=true;}
		f++;
		i++;
		}
		
	
		while(Lim_cinco==true && i<=1 && inv_nave==false){
		 if(tab[f+1][c]!="+"||tab[f-1][c]!="+"||tab[f][c+1]!="+"||tab[f][c-1]!="+"){inv_nave=true;}
		 if(ps==2){
	     f++;
		 i++;
		 }
		 else{
		 c++;
		 i++;
		 }
	    }
	     
	    break;
	     
	case 5:
	
     	Comprobar_Direccion(ps,f,c);
   	
   	while(Lim_uno==true && inv_nave==false && i<=1){
		if(tab[f][c+1]!="+" || tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;
		}
	    }
	    if(inv_nave==true){Lim_uno=false;}
	    
	    
	    while(Lim_dos==true && i<=1 && inv_nave==false){
		if(tab[f][c-1]!="+"||tab[f][c+1]!="+"||tab[f+1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;
		}
		else{
		c++;
		i++;	
		}
	    }
	    
	    
	    while(Lim_tres==true && i<=1 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f+1][c]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if(ps==2){
		f++;
		i++;	
		}
		else{
		c++;
		i++;
	    }
		}
		
		while(Lim_cuatro==true && i<=1 && inv_nave==false){
		if(tab[f][c+1]!="+"||tab[f][c-1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((f==9 && c==0) && (tab[f][c-1]=="+" || tab[f][c-1]!="+")){inv_nave=false;}
		if((f==9 && c==0) && tab[f-1][c]!="+"){inv_nave=true;}
		c++;
		i++;
		}
		
		while(Lim_seis==true && i<=1 && inv_nave==false){
		if(tab[f+1][c]!="+"|| tab[f][c+1]!="+"||tab[f-1][c]!="+"){inv_nave=true;}
		if((c==9 && (f!=9||f!=0) ) && (tab[f+1][c]!="+" || tab[f-1][c]!="+" || tab[f][c-1]!="+") ){
		inv_nave=true;}
		f++;
		i++;
		}
		
		while(Lim_cinco==true && i<=1 && inv_nave==false){
		 if(tab[f+1][c]!="+"||tab[f-1][c]!="+"||tab[f][c+1]!="+"||tab[f][c-1]!="+"){inv_nave=true;}
		 if(ps==2){
	     f++;
		 i++;
		 }
		 else{
		 c++;
		 i++;
		 }
	     }

  }
	 
	
}
	
	    
	    
	    
	    
	    
	    
	    
	    

		  
	
