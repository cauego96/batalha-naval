#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
int x,y,cru,sub,enc,por,hid,escolha,verdade,PCacertou=1,Macertou=1,volta=0,continua=1,Mtotal=38,PCtotal=38,tentativa=0,PCbarco,a,b,coordenada=0,dadosalvo=0 ;
char M[17][17],PC[17][17],Mjogo[17][17],PCjogo[17][17],z[2];



for(x=0;x<=16;x++){
	for(y=0;y<=16;y++){
		M[x][y]=0;
	}
}
printf(" Bem Vindo ao Batalha Naval \n");
printf(" Esse e o campo de batalha \n");
    x=1;
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
	printf("   -------------------------------------------------------------");
	printf("\n A |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=2;
	printf("\n B |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=3;
	printf("\n C |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=4;
	printf("\n D |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=5;
	printf("\n E |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=6;
	printf("\n F |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=7;
	printf("\n G |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=8;
	printf("\n H |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=9;
	printf("\n I |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=10;
	printf("\n J |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=11;
	printf("\n L |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=12;
	printf("\n M |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=13;
	printf("\n N |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=14;
	printf("\n O |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=15;
	printf("\n P |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	printf("\n");
	printf("   -------------------------------------------------------------");
	
printf("\n As linhas vao de A ate P e as colunas vao de 1 ate 15 \n");
printf(" Barcos sempre tem que ter um quadrado em branco em toda a sua volta, ou seja,\nvoce nao pode colocar barcos colados \n");
printf(" Voce tem a sua disposicao: \n ->  4 submarinos (1 quadrado) \n ->  3 cruzadores (2 quadrados) \n ->  2 encouracados (4 quadrados) \n ->  1 porta-aviao (5 quadrados) \n ->  5 hidroavioes (3 quadrados, formato de V)\n"); 
printf(" Posicione seus barcos \n ");

//MINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZ

sub=4;
while(sub>0){
    x=99;
    verdade=0;
	printf("\n Voce tem direito a %d Submarinos: \n",sub);
	printf(" Digite as coordenadas: \n");
	printf(" Linha: ");
	scanf("%s",z);
	if((strcmp(z,"A")==0)||(strcmp(z,"a")==0))
		x=1;
	if((strcmp(z,"B")==0)||(strcmp(z,"b")==0))
		x=2;
	if((strcmp(z,"C")==0)||(strcmp(z,"c")==0))
		x=3;
	if((strcmp(z,"D")==0)||(strcmp(z,"d")==0))
		x=4;
	if((strcmp(z,"E")==0)||(strcmp(z,"e")==0))
		x=5;
	if((strcmp(z,"F")==0)||(strcmp(z,"f")==0))
		x=6;
	if((strcmp(z,"G")==0)||(strcmp(z,"g")==0))
		x=7;
	if((strcmp(z,"H")==0)||(strcmp(z,"h")==0))
		x=8;
	if((strcmp(z,"I")==0)||(strcmp(z,"i")==0))
		x=9;
	if((strcmp(z,"J")==0)||(strcmp(z,"j")==0))
		x=10;
	if((strcmp(z,"L")==0)||(strcmp(z,"l")==0))
		x=11;
	if((strcmp(z,"M")==0)||(strcmp(z,"m")==0))
		x=12;
	if((strcmp(z,"N")==0)||(strcmp(z,"n")==0))
		x=13;
	if((strcmp(z,"O")==0)||(strcmp(z,"o")==0))
		x=14;
	if((strcmp(z,"P")==0)||(strcmp(z,"p")==0))
		x=15;

	printf(" Coluna: ");																									
	scanf("%d",&y);

	
	if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)){
		if((M[x][y]!=1)&&(M[x+1][y]!=1)&&(M[x-1][y]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y-1]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y-1]!=1)){
			M[x][y]=1;
			verdade=1;
		}
		else
		    verdade=0;
	}
	else
	    verdade=2;
	    
    	x=1;
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
	printf("   -------------------------------------------------------------");
	printf("\n A |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=2;
	printf("\n B |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=3;
	printf("\n C |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=4;
	printf("\n D |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=5;
	printf("\n E |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=6;
	printf("\n F |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=7;
	printf("\n G |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=8;
	printf("\n H |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=9;
	printf("\n I |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=10;
	printf("\n J |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=11;
	printf("\n L |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=12;
	printf("\n M |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=13;
	printf("\n N |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=14;
	printf("\n O |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=15;
	printf("\n P |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	printf("\n");
	printf("   -------------------------------------------------------------");
	
	if(verdade==1)
	    	sub--;
	if(verdade==2)
		printf("\n Coordenadas invalidas, lembre-se,\nlinhas vao de A ate P, e colunas de 1 ate 15\n");
	if(verdade==0)
        	printf("\n Existe um barco muito proximo, lembre-se,\nsempre devera existir um quadrado em branco entre os barcos\n");
}
printf("\n Submarinos posicionados com sucesso \n");


cru=3;
while(cru>0){
    x=99;
    verdade=0;
	printf("\n Voce tem direito a %d Cruzadores: \n",cru);
	printf(" Digite as coordenadas: \n");
	printf(" Linha: ");
	scanf("%s",z);
	if((strcmp(z,"A")==0)||(strcmp(z,"a")==0))
		x=1;
	if((strcmp(z,"B")==0)||(strcmp(z,"b")==0))
		x=2;
	if((strcmp(z,"C")==0)||(strcmp(z,"c")==0))
		x=3;
	if((strcmp(z,"D")==0)||(strcmp(z,"d")==0))
		x=4;
	if((strcmp(z,"E")==0)||(strcmp(z,"e")==0))
		x=5;
	if((strcmp(z,"F")==0)||(strcmp(z,"f")==0))
		x=6;
	if((strcmp(z,"G")==0)||(strcmp(z,"g")==0))
		x=7;
	if((strcmp(z,"H")==0)||(strcmp(z,"h")==0))
		x=8;
	if((strcmp(z,"I")==0)||(strcmp(z,"i")==0))
		x=9;
	if((strcmp(z,"J")==0)||(strcmp(z,"j")==0))
		x=10;
	if((strcmp(z,"L")==0)||(strcmp(z,"l")==0))
		x=11;
	if((strcmp(z,"M")==0)||(strcmp(z,"m")==0))
		x=12;
	if((strcmp(z,"N")==0)||(strcmp(z,"n")==0))
		x=13;
	if((strcmp(z,"O")==0)||(strcmp(z,"o")==0))
		x=14;
	if((strcmp(z,"P")==0)||(strcmp(z,"p")==0))
		x=15;

	printf(" Coluna: ");																									
	scanf("%d",&y);

	printf(" Digite, Cruzador virado para: (1)cima, (2)baixo, (3)esquerda ou (4)direita: " );
	scanf("%d",&escolha);
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)){
			if((M[x][y]!=1)&&(M[x-1][y]!=1)&&(M[x-2][y]!=1)&&(M[x+1][y]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y-1]!=1)&&(M[x-2][y+1]!=1)&&(M[x-2][y-1]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y-1]!=1)){
				M[x][y]=1;
				M[x-1][y]=1;
				verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)){
			if((M[x][y]!=1)&&(M[x-1][y]!=1)&&(M[x+2][y]!=1)&&(M[x+1][y]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y-1]!=1)&&(M[x+2][y+1]!=1)&&(M[x+2][y-1]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y-1]!=1)){
				M[x][y]=1;
				M[x+1][y]=1;
				verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y-1>=1)){
			if((M[x][y]!=1)&&(M[x][y-1]!=1)&&(M[x][y-2]!=1)&&(M[x][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y-2]!=1)&&(M[x-1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y-2]!=1)&&(M[x+1][y+1]!=1)){
				M[x][y]=1;
				M[x][y-1]=1;
		    		verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y+1<=15)){
			if((M[x][y]!=1)&&(M[x][y-1]!=1)&&(M[x][y+2]!=1)&&(M[x][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y+2]!=1)&&(M[x-1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y+2]!=1)&&(M[x+1][y+1]!=1)){
				M[x][y]=1;
				M[x][y+1]=1;
				verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
	}
    	x=1;
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
	printf("   -------------------------------------------------------------");
	printf("\n A |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=2;
	printf("\n B |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=3;
	printf("\n C |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=4;
	printf("\n D |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=5;
	printf("\n E |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=6;
	printf("\n F |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=7;
	printf("\n G |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=8;
	printf("\n H |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=9;
	printf("\n I |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=10;
	printf("\n J |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=11;
	printf("\n L |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=12;
	printf("\n M |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=13;
	printf("\n N |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=14;
	printf("\n O |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=15;
	printf("\n P |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	printf("\n");
	printf("   -------------------------------------------------------------");
	
	if(verdade==1)
	    	cru--;
	if(verdade==2)
		printf("\n Coordenadas invalidas, lembre-se,\nlinhas vao de A ate P, e colunas de 1 ate 15\n");
	if(verdade==0)
        	printf("\n Existe um barco muito proximo, lembre-se,\nsempre devera existir um quadrado em branco entre os barcos\n");
}
printf("\n Cruzadores posicionados com sucesso \n");


enc=2;
while(enc>0){
    x=99;
    verdade=0;
	printf("\n Voce tem direito a %d Encouracados: \n",enc);
	printf(" Digite as coordenadas: \n");
	printf(" Linha: ");
	scanf("%s",z);
	if((strcmp(z,"A")==0)||(strcmp(z,"a")==0))
		x=1;
	if((strcmp(z,"B")==0)||(strcmp(z,"b")==0))
		x=2;
	if((strcmp(z,"C")==0)||(strcmp(z,"c")==0))
		x=3;
	if((strcmp(z,"D")==0)||(strcmp(z,"d")==0))
		x=4;
	if((strcmp(z,"E")==0)||(strcmp(z,"e")==0))
		x=5;
	if((strcmp(z,"F")==0)||(strcmp(z,"f")==0))
		x=6;
	if((strcmp(z,"G")==0)||(strcmp(z,"g")==0))
		x=7;
	if((strcmp(z,"H")==0)||(strcmp(z,"h")==0))
		x=8;
	if((strcmp(z,"I")==0)||(strcmp(z,"i")==0))
		x=9;
	if((strcmp(z,"J")==0)||(strcmp(z,"j")==0))
		x=10;
	if((strcmp(z,"L")==0)||(strcmp(z,"l")==0))
		x=11;
	if((strcmp(z,"M")==0)||(strcmp(z,"m")==0))
		x=12;
	if((strcmp(z,"N")==0)||(strcmp(z,"n")==0))
		x=13;
	if((strcmp(z,"O")==0)||(strcmp(z,"o")==0))
		x=14;
	if((strcmp(z,"P")==0)||(strcmp(z,"p")==0))
		x=15;

	printf(" Coluna: ");																									
	scanf("%d",&y);

	printf(" Digite, Encouracado virado para: (1)cima, (2)baixo, (3)esquerda ou (4)direita: " );
	scanf("%d",&escolha);
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(x-2>=1)&&(x-3>=1)){
            if((M[x][y]!=1)&&(M[x-1][y]!=1)&&(M[x-2][y]!=1)&&(M[x-3][y]!=1)&&(M[x-4][y]!=1)&&(M[x+1][y]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y-1]!=1)&&(M[x-2][y+1]!=1)&&(M[x-2][y-1]!=1)&&(M[x-3][y+1]!=1)&&(M[x-3][y-1]!=1)&&(M[x-4][y+1]!=1)&&(M[x-4][y-1]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y-1]!=1)){
                    M[x][y]=1;
			    	M[x-1][y]=1;
			    	M[x-2][y]=1;
			    	M[x-3][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(x+2<=15)&&(x+3<=15)){
	    		if((M[x][y]!=1)&&(M[x-1][y]!=1)&&(M[x+2][y]!=1)&&(M[x+3][y]!=1)&&(M[x+4][y]!=1)&&(M[x+1][y]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y-1]!=1)&&(M[x+2][y+1]!=1)&&(M[x+2][y-1]!=1)&&(M[x+3][y+1]!=1)&&(M[x+3][y-1]!=1)&&(M[x+4][y+1]!=1)&&(M[x+4][y-1]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y-1]!=1)){
			    	M[x][y]=1;
			    	M[x+1][y]=1;
			    	M[x+2][y]=1;
			    	M[x+3][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y-1>=1)&&(y-2>=1)&&(y-3>=1)){
			if((M[x][y]!=1)&&(M[x][y-1]!=1)&&(M[x][y-2]!=1)&&(M[x][y-3]!=1)&&(M[x][y-4]!=1)&&(M[x][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y-2]!=1)&&(M[x-1][y-3]!=1)&&(M[x-1][y-4]!=1)&&(M[x-1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y-2]!=1)&&(M[x+1][y-3]!=1)&&(M[x+1][y-4]!=1)&&(M[x+1][y+1]!=1)){
			    	M[x][y]=1;
			    	M[x][y-1]=1;
			    	M[x][y-2]=1;
			    	M[x][y-3]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y+1<=15)&&(y+2<=15)&&(y+3<=15)){
			if((M[x][y]!=1)&&(M[x][y-1]!=1)&&(M[x][y+2]!=1)&&(M[x][y+3]!=1)&&(M[x][y+4]!=1)&&(M[x][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y+2]!=1)&&(M[x-1][y+3]!=1)&&(M[x-1][y+4]!=1)&&(M[x-1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y+2]!=1)&&(M[x+1][y+3]!=1)&&(M[x+1][y+4]!=1)&&(M[x+1][y+1]!=1)){
			    	M[x][y]=1;
			    	M[x][y+1]=1;
			    	M[x][y+2]=1;
			    	M[x][y+3]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
	}
    	x=1;
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
	printf("   -------------------------------------------------------------");
	printf("\n A |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=2;
	printf("\n B |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=3;
	printf("\n C |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=4;
	printf("\n D |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=5;
	printf("\n E |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=6;
	printf("\n F |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=7;
	printf("\n G |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=8;
	printf("\n H |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=9;
	printf("\n I |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=10;
	printf("\n J |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=11;
	printf("\n L |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=12;
	printf("\n M |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=13;
	printf("\n N |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=14;
	printf("\n O |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=15;
	printf("\n P |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	printf("\n");
	printf("   -------------------------------------------------------------");
	
	if(verdade==1)
	    	enc--;
	if(verdade==2)
		printf("\n Coordenadas invalidas, lembre-se,\nlinhas vao de A ate P, e colunas de 1 ate 15\n");
	if(verdade==0)
        	printf("\n Existe um barco muito proximo, lembre-se,\nsempre devera existir um quadrado em branco entre os barcos\n");
}
printf("\n Encouracados posicionados com sucesso \n");


por=1;
while(por>0){
    x=99;
    verdade=0;
	printf("\n Voce tem direito a %d Porta-aviao: \n",por);
	printf(" Digite as coordenadas: \n");
	printf(" Linha: ");
	scanf("%s",z);
	if((strcmp(z,"A")==0)||(strcmp(z,"a")==0))
		x=1;
	if((strcmp(z,"B")==0)||(strcmp(z,"b")==0))
		x=2;
	if((strcmp(z,"C")==0)||(strcmp(z,"c")==0))
		x=3;
	if((strcmp(z,"D")==0)||(strcmp(z,"d")==0))
		x=4;
	if((strcmp(z,"E")==0)||(strcmp(z,"e")==0))
		x=5;
	if((strcmp(z,"F")==0)||(strcmp(z,"f")==0))
		x=6;
	if((strcmp(z,"G")==0)||(strcmp(z,"g")==0))
		x=7;
	if((strcmp(z,"H")==0)||(strcmp(z,"h")==0))
		x=8;
	if((strcmp(z,"I")==0)||(strcmp(z,"i")==0))
		x=9;
	if((strcmp(z,"J")==0)||(strcmp(z,"j")==0))
		x=10;
	if((strcmp(z,"L")==0)||(strcmp(z,"l")==0))
		x=11;
	if((strcmp(z,"M")==0)||(strcmp(z,"m")==0))
		x=12;
	if((strcmp(z,"N")==0)||(strcmp(z,"n")==0))
		x=13;
	if((strcmp(z,"O")==0)||(strcmp(z,"o")==0))
		x=14;
	if((strcmp(z,"P")==0)||(strcmp(z,"p")==0))
		x=15;

	printf(" Coluna: ");																								
	scanf("%d",&y);

	printf(" Digite, Porta-aviao virado para: (1)cima, (2)baixo, (3)esquerda ou (4)direita: " );
	scanf("%d",&escolha);
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(x-2>=1)&&(x-3>=1)&&(x-4>=1)){
	    		if((M[x][y]!=1)&&(M[x-1][y]!=1)&&(M[x-2][y]!=1)&&(M[x-3][y]!=1)&&(M[x-4][y]!=1)&&(M[x-5][y]!=1)&&(M[x+1][y]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y-1]!=1)&&(M[x-2][y+1]!=1)&&(M[x-2][y-1]!=1)&&(M[x-3][y+1]!=1)&&(M[x-3][y-1]!=1)&&(M[x-4][y+1]!=1)&&(M[x-4][y-1]!=1)&&(M[x-5][y+1]!=1)&&(M[x-5][y-1]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y-1]!=1)){
				M[x][y]=1;
			    	M[x-1][y]=1;
			    	M[x-2][y]=1;
			    	M[x-3][y]=1;
				M[x-4][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(x+2<=15)&&(x+3<=15)&&(x+4<=15)){
	    		if((M[x][y]!=1)&&(M[x-1][y]!=1)&&(M[x+2][y]!=1)&&(M[x+3][y]!=1)&&(M[x+4][y]!=1)&&(M[x+5][y]!=1)&&(M[x+1][y]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y-1]!=1)&&(M[x+2][y+1]!=1)&&(M[x+2][y-1]!=1)&&(M[x+3][y+1]!=1)&&(M[x+3][y-1]!=1)&&(M[x+4][y+1]!=1)&&(M[x+4][y-1]!=1)&&(M[x+5][y+1]!=1)&&(M[x+5][y-1]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y-1]!=1)){
			    	M[x][y]=1;
			    	M[x+1][y]=1;
			    	M[x+2][y]=1;
			    	M[x+3][y]=1;
				M[x+4][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y-1>=1)&&(y-2>=1)&&(y-3>=1)&&(y-4>=1)){
			if((M[x][y]!=1)&&(M[x][y-1]!=1)&&(M[x][y-2]!=1)&&(M[x][y-3]!=1)&&(M[x][y-4]!=1)&&(M[x][y-5]!=1)&&(M[x][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y-2]!=1)&&(M[x-1][y-3]!=1)&&(M[x-1][y-4]!=1)&&(M[x-1][y-5]!=1)&&(M[x-1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y-2]!=1)&&(M[x+1][y-3]!=1)&&(M[x+1][y-4]!=1)&&(M[x+1][y-5]!=1)&&(M[x+1][y+1]!=1)){
			    	M[x][y]=1;
			    	M[x][y-1]=1;
			    	M[x][y-2]=1;
			    	M[x][y-3]=1;
				M[x][y-4]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y+1<=15)&&(y+2<=15)&&(y+3<=15)&&(y+4<=15)){
			if((M[x][y]!=1)&&(M[x][y-1]!=1)&&(M[x][y+2]!=1)&&(M[x][y+3]!=1)&&(M[x][y+4]!=1)&&(M[x][y+5]!=1)&&(M[x][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y+2]!=1)&&(M[x-1][y+3]!=1)&&(M[x-1][y+4]!=1)&&(M[x-1][y+5]!=1)&&(M[x-1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y+2]!=1)&&(M[x+1][y+3]!=1)&&(M[x+1][y+4]!=1)&&(M[x+1][y+5]!=1)&&(M[x+1][y+1]!=1)){
			    	M[x][y]=1;
			    	M[x][y+1]=1;
			    	M[x][y+2]=1;
			    	M[x][y+3]=1;
				M[x][y+4]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
	}
    	x=1;
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
	printf("   -------------------------------------------------------------");
	printf("\n A |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=2;
	printf("\n B |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=3;
	printf("\n C |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=4;
	printf("\n D |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=5;
	printf("\n E |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=6;
	printf("\n F |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=7;
	printf("\n G |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=8;
	printf("\n H |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=9;
	printf("\n I |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=10;
	printf("\n J |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=11;
	printf("\n L |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=12;
	printf("\n M |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=13;
	printf("\n N |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=14;
	printf("\n O |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=15;
	printf("\n P |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	printf("\n");
	printf("   -------------------------------------------------------------");
	
	if(verdade==1)
	    	por--;
	if(verdade==2)
		printf("\n Coordenadas invalidas, lembre-se,\nlinhas vao de A ate P, e colunas de 1 ate 15\n");
	if(verdade==0)
        	printf("\n Existe um barco muito proximo, lembre-se,\nsempre devera existir um quadrado em branco entre os barcos\n");
}
printf("\n Porta-aviao posicionado com sucesso \n");


hid=5;
while(hid>0){
    x=99;    
    verdade=0;
	printf("\n Voce tem direito a %d Hidroavioes: \n",hid);
	printf(" Digite as coordenadas: \n");
	printf(" Linha: ");
	scanf("%s",z);
	if((strcmp(z,"A")==0)||(strcmp(z,"a")==0))
		x=1;
	if((strcmp(z,"B")==0)||(strcmp(z,"b")==0))
		x=2;
	if((strcmp(z,"C")==0)||(strcmp(z,"c")==0))
		x=3;
	if((strcmp(z,"D")==0)||(strcmp(z,"d")==0))
		x=4;
	if((strcmp(z,"E")==0)||(strcmp(z,"e")==0))
		x=5;
	if((strcmp(z,"F")==0)||(strcmp(z,"f")==0))
		x=6;
	if((strcmp(z,"G")==0)||(strcmp(z,"g")==0))
		x=7;
	if((strcmp(z,"H")==0)||(strcmp(z,"h")==0))
		x=8;
	if((strcmp(z,"I")==0)||(strcmp(z,"i")==0))
		x=9;
	if((strcmp(z,"J")==0)||(strcmp(z,"j")==0))
		x=10;
	if((strcmp(z,"L")==0)||(strcmp(z,"l")==0))
		x=11;
	if((strcmp(z,"M")==0)||(strcmp(z,"m")==0))
		x=12;
	if((strcmp(z,"N")==0)||(strcmp(z,"n")==0))
		x=13;
	if((strcmp(z,"O")==0)||(strcmp(z,"o")==0))
		x=14;
	if((strcmp(z,"P")==0)||(strcmp(z,"p")==0))
		x=15;

	printf(" Coluna: ");																									
	scanf("%d",&y);

printf(" Digite, Hidroaviao virado para: (1)cima e direita, (2)cima e esquerda, (3)baixo e direita, (4)baixo e esquerda, (5)direita e baixo, (6)direita e cima, (7)esquerda e baixo ou (8)esquerda e cima: " );
	scanf("%d",&escolha);
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y+1<=15)&&(y+2<=15)){
			if((M[x][y]!=1)&&(M[x-1][y+1]!=1)&&(M[x][y+2]!=1)&&(M[x-2][y]!=1)&&(M[x-2][y+1]!=1)&&(M[x-2][y+2]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y+2]!=1)&&(M[x-1][y+3]!=1)&&(M[x][y-1]!=1)&&(M[x][y+1]!=1)&&(M[x][y+3]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y+2]!=1)&&(M[x+1][y+3]!=1)){
				M[x][y]=1;
				M[x-1][y+1]=1;
				M[x][y+2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y-1>=1)&&(y-2>=1)){
			if((M[x][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x][y-2]!=1)&&(M[x-2][y]!=1)&&(M[x-2][y-1]!=1)&&(M[x-2][y-2]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-2]!=1)&&(M[x-1][y-3]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x][y-3]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y-2]!=1)&&(M[x+1][y-3]!=1)){
				M[x][y]=1;
				M[x-1][y-1]=1;
				M[x][y-2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y+1<=15)&&(y+2<=15)){
			if((M[x][y]!=1)&&(M[x+1][y+1]!=1)&&(M[x][y+2]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y+2]!=1)&&(M[x-1][y+3]!=1)&&(M[x][y-1]!=1)&&(M[x][y+1]!=1)&&(M[x][y+3]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y+2]!=1)&&(M[x+1][y+3]!=1)&&(M[x+2][y]!=1)&&(M[x+2][y+1]!=1)&&(M[x+2][y+2]!=1)){
				M[x][y]=1;
				M[x+1][y+1]=1;
				M[x][y+2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y-1>=1)&&(y-2>=1)){
			if((M[x][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x][y-2]!=1)&&(M[x-1][y+1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y-2]!=1)&&(M[x-1][y-3]!=1)&&(M[x][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x][y-3]!=1)&&(M[x+1][y+1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y-2]!=1)&&(M[x+1][y-3]!=1)&&(M[x+2][y]!=1)&&(M[x+2][y-1]!=1)&&(M[x+2][y-2]!=1)){
				M[x][y]=1;
				M[x+1][y-1]=1;
				M[x][y-2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 5:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y+1<=15)&&(x+2<=15)){
			if((M[x][y]!=1)&&(M[x+1][y+1]!=1)&&(M[x+2][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x][y+1]!=1)&&(M[x][y+2]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y+2]!=1)&&(M[x+2][y-1]!=1)&&(M[x+2][y+1]!=1)&&(M[x+2][y+2]!=1)&&(M[x+3][y-1]!=1)&&(M[x+3][y]!=1)&&(M[x+3][y+1]!=1)){
				M[x][y]=1;
				M[x+1][y+1]=1;
				M[x+2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 6:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y+1<=15)&&(x-2>=1)){
			if((M[x][y]!=1)&&(M[x-1][y+1]!=1)&&(M[x-2][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y+1]!=1)&&(M[x][y-1]!=1)&&(M[x][y+1]!=1)&&(M[x][y+2]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y+2]!=1)&&(M[x-2][y-1]!=1)&&(M[x-2][y+1]!=1)&&(M[x-2][y+2]!=1)&&(M[x-3][y-1]!=1)&&(M[x-3][y]!=1)&&(M[x-3][y+1]!=1)){
				M[x][y]=1;
				M[x-1][y+1]=1;
				M[x-2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 7:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y-1>=1)&&(x+2<=15)){
			if((M[x][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+2][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y+1]!=1)&&(M[x][y-2]!=1)&&(M[x][y-1]!=1)&&(M[x][y+1]!=1)&&(M[x+1][y-2]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y+1]!=1)&&(M[x+2][y-2]!=1)&&(M[x+2][y-1]!=1)&&(M[x+2][y+1]!=1)&&(M[x+3][y-1]!=1)&&(M[x+3][y]!=1)&&(M[x+3][y+1]!=1)){
				M[x][y]=1;
				M[x+1][y-1]=1;
				M[x+2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        	verdade=2;
	    
		break;
		case 8:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y-1>=1)&&(x-2>=1)){
			if((M[x][y]!=1)&&(M[x-1][y-1]!=1)&&(M[x-2][y]!=1)&&(M[x+1][y-1]!=1)&&(M[x+1][y]!=1)&&(M[x+1][y+1]!=1)&&(M[x][y-2]!=1)&&(M[x][y-1]!=1)&&(M[x][y+1]!=1)&&(M[x-1][y-2]!=1)&&(M[x-1][y]!=1)&&(M[x-1][y+1]!=1)&&(M[x-2][y-2]!=1)&&(M[x-2][y-1]!=1)&&(M[x-2][y+1]!=1)&&(M[x-3][y-1]!=1)&&(M[x-3][y]!=1)&&(M[x-3][y+1]!=1)){
				M[x][y]=1;
				M[x-1][y-1]=1;
				M[x-2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	else
	        		verdade=2;
	    
		break;	
	}
	x=1;
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
	printf("   -------------------------------------------------------------");
	printf("\n A |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=2;
	printf("\n B |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=3;
	printf("\n C |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=4;
	printf("\n D |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=5;
	printf("\n E |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=6;
	printf("\n F |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=7;
	printf("\n G |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=8;
	printf("\n H |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=9;
	printf("\n I |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=10;
	printf("\n J |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=11;
	printf("\n L |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=12;
	printf("\n M |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=13;
	printf("\n N |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=14;
	printf("\n O |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	x=15;
	printf("\n P |");
	for(y=1;y<=15;y++){
	    if(M[x][y]==1)
            printf(" x |");
        else
            printf(" . |");
	}
	printf("\n");
	printf("   -------------------------------------------------------------");
	
	if(verdade==1)
    		hid--;
	if(verdade==2)
		printf("\n Coordenadas invalidas, lembre-se,\nlinhas vao de A ate P, e colunas de 1 ate 15\n");
	if(verdade==0)
        	printf("\n Existe um barco muito proximo, lembre-se,\nsempre devera existir um quadrado em branco entre os barcos\n");
}
printf("\n Hidroavioes posicionados com sucesso \n");

//FIMMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZMINHAMATRIZ


//MATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPC

for(x=0;x<=16;x++){
	for(y=0;y<=16;y++){
		PC[x][y]=0;
	}
}

srand( (unsigned)time(NULL) );
    
sub=4;
while(sub>0){
    	x=99;
    	verdade=0;

	x= 1 + ( rand() % 15);

	y=  1 + ( rand() % 15);



	
	if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)){
		if((PC[x][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)){
			PC[x][y]=1;
			verdade=1;
		}
		else
		    verdade=0;
	}

	    

	
	if(verdade==1)
	    	sub--;

}


cru=3;
while(cru>0){
    	x=99;
    	verdade=0;

	x= 1 + ( rand() % 15);

	y=  1 + ( rand() % 15);

	escolha= 1 + ( rand() % 4);
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)){
			if((PC[x][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x-2][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)){
				PC[x][y]=1;
				PC[x-1][y]=1;
				verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)){
			if((PC[x][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x+2][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)){
				PC[x][y]=1;
				PC[x+1][y]=1;
				verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y-1>=1)){
			if((PC[x][y]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y+1]!=1)){
				PC[x][y]=1;
				PC[x][y-1]=1;
		    		verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y+1<=15)){
			if((PC[x][y]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+2]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+1]!=1)){
				PC[x][y]=1;
				PC[x][y+1]=1;
				verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
	
	}
	
	if(verdade==1)
	    	cru--;

}



enc=2;
while(enc>0){
    	x=99;
    	verdade=0;

	x= 1 + ( rand() % 15);

	y=  1 + ( rand() % 15);

	escolha= 1 + ( rand() % 4);
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(x-2>=1)&&(x-3>=1)){
            		if((PC[x][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x-2][y]!=1)&&(PC[x-3][y]!=1)&&(PC[x-4][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-3][y+1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-4][y+1]!=1)&&(PC[x-4][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)){
                    		PC[x][y]=1;
			    	PC[x-1][y]=1;
			    	PC[x-2][y]=1;
			    	PC[x-3][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(x+2<=15)&&(x+3<=15)){
	    		if((PC[x][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x+2][y]!=1)&&(PC[x+3][y]!=1)&&(PC[x+4][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+3][y+1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+4][y+1]!=1)&&(PC[x+4][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)){
			    	PC[x][y]=1;
			    	PC[x+1][y]=1;
			    	PC[x+2][y]=1;
			    	PC[x+3][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y-1>=1)&&(y-2>=1)&&(y-3>=1)){
			if((PC[x][y]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-3]!=1)&&(PC[x][y-4]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x-1][y-4]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+1][y-4]!=1)&&(PC[x+1][y+1]!=1)){
			    	PC[x][y]=1;
			    	PC[x][y-1]=1;
			    	PC[x][y-2]=1;
			    	PC[x][y-3]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y+1<=15)&&(y+2<=15)&&(y+3<=15)){
			if((PC[x][y]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+2]!=1)&&(PC[x][y+3]!=1)&&(PC[x][y+4]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x-1][y+4]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)&&(PC[x+1][y+4]!=1)&&(PC[x+1][y+1]!=1)){
			    	PC[x][y]=1;
			    	PC[x][y+1]=1;
			    	PC[x][y+2]=1;
			    	PC[x][y+3]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
	
	}
	
	if(verdade==1)
	    	enc--;

}



por=1;
while(por>0){
    	x=99;
    	verdade=0;

	x= 1 + ( rand() % 15);

	y=  1 + ( rand() % 15);

	escolha= 1 + ( rand() % 4);
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(x-2>=1)&&(x-3>=1)&&(x-4>=1)){
	    		if((PC[x][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x-2][y]!=1)&&(PC[x-3][y]!=1)&&(PC[x-4][y]!=1)&&(PC[x-5][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-3][y+1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-4][y+1]!=1)&&(PC[x-4][y-1]!=1)&&(PC[x-5][y+1]!=1)&&(PC[x-5][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)){
				PC[x][y]=1;
			    	PC[x-1][y]=1;
			    	PC[x-2][y]=1;
			    	PC[x-3][y]=1;
				PC[x-4][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(x+2<=15)&&(x+3<=15)&&(x+4<=15)){
	    		if((PC[x][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x+2][y]!=1)&&(PC[x+3][y]!=1)&&(PC[x+4][y]!=1)&&(PC[x+5][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+3][y+1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+4][y+1]!=1)&&(PC[x+4][y-1]!=1)&&(PC[x+5][y+1]!=1)&&(PC[x+5][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)){
			    	PC[x][y]=1;
			    	PC[x+1][y]=1;
			    	PC[x+2][y]=1;
			    	PC[x+3][y]=1;
				PC[x+4][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y-1>=1)&&(y-2>=1)&&(y-3>=1)&&(y-4>=1)){
			if((PC[x][y]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-3]!=1)&&(PC[x][y-4]!=1)&&(PC[x][y-5]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x-1][y-4]!=1)&&(PC[x-1][y-5]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+1][y-4]!=1)&&(PC[x+1][y-5]!=1)&&(PC[x+1][y+1]!=1)){
			    	PC[x][y]=1;
			    	PC[x][y-1]=1;
			    	PC[x][y-2]=1;
			    	PC[x][y-3]=1;
				PC[x][y-4]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(y+1<=15)&&(y+2<=15)&&(y+3<=15)&&(y+4<=15)){
			if((PC[x][y]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+2]!=1)&&(PC[x][y+3]!=1)&&(PC[x][y+4]!=1)&&(PC[x][y+5]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x-1][y+4]!=1)&&(PC[x-1][y+5]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)&&(PC[x+1][y+4]!=1)&&(PC[x+1][y+5]!=1)&&(PC[x+1][y+1]!=1)){
			    	PC[x][y]=1;
			    	PC[x][y+1]=1;
			    	PC[x][y+2]=1;
			    	PC[x][y+3]=1;
				PC[x][y+4]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}
	    	

		break;
	}

	
	if(verdade==1)
	    	por--;

}



hid=5;
while(hid>0){
    	x=99;    
    	verdade=0;
	
	x= 1 + ( rand() % 15);

	y=  1 + ( rand() % 15);
	
	escolha= 1 + ( rand() % 8);
	
	switch(escolha){
		case 1:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y+1<=15)&&(y+2<=15)){
			if((PC[x][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x-2][y]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y+2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+3]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)){
				PC[x][y]=1;
				PC[x-1][y+1]=1;
				PC[x][y+2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 2:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y-1>=1)&&(y-2>=1)){
			if((PC[x][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x][y-2]!=1)&&(PC[x-2][y]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y-2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-3]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1)){
				PC[x][y]=1;
				PC[x-1][y-1]=1;
				PC[x][y-2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 3:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y+1<=15)&&(y+2<=15)){
			if((PC[x][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+3]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)&&(PC[x+2][y]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y+2]!=1)){
				PC[x][y]=1;
				PC[x+1][y+1]=1;
				PC[x][y+2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 4:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y-1>=1)&&(y-2>=1)){
			if((PC[x][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x][y-2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-3]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+2][y]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y-2]!=1)){
				PC[x][y]=1;
				PC[x+1][y-1]=1;
				PC[x][y-2]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 5:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y+1<=15)&&(x+2<=15)){
			if((PC[x][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y+2]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+3][y]!=1)&&(PC[x+3][y+1]!=1)){
				PC[x][y]=1;
				PC[x+1][y+1]=1;
				PC[x+2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 6:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y+1<=15)&&(x-2>=1)){
			if((PC[x][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-2][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y+2]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-3][y]!=1)&&(PC[x-3][y+1]!=1)){
				PC[x][y]=1;
				PC[x-1][y+1]=1;
				PC[x-2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 7:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x+1<=15)&&(y-1>=1)&&(x+2<=15)){
			if((PC[x][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+2][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y-2]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+3][y]!=1)&&(PC[x+3][y+1]!=1)){
				PC[x][y]=1;
				PC[x+1][y-1]=1;
				PC[x+2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;
        	}

	    
		break;
		case 8:
		if((x>=1)&&(y>=1)&&(x<=15)&&(y<=15)&&(x-1>=1)&&(y-1>=1)&&(x-2>=1)){
			if((PC[x][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-2][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-2][y-2]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-3][y]!=1)&&(PC[x-3][y+1]!=1)){
				PC[x][y]=1;
				PC[x-1][y-1]=1;
				PC[x-2][y]=1;
			    	verdade=1;
            		}
		    	else
		        	verdade=0;

		}
		break;
	}
	if(verdade==1)
    		hid--;

}

//FIMMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPCMATRIZPC


//MINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADA

printf("\n As tabelas estao prontas, que comece a batalha naval \n");
printf("\n          ************SEU JOGO, PROTEJA COM SUA VIDA************ \n");
printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
printf("   -------------------------------------------------------------");
x=1;
printf("\n A |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=2;
printf("\n B |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=3;
printf("\n C |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=4;
printf("\n D |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=5;
printf("\n E |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=6;
printf("\n F |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=7;
printf("\n G |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=8;
printf("\n H |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=9;
printf("\n I |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=10;
printf("\n J |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=11;
printf("\n L |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=12;
printf("\n M |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=13;
printf("\n N |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=14;
printf("\n O |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

x=15;
printf("\n P |");
for(y=1;y<=15;y++){
	Mjogo[x][y] = '.';
	printf(" %c |", Mjogo[x][y]);
}

printf("\n");
printf("   -------------------------------------------------------------");

printf("\n\n          ************JOGO DO INIMIGO, ATIRE AQUI************ \n");
printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
printf("   -------------------------------------------------------------");
x=1;
printf("\n A |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=2;
printf("\n B |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=3;
printf("\n C |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=4;
printf("\n D |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=5;
printf("\n E |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=6;
printf("\n F |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=7;
printf("\n G |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=8;
printf("\n H |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=9;
printf("\n I |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=10;
printf("\n J |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=11;
printf("\n L |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=12;
printf("\n M |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=13;
printf("\n N |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=14;
printf("\n O |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

x=15;
printf("\n P |");
for(y=1;y<=15;y++){
	PCjogo[x][y] = '.';
	printf(" %c |", PCjogo[x][y]);
}

printf("\n");
printf("   -------------------------------------------------------------");

while(continua==1)
{
 PCacertou=1;
 Macertou=1;


	while(Macertou==1)
	{
    
		do
		{
			x=99;
			printf("\n Digite as coordenadas: \n");
			printf(" Linha: ");
			scanf("%s",z);
			if((strcmp(z,"A")==0)||(strcmp(z,"a")==0))
				x=1;
			if((strcmp(z,"B")==0)||(strcmp(z,"b")==0))
				x=2;
			if((strcmp(z,"C")==0)||(strcmp(z,"c")==0))
				x=3;
			if((strcmp(z,"D")==0)||(strcmp(z,"d")==0))
				x=4;
			if((strcmp(z,"E")==0)||(strcmp(z,"e")==0))
				x=5;
			if((strcmp(z,"F")==0)||(strcmp(z,"f")==0))
				x=6;
			if((strcmp(z,"G")==0)||(strcmp(z,"g")==0))
				x=7;
			if((strcmp(z,"H")==0)||(strcmp(z,"h")==0))
				x=8;
			if((strcmp(z,"I")==0)||(strcmp(z,"i")==0))
				x=9;
			if((strcmp(z,"J")==0)||(strcmp(z,"j")==0))
				x=10;
			if((strcmp(z,"L")==0)||(strcmp(z,"l")==0))
				x=11;
			if((strcmp(z,"M")==0)||(strcmp(z,"m")==0))
				x=12;
			if((strcmp(z,"N")==0)||(strcmp(z,"n")==0))
				x=13;
			if((strcmp(z,"O")==0)||(strcmp(z,"o")==0))
				x=14;
			if((strcmp(z,"P")==0)||(strcmp(z,"p")==0))
				x=15;		
			
			printf(" Coluna: ");																									
			scanf("%d",&y);		
			
			if((PCjogo[x][y]=='O')||(PCjogo[x][y]=='X')){
				volta=1;
				printf(" Voce ja atirou nessas coordenadas\n");
			}
			else
				volta=0;
			
			}
		while(volta==1);
		
		if((x>=1)&&(x<=15)&&(y>=1)&&(y<=15))
		{
			if(PC[x][y]==0)
			{
				PCjogo[x][y]='O';
				Macertou=0;	
				printf("\n SPLASH, acertou a agua \n");
			}
			if(PC[x][y]==1)
			{
				PCjogo[x][y]='X';
				Macertou=1;
				printf("\n BUM, acertou um navio \n");
				PCtotal--;
				if(PCtotal==0)
				{
					printf("\n Voce ganhou o jogo\n");
					continua=0;
				}
			}
			verdade=11;
		}
		else
		{
			printf("\n Coordenadas invalidas, lembre-se,\nlinhas vao de A ate P e colunas vao de 1 ate 15 \n");
			Macertou=1;
			verdade=10;
		}
		
if(verdade==11)
{


		
if((PC[x+1][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1))
{
	if(PCjogo[x][y]=='X')
	{
		printf("\n Voce destruiu 1 Submarino \n");
		PCjogo[x+1][y]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y-1]='O';
		verdade=1;
	}
	else
	{
        verdade=0;
        }
}

if(verdade!=1)
{

if((PC[x-2][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x-1][y]=='X'))
	{
		printf("\n Voce destruiu 1 Cruzador \n");
		PCjogo[x-2][y]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y-1]='O';
	}
}


if((PC[x-1][y]!=1)&&(PC[x+2][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X'))
	{
		printf("\n Voce destruiu 1 Cruzador \n");
		PCjogo[x-1][y]='O';
		PCjogo[x+2][y]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y-1]='O';
	}
}


if((PC[x][y-2]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y+1]!=1))
	{
	if((PCjogo[x][y]=='X')&&(PCjogo[x][y-1]=='X'))
	{
		printf("\n Voce destruiu 1 Cruzador \n");
		PCjogo[x][y-2]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y+1]='O';
	}
}


if((PC[x][y-1]!=1)&&(PC[x][y+2]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+1]!=1))		
	{
	if((PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X'))
	{
		printf("\n Voce destruiu 1 Cruzador \n");
		PCjogo[x][y-1]='O';
		PCjogo[x][y+2]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
	}
}


if((PC[x-4][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-3][y+1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-4][y+1]!=1)&&(PC[x-4][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x-1][y]=='X')&&(PCjogo[x-2][y]=='X')&&(PCjogo[x-3][y]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x-4][y]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-3][y+1]='O';
		PCjogo[x-3][y-1]='O';
		PCjogo[x-4][y+1]='O';
		PCjogo[x-4][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y-1]='O';
	}
}


if((PC[x-1][y]!=1)&&(PC[x+4][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+3][y+1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+4][y+1]!=1)&&(PC[x+4][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X')&&(PCjogo[x+2][y]=='X')&&(PCjogo[x+3][y]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x-1][y]='O';
		PCjogo[x+4][y]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+3][y+1]='O';
		PCjogo[x+3][y-1]='O';
		PCjogo[x+4][y+1]='O';
		PCjogo[x+4][y-1]='O';
	}
}


if((PC[x][y-4]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x-1][y-4]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+1][y-4]!=1)&&(PC[x+1][y+1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x][y-1]=='X')&&(PCjogo[x][y-2]=='X')&&(PCjogo[x][y-3]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x][y-4]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-3]='O';
		PCjogo[x-1][y-4]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-3]='O';
		PCjogo[x+1][y-4]='O';
		PCjogo[x+1][y+1]='O';
	}
}


if((PC[x][y-1]!=1)&&(PC[x][y+4]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x-1][y+4]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)&&(PC[x+1][y+4]!=1)&&(PC[x+1][y+1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X')&&(PCjogo[x][y+2]=='X')&&(PCjogo[x][y+3]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x][y-1]='O';
		PCjogo[x][y+4]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y+3]='O';
		PCjogo[x-1][y+4]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y+3]='O';
		PCjogo[x+1][y+4]='O';
	}
}


if((PC[x][y-2]!=1)&&(PC[x][y+3]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1))
{
	if((PCjogo[x][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X')&&(PCjogo[x][y+2]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x][y-2]='O';
		PCjogo[x][y+3]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y+3]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y+3]='O';
	}
}


if((PC[x][y+2]!=1)&&(PC[x][y-3]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y-3]!=1))
{
	if((PCjogo[x][y-2]=='X')&&(PCjogo[x][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x][y+2]='O';
		PCjogo[x][y-3]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y-3]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y-3]='O';
	}
}


if((PC[x-2][y]!=1)&&(PC[x+3][y]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x][y-1]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y+1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+3][y+1]!=1))
{
	if((PCjogo[x-1][y]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X')&&(PCjogo[x+2][y]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x-2][y]='O';
		PCjogo[x+3][y]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+3][y-1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+3][y+1]='O';
	}
}


if((PC[x+2][y]!=1)&&(PC[x-3][y]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x][y-1]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y+1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x-3][y+1]!=1))
{
	if((PCjogo[x-2][y]=='X')&&(PCjogo[x-1][y]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X'))
	{
		printf("\n Voce destruiu 1 Encouracado \n");
		PCjogo[x+2][y]='O';
		PCjogo[x-3][y]='O';
		PCjogo[x-3][y-1]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x-3][y+1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+2][y+1]='O';
	}
}


if((PC[x-5][y]!=1)&&(PC[x+1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-3][y+1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-4][y+1]!=1)&&(PC[x-4][y-1]!=1)&&(PC[x-5][y+1]!=1)&&(PC[x-5][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x-1][y]=='X')&&(PCjogo[x-2][y]=='X')&&(PCjogo[x-3][y]=='X')&&(PCjogo[x-4][y]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x-5][y]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-3][y+1]='O';
		PCjogo[x-3][y-1]='O';
		PCjogo[x-4][y+1]='O';
		PCjogo[x-4][y-1]='O';
		PCjogo[x-5][y+1]='O';
		PCjogo[x-5][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y-1]='O';
	}
}


if((PC[x+5][y]!=1)&&(PC[x-1][y]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+3][y+1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+4][y+1]!=1)&&(PC[x+4][y-1]!=1)&&(PC[x+5][y+1]!=1)&&(PC[x+5][y-1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y-1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X')&&(PCjogo[x+2][y]=='X')&&(PCjogo[x+3][y]=='X')&&(PCjogo[x+4][y]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x+5][y]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+3][y-1]='O';
		PCjogo[x+3][y+1]='O';
		PCjogo[x+4][y-1]='O';
		PCjogo[x+4][y+1]='O';
		PCjogo[x+5][y-1]='O';
		PCjogo[x+5][y+1]='O';
	}
}


if((PC[x][y-5]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x-1][y-4]!=1)&&(PC[x-1][y-5]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+1][y-4]!=1)&&(PC[x+1][y-5]!=1)&&(PC[x+1][y+1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x][y-1]=='X')&&(PCjogo[x][y-2]=='X')&&(PCjogo[x][y-3]=='X')&&(PCjogo[x][y-4]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x][y-5]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x-1][y-5]='O';
		PCjogo[x-1][y-4]='O';
		PCjogo[x-1][y-3]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x+1][y-5]='O';
		PCjogo[x+1][y-4]='O';
		PCjogo[x+1][y-3]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
	}
}


if((PC[x][y+5]!=1)&&(PC[x][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x-1][y+4]!=1)&&(PC[x-1][y+5]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)&&(PC[x+1][y+4]!=1)&&(PC[x+1][y+5]!=1)&&(PC[x+1][y+1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X')&&(PCjogo[x][y+2]=='X')&&(PCjogo[x][y+3]=='X')&&(PCjogo[x][y+4]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x][y+5]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y+3]='O';
		PCjogo[x-1][y+4]='O';
		PCjogo[x-1][y+5]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y+3]='O';
		PCjogo[x+1][y+4]='O';
		PCjogo[x+1][y+5]='O';
	}
}


if((PC[x][y-2]!=1)&&(PC[x][y+4]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)&&(PC[x+1][y+4]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x-1][y+4]!=1))
{
	if((PCjogo[x][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X')&&(PCjogo[x][y+2]=='X')&&(PCjogo[x][y+3]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x][y-2]='O';
		PCjogo[x][y+4]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y+3]='O';
		PCjogo[x+1][y+4]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y+3]='O';
		PCjogo[x-1][y+4]='O';
	}
}


if((PC[x][y-3]!=1)&&(PC[x][y+3]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1))
{
	if((PCjogo[x][y-2]=='X')&&(PCjogo[x][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X')&&(PCjogo[x][y+2]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x][y-3]='O';
		PCjogo[x][y+3]='O';
		PCjogo[x-1][y-3]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y+3]='O';
		PCjogo[x+1][y-3]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y+3]='O';
	}
}


if((PC[x][y-4]!=1)&&(PC[x][y+2]!=1)&&(PC[x-1][y-4]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x+1][y-4]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y+2]!=1))
{
	if((PCjogo[x][y-3]=='X')&&(PCjogo[x][y-2]=='X')&&(PCjogo[x][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x][y+1]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x][y-4]='O';
		PCjogo[x][y+2]='O';
		PCjogo[x-1][y-4]='O';
		PCjogo[x-1][y-3]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x+1][y-4]='O';
		PCjogo[x+1][y-3]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
	}
}


if((PC[x-2][y]!=1)&&(PC[x+4][y]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x][y-1]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+4][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y+1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+3][y+1]!=1)&&(PC[x+4][y+1]!=1))
{
	if((PCjogo[x-1][y]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X')&&(PCjogo[x+2][y]=='X')&&(PCjogo[x+3][y]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x-2][y]='O';
		PCjogo[x+4][y]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+3][y-1]='O';
		PCjogo[x+4][y-1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+3][y+1]='O';
		PCjogo[x+4][y+1]='O';
	}
}


if((PC[x-3][y]!=1)&&(PC[x+3][y]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x][y-1]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x-3][y+1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y+1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+3][y+1]!=1))
{
	if((PCjogo[x-2][y]=='X')&&(PCjogo[x-1][y]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X')&&(PCjogo[x+2][y]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x-3][y]='O';
		PCjogo[x+3][y]='O';
		PCjogo[x-3][y-1]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+3][y-1]='O';
		PCjogo[x-3][y+1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+3][y+1]='O';
	}
}


if((PC[x-4][y]!=1)&&(PC[x+2][y]!=1)&&(PC[x-4][y-1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x][y-1]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x-4][y+1]!=1)&&(PC[x-3][y+1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y+1]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y+1]!=1))
{
	if((PCjogo[x-3][y]=='X')&&(PCjogo[x-2][y]=='X')&&(PCjogo[x-1][y]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+1][y]=='X'))
	{
		printf("\n Voce destruiu 1 Porta-avioes \n");
		PCjogo[x-4][y]='O';
		PCjogo[x+2][y]='O';
		PCjogo[x-4][y-1]='O';
		PCjogo[x-3][y-1]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x-4][y+1]='O';
		PCjogo[x-3][y+1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+2][y+1]='O';
	}
}


if((PC[x-2][y]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y+2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+3]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x-1][y+1]=='X')&&(PCjogo[x][y+2]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-2][y]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-2][y+2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y+3]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y+3]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y+3]='O';
	}
}


if((PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+2][y-2]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y+2]!=1))
{
	if((PCjogo[x+1][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+1][y+1]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y-2]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y+2]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+2][y-2]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+2][y]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+2][y+2]='O';
	}
}


if((PC[x-2][y]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y-2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-3]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1))
{
	if((PCjogo[x][y-2]=='X')&&(PCjogo[x-1][y-1]=='X')&&(PCjogo[x][y]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-2][y]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-2][y-2]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-3]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y-3]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-3]='O';
	}
}


if((PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-1][y+3]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+3]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+1][y+3]!=1)&&(PC[x+2][y]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y+2]!=1))
{
	if((PCjogo[x+1][y+1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x][y+2]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-1][y+3]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y+3]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+1][y+3]='O';
		PCjogo[x+2][y]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+2][y+2]='O';
	}
}


if((PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-2][y-2]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y+2]!=1))
{
	if((PCjogo[x-1][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x-1][y+1]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x][y-2]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y+2]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-2][y-2]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-2][y]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-2][y+2]='O';
	}
}


if((PC[x-1][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y-3]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-3]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y-3]!=1)&&(PC[x+2][y]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y-2]!=1))
{
	if((PCjogo[x][y-2]=='X')&&(PCjogo[x+1][y-1]=='X')&&(PCjogo[x][y]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y-3]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y-3]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y-3]='O';
		PCjogo[x+2][y]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+2][y-2]='O';
	}
}


if((PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-2][y-2]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-3][y]!=1)&&(PC[x-3][y+1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x-1][y-1]=='X')&&(PCjogo[x-2][y]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x][y-2]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-2][y-2]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-3][y-1]='O';
		PCjogo[x-3][y]='O';
		PCjogo[x-3][y+1]='O';
	}
}


if((PC[x-2][y]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y+2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+2][y]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y+2]!=1))
{
	if((PCjogo[x-1][y+1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+1][y+1]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-2][y]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-2][y+2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y+2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+2][y]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+2][y+2]='O';
	}
}


if((PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y-2]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+2][y-2]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+3][y]!=1)&&(PC[x+3][y+1]!=1))
{
	if((PCjogo[x][y]=='X')&&(PCjogo[x+1][y-1]=='X')&&(PCjogo[x+2][y]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y-2]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+2][y-2]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+3][y-1]='O';
		PCjogo[x+3][y]='O';
		PCjogo[x+3][y+1]='O';
	}
}


if((PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+2]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y+1]!=1)&&(PC[x-2][y+2]!=1)&&(PC[x-3][y-1]!=1)&&(PC[x-3][y]!=1)&&(PC[x-3][y+1]!=1))
{
	if((PCjogo[x-1][y+1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x-2][y]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y+2]='O';
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+2]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-2][y+1]='O';
		PCjogo[x-2][y+2]='O';
		PCjogo[x-3][y-1]='O';
		PCjogo[x-3][y]='O';
		PCjogo[x-3][y+1]='O';
	}
}


if((PC[x-2][y]!=1)&&(PC[x-2][y-1]!=1)&&(PC[x-2][y-2]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y-2]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y-2]!=1)&&(PC[x+1][y+1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y-2]!=1)&&(PC[x+2][y]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y-2]!=1))
{
	if((PCjogo[x+1][y-1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x-1][y-1]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-2][y]='O';
		PCjogo[x-2][y-1]='O';
		PCjogo[x-2][y-2]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y-2]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y-2]='O';
		PCjogo[x+1][y+1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y-2]='O';
		PCjogo[x+2][y]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+2][y-2]='O';
	}
}


if((PC[x-1][y-1]!=1)&&(PC[x-1][y]!=1)&&(PC[x-1][y+1]!=1)&&(PC[x][y-1]!=1)&&(PC[x][y+1]!=1)&&(PC[x][y+2]!=1)&&(PC[x+1][y-1]!=1)&&(PC[x+1][y]!=1)&&(PC[x+1][y+2]!=1)&&(PC[x+2][y-1]!=1)&&(PC[x+2][y+1]!=1)&&(PC[x+2][y+2]!=1)&&(PC[x+3][y-1]!=1)&&(PC[x+3][y]!=1)&&(PC[x+3][y+1]!=1))
{
	if((PCjogo[x+1][y+1]=='X')&&(PCjogo[x][y]=='X')&&(PCjogo[x+2][y]=='X'))
	{
		printf("\n Voce destruiu 1 Hidroaviao \n");
		PCjogo[x-1][y-1]='O';
		PCjogo[x-1][y]='O';
		PCjogo[x-1][y+1]='O';
		PCjogo[x][y-1]='O';
		PCjogo[x][y+1]='O';
		PCjogo[x][y+2]='O';
		PCjogo[x+1][y-1]='O';
		PCjogo[x+1][y]='O';
		PCjogo[x+1][y+2]='O';
		PCjogo[x+2][y-1]='O';
		PCjogo[x+2][y+1]='O';
		PCjogo[x+2][y+2]='O';
		PCjogo[x+3][y-1]='O';
		PCjogo[x+3][y]='O';
		PCjogo[x+3][y+1]='O';
	}
}
}
}
verdade=0;


          
	
		printf("\n          ************JOGO DO INIMIGO, ATIRE AQUI************ \n");
		printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
		printf("   -------------------------------------------------------------");
		x=1;
		printf("\n A |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=2;
		printf("\n B |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=3;
		printf("\n C |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=4;
		printf("\n D |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=5;
		printf("\n E |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=6;
		printf("\n F |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=7;
		printf("\n G |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=8;
		printf("\n H |");
		for(y=1;y<=15;y++){
			
		printf(" %c |", PCjogo[x][y]);
		}
		
		x=9;
		printf("\n I |");
			for(y=1;y<=15;y++){
			
		printf(" %c |", PCjogo[x][y]);
		}
		
		x=10;
		printf("\n J |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=11;
		printf("\n L |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=12;
		printf("\n M |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", PCjogo[x][y]);
		}
		
			x=13;
		printf("\n N |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", PCjogo[x][y]);
		}
	
		x=14;
		printf("\n O |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", PCjogo[x][y]);
		}
		
		x=15;
		printf("\n P |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", PCjogo[x][y]);
		}
		
		printf("\n");
		printf("   -------------------------------------------------------------");

}

	

//FIMMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADAMINHAJOGADA
	
	
//JOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPC



	while(PCacertou==1)
	{
		if(dadosalvo==1)
		{
			
			if((M[a+1][b]!=1)&&(M[a-1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1))
				PCbarco=1;
			else
			{

			//cruzador?
			if((M[a-2][b]!=1)&&(M[a+1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
				PCbarco=10;
			else
			{
			if((M[a-1][b]!=1)&&(M[a+2][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
				PCbarco=11;
			else
			{
			if((M[a][b-2]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b+1]!=1))
				PCbarco=12;
			else
			{
			if((M[a][b-1]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+1]!=1))
				PCbarco=13;
			else
			{
			//encouracado?
			if((M[a-4][b]!=1)&&(M[a+1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-4][b+1]!=1)&&(M[a-4][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
				PCbarco=20;
			else
			{
			if((M[a-1][b]!=1)&&(M[a+4][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b+1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+4][b+1]!=1)&&(M[a+4][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
				PCbarco=21;
			else
			{
			
			if((M[a][b-4]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-4]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-4]!=1)&&(M[a+1][b+1]!=1))
				PCbarco=22;
			else
			{

			if((M[a][b-1]!=1)&&(M[a][b+4]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a-1][b+4]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+1][b+4]!=1)&&(M[a+1][b+1]!=1))
				PCbarco=23;
			else
			{

			if((M[a][b-2]!=1)&&(M[a][b+3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1))
				PCbarco=24;
			else
			{

			if((M[a][b+2]!=1)&&(M[a][b-3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b-3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b-3]!=1))
				PCbarco=25;
			else
			{

			if((M[a-2][b]!=1)&&(M[a+3][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b+1]!=1))
				PCbarco=26;
			else
			{

			if((M[a+2][b]!=1)&&(M[a-3][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a-3][b+1]!=1))
				PCbarco=27;
			else
			{

			//porta-aviao?
			if((M[a-5][b]!=1)&&(M[a+1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-4][b+1]!=1)&&(M[a-4][b-1]!=1)&&(M[a-5][b+1]!=1)&&(M[a-5][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
				PCbarco=30;
			else
			{

			if((M[a+5][b]!=1)&&(M[a-1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b+1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+4][b+1]!=1)&&(M[a+4][b-1]!=1)&&(M[a+5][b+1]!=1)&&(M[a+5][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
				PCbarco=31;
			else
			{

			if((M[a][b-5]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-4]!=1)&&(M[a-1][b-5]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-4]!=1)&&(M[a+1][b-5]!=1)&&(M[a+1][b+1]!=1))
				PCbarco=32;
			else
			{

			if((M[a][b+5]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a-1][b+4]!=1)&&(M[a-1][b+5]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+1][b+4]!=1)&&(M[a+1][b+5]!=1)&&(M[a+1][b+1]!=1))
				PCbarco=33;
			else
			{

			if((M[a][b-2]!=1)&&(M[a][b+4]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+1][b+4]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a-1][b+4]!=1))
				PCbarco=34;
			else
			{

			if((M[a][b-3]!=1)&&(M[a][b+3]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1))
				PCbarco=35;
			else
			{

			if((M[a][b-4]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b-4]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a+1][b-4]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1))
				PCbarco=36;
			else
			{

			if((M[a-2][b]!=1)&&(M[a+4][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+4][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b+1]!=1)&&(M[a+4][b+1]!=1))
				PCbarco=37;
			else
			{

			if((M[a-3][b]!=1)&&(M[a+3][b]!=1)&&(M[a-3][b-1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b-1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b+1]!=1))
				PCbarco=38;
			else
			{

			if((M[a-4][b]!=1)&&(M[a+2][b]!=1)&&(M[a-4][b-1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a-4][b+1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1))
				PCbarco=39;
			else
			{

			//hidroaviao?
			if((M[a-2][b]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+3]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1))
				PCbarco=40;
			else
			{

			if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+2][b-2]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1))
				PCbarco=41;
			else
			{

			if((M[a-2][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b-2]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b-3]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1))
				PCbarco=42;
			else
			{

			if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+3]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1))
				PCbarco=43;
			else
			{

			if((M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a-2][b-2]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1))
				PCbarco=44;
			else
			{

			if((M[a-1][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b-3]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b-2]!=1))
				PCbarco=45;
			else
			{

			if((M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-2][b-2]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-3][b]!=1)&&(M[a-3][b+1]!=1))
				PCbarco=46;
			else
			{

			if((M[a-2][b]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1))
				PCbarco=47;
			else
			{

			if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b-2]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+3][b]!=1)&&(M[a+3][b+1]!=1))
				PCbarco=48;
			else
			{

			if((M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1)&&(M[a-3][b-1]!=1)&&(M[a-3][b]!=1)&&(M[a-3][b+1]!=1))
				PCbarco=49;
			else
			{

			if((M[a-2][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b-2]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-2]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b-2]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-2]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b-2]!=1))
				PCbarco=50;
			else
			{

			if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1)&&(M[a+3][b-1]!=1)&&(M[a+3][b]!=1)&&(M[a+3][b+1]!=1))
				PCbarco=51;
		
			}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
			


if(PCbarco==1)
{
	printf("\n Seu inimigo destruiu 1 Submarino \n");
        Mjogo[a+1][b]='O';
   	Mjogo[a-1][b]='O';
	Mjogo[a][b+1]='O';
	Mjogo[a][b-1]='O';
	Mjogo[a+1][b+1]='O';
	Mjogo[a+1][b-1]='O';
	Mjogo[a-1][b+1]='O';
	Mjogo[a-1][b-1]='O';
	dadosalvo=0;
	PCacertou=1;
	Mtotal--;
}


if(PCbarco==10)
{
	coordenada= 1 + (rand() %8);
	switch(coordenada)
	{
		case 1:

		Mjogo[a-1][b]='X';
		PCacertou=1;
		dadosalvo=0;
		PCbarco=0;
		break;

		case 2:
		
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==11)
{
	coordenada= 1 + (rand() %8);
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:

		Mjogo[a+1][b]='X';
		PCacertou=1;
		dadosalvo=0;
		PCbarco=0;

		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}	
if(PCbarco==12)
{
	coordenada= 1 + (rand() %8);
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
			
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:

		Mjogo[a][b-1]='X';
		PCacertou=1;
		dadosalvo=0;
		PCbarco=0;

		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==13)
{
	coordenada= 1 + (rand() %8);
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:

		Mjogo[a][b+1]='X';
		PCacertou=1;
		dadosalvo=0;
		PCbarco=0;
		
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==20)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
             
             Mjogo[a-1][b]='X';
             Mjogo[a-2][b]='X';
			Mjogo[a-3][b]='X';
			dadosalvo=0;
			PCacertou=1;
	
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==21)
{

		coordenada= 1 + (rand() %8);

	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
             
             Mjogo[a+1][b]='X';
             Mjogo[a+2][b]='X';
             Mjogo[a+3][b]='X';
			dadosalvo=0;
			PCacertou=1;
	
		break;

		
		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==22)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
             
             Mjogo[a][b-1]='X';
             Mjogo[a][b-2]='X';
             Mjogo[a][b-3]='X';
			dadosalvo=0;
			PCacertou=1;

		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==23)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
             
             Mjogo[a][b+1]='X';
             Mjogo[a][b+2]='X';
             Mjogo[a][b+3]='X';
			dadosalvo=0;
			PCacertou=1;
		
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==24)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-2]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-2]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
             
             Mjogo[a][b-1]='X';
             Mjogo[a][b+1]='X';
             Mjogo[a][b+2]='X';
             dadosalvo=0;
			PCacertou=1;
	
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==25)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
             
             Mjogo[a][b+1]='X';
             Mjogo[a][b-1]='X';
             Mjogo[a][b-2]='X';
             dadosalvo=0;
			PCacertou=1;
	
		break;

		case 4:
		if(Mjogo[a][b+2]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+2]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==26)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-2][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-2][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
             
             Mjogo[a-1][b]='X';
             Mjogo[a+1][b]='X';
             Mjogo[a+2][b]='X';
             dadosalvo=0;
			PCacertou=1;
		
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==27)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
             
             Mjogo[a+1][b]='X';
             Mjogo[a-1][b]='X';
             Mjogo[a-2][b]='X';
             dadosalvo=0;
			PCacertou=1;
		
		break;

		case 2:
		if(Mjogo[a+2][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+2][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==30)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
             
             Mjogo[a-1][b]='X';
             Mjogo[a-2][b]='X';
             Mjogo[a-3][b]='X';
             Mjogo[a-4][b]='X';
             dadosalvo=0;
			PCacertou=1;
		
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==31)
{

		coordenada= 1 + (rand() %8);

	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
             
             Mjogo[a+1][b]='X';
             Mjogo[a+2][b]='X';
             Mjogo[a+3][b]='X';
             Mjogo[a+4][b]='X';
             dadosalvo=0;
			PCacertou=1;
		
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==32)
{

		coordenada= 1 + (rand() %8);

	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
             
             Mjogo[a][b-1]='X';
             Mjogo[a][b-2]='X';
             Mjogo[a][b-3]='X';
             Mjogo[a][b-4]='X';
             dadosalvo=0;
			PCacertou=1;
		
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==33)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
             
             Mjogo[a][b+1]='X';
             Mjogo[a][b+2]='X';
             Mjogo[a][b+3]='X';
             Mjogo[a][b+4]='X';
             dadosalvo=0;
			PCacertou=1;
		
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==34)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-2]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-2]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
             
             Mjogo[a][b-1]='X';
             Mjogo[a][b+1]='X';
             Mjogo[a][b+2]='X';
             Mjogo[a][b+3]='X';
             dadosalvo=0;
			PCacertou=1;
	
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==35)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
             
             Mjogo[a][b+2]='X';
             Mjogo[a][b+1]='X';
             Mjogo[a][b-1]='X';
             Mjogo[a][b-2]='X';
             dadosalvo=0;
			PCacertou=1;
	
		break;

		case 4:
		if(Mjogo[a][b+3]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+3]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==36)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
             
             Mjogo[a][b+1]='X';
             Mjogo[a][b-1]='X';
             Mjogo[a][b-2]='X';
             Mjogo[a][b-3]='X';
             dadosalvo=0;
			PCacertou=1;
	
		break;

		case 4:
		if(Mjogo[a][b+2]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+2]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==37)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-2][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-2][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
             
             Mjogo[a-1][b]='X';
             Mjogo[a+1][b]='X';
             Mjogo[a+2][b]='X';
             Mjogo[a+3][b]='X';
             dadosalvo=0;
			PCacertou=1;
		
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==38)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-3][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-3][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
             
             Mjogo[a-2][b]='X';
             Mjogo[a-1][b]='X';
             Mjogo[a+1][b]='X';
             Mjogo[a+2][b]='X';
             dadosalvo=0;
			PCacertou=1;
	
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==39)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-4][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-4][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
             
             Mjogo[a-3][b]='X';
             Mjogo[a-2][b]='X';
             Mjogo[a-1][b]='X';
             Mjogo[a+1][b]='X';
             dadosalvo=0;
			PCacertou=1;
	
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==40)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:

		Mjogo[a-1][b+1]='X';
		Mjogo[a][b+2]='X';
        dadosalvo=0;
	    PCacertou=1;
	    
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==41)
{
	if((tentativa>=1)&&(tentativa<=8))
	{
		coordenada=tentativa;
	}
	else
	{
		coordenada= 1 + (rand() %8);
	}
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
	
		Mjogo[a+1][b-1]='X';
		if(Mjogo[a+1][b+1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=8;
		}
		break;

		
		case 8:
	
		Mjogo[a+1][b+1]='X';
		if(Mjogo[a+1][b-1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=7;
		}
		break;

		
	}
}
if(PCbarco==42)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
             
        Mjogo[a-1][b-1]='X';     
        Mjogo[a][b-2]='X';    
        dadosalvo=0;
	    PCacertou=1;             
      
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==43)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
             
        Mjogo[a+1][b+1]='X';     
        Mjogo[a][b+2]='X';     
        dadosalvo=0;
	    PCacertou=1;               
      
		break;

	}
}
if(PCbarco==44)
{
	if((tentativa>=1)&&(tentativa<=8))
	{
		coordenada=tentativa;
	}
	else
	{
		coordenada= 1 + (rand() %8);
	}
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
	
		Mjogo[a-1][b-1]='X';
		if(Mjogo[a-1][b+1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=6;
		}
		break;

		
		case 6:
	
		Mjogo[a-1][b+1]='X';
		if(Mjogo[a-1][b-1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=5;
		}
		break;

		
		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==45)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
             
        Mjogo[a][b-2]='X';     
        Mjogo[a+1][b-1]='X';     
        dadosalvo=0;
	    PCacertou=1;             
       
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==46)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
             
        Mjogo[a-1][b-1]='X'; 
        Mjogo[a-2][b]='X';    
        dadosalvo=0;
	    PCacertou=1;               
      
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==47)
{
	if((tentativa>=1)&&(tentativa<=8))
	{
		coordenada=tentativa;
	}
	else
	{
		coordenada= 1 + (rand() %8);
	}
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
	
		Mjogo[a-1][b+1]='X';
		if(Mjogo[a+1][b+1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=8;
		}
		
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
	
		Mjogo[a+1][b+1]='X';
		if(Mjogo[a-1][b+1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=6;
		}
		break;

		
	}
}
if(PCbarco==48)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
             
        Mjogo[a+1][b-1]='X';     
        Mjogo[a+2][b]='X';     
        dadosalvo=0;
	    PCacertou=1;            
       
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==49)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
             
        Mjogo[a-1][b+1]='X';     
        Mjogo[a-2][b]='X';     
        dadosalvo=0;
	    PCacertou=1;              
        
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==50)
{
	if((tentativa>=1)&&(tentativa<=8))
	{
		coordenada=tentativa;
	}
	else
	{
		coordenada= 1 + (rand() %8);
	}
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
	
		Mjogo[a-1][b-1]='X';
		if(Mjogo[a+1][b-1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=7;
		}
		break;

		
		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
	
		Mjogo[a+1][b-1]='X';
		if(Mjogo[a-1][b-1]=='X')
		{
			dadosalvo=0;
			tentativa=0;
		}
		else
		{
			tentativa=5;
		}
		break;

		
		case 8:
		if(Mjogo[a+1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

	}
}
if(PCbarco==51)
{

		coordenada= 1 + (rand() %8);
	
	switch(coordenada)
	{
		case 1:
		if(Mjogo[a-1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 2:
		if(Mjogo[a+1][b]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 3:
		if(Mjogo[a][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 4:
		if(Mjogo[a][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 5:
		if(Mjogo[a-1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 6:
		if(Mjogo[a-1][b+1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a-1][b+1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 7:
		if(Mjogo[a+1][b-1]=='.')
		{
            printf("\n SPLASH, seu inimigo acertou a agua \n");
			Mjogo[a+1][b-1]='O';
			PCacertou=0;
		}
		else
		{
			PCacertou=1;
		}
		break;

		case 8:
		
		Mjogo[a+1][b+1]='X';
		Mjogo[a+2][b]='X';
        dadosalvo=0;
	    PCacertou=1; 		
            
		break;

  }
}
    
    



if((M[a-2][b]!=1)&&(M[a+1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a-1][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Cruzador \n");
		Mjogo[a+1][b]='O';
		Mjogo[a-2][b]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b-1]='O';
 	Mtotal--;
	Mtotal--;
	}
}


if((M[a-1][b]!=1)&&(M[a+2][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Cruzador \n");
		Mjogo[a-1][b]='O';
		Mjogo[a+2][b]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b-1]='O';
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-2]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b+1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a][b-1]=='X'))
	{ 
		printf("\n Seu inimigo destruiu 1 Cruzador \n");	
		Mjogo[a][b-2]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b+1]='O';
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-1]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+1]!=1))		
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Cruzador \n");		
		Mjogo[a][b-1]='O';
		Mjogo[a][b+2]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-4][b]!=1)&&(M[a+1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-4][b+1]!=1)&&(M[a-4][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a-1][b]=='X')&&(Mjogo[a-2][b]=='X')&&(Mjogo[a-3][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a-4][b]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-3][b+1]='O';
		Mjogo[a-3][b-1]='O';
		Mjogo[a-4][b+1]='O';
		Mjogo[a-4][b-1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b-1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-1][b]!=1)&&(M[a+4][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b+1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+4][b+1]!=1)&&(M[a+4][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X')&&(Mjogo[a+2][b]=='X')&&(Mjogo[a+3][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a-1][b]='O';
		Mjogo[a+4][b]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+3][b+1]='O';
		Mjogo[a+3][b-1]='O';
		Mjogo[a+4][b+1]='O';
		Mjogo[a+4][b-1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-4]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-4]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-4]!=1)&&(M[a+1][b+1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a][b-1]=='X')&&(Mjogo[a][b-2]=='X')&&(Mjogo[a][b-3]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a][b-4]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-3]='O';
		Mjogo[a-1][b-4]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-3]='O';
		Mjogo[a+1][b-4]='O';
		Mjogo[a+1][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-1]!=1)&&(M[a][b+4]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a-1][b+4]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+1][b+4]!=1)&&(M[a+1][b+1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X')&&(Mjogo[a][b+2]=='X')&&(Mjogo[a][b+3]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a][b-1]='O';
		Mjogo[a][b+4]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b+3]='O';
		Mjogo[a-1][b+4]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b+3]='O';
		Mjogo[a+1][b+4]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-2]!=1)&&(M[a][b+3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1))
{
	if((Mjogo[a][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X')&&(Mjogo[a][b+2]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a][b-2]='O';
		Mjogo[a][b+3]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b+3]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b+3]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b+2]!=1)&&(M[a][b-3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b-3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b-3]!=1))
{
	if((Mjogo[a][b-2]=='X')&&(Mjogo[a][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a][b+2]='O';
		Mjogo[a][b-3]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b-3]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b-3]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-2][b]!=1)&&(M[a+3][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b+1]!=1))
{
	if((Mjogo[a-1][b]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X')&&(Mjogo[a+2][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a-2][b]='O';
		Mjogo[a+3][b]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+3][b-1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+3][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a+2][b]!=1)&&(M[a-3][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a-3][b+1]!=1))
{
	if((Mjogo[a-2][b]=='X')&&(Mjogo[a-1][b]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Encouracado \n");		
		Mjogo[a+2][b]='O';
		Mjogo[a-3][b]='O';
		Mjogo[a-3][b-1]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a-3][b+1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+2][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-5][b]!=1)&&(M[a+1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-4][b+1]!=1)&&(M[a-4][b-1]!=1)&&(M[a-5][b+1]!=1)&&(M[a-5][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a-1][b]=='X')&&(Mjogo[a-2][b]=='X')&&(Mjogo[a-3][b]=='X')&&(Mjogo[a-4][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a-5][b]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-3][b+1]='O';
		Mjogo[a-3][b-1]='O';
		Mjogo[a-4][b+1]='O';
		Mjogo[a-4][b-1]='O';
		Mjogo[a-5][b+1]='O';
		Mjogo[a-5][b-1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b-1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a+5][b]!=1)&&(M[a-1][b]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b+1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+4][b+1]!=1)&&(M[a+4][b-1]!=1)&&(M[a+5][b+1]!=1)&&(M[a+5][b-1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b-1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X')&&(Mjogo[a+2][b]=='X')&&(Mjogo[a+3][b]=='X')&&(Mjogo[a+4][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a+5][b]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+3][b-1]='O';
		Mjogo[a+3][b+1]='O';
		Mjogo[a+4][b-1]='O';
		Mjogo[a+4][b+1]='O';
		Mjogo[a+5][b-1]='O';
		Mjogo[a+5][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-5]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-4]!=1)&&(M[a-1][b-5]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-4]!=1)&&(M[a+1][b-5]!=1)&&(M[a+1][b+1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a][b-1]=='X')&&(Mjogo[a][b-2]=='X')&&(Mjogo[a][b-3]=='X')&&(Mjogo[a][b-4]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a][b-5]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a-1][b-5]='O';
		Mjogo[a-1][b-4]='O';
		Mjogo[a-1][b-3]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a+1][b-5]='O';
		Mjogo[a+1][b-4]='O';
		Mjogo[a+1][b-3]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b+5]!=1)&&(M[a][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a-1][b+4]!=1)&&(M[a-1][b+5]!=1)&&(M[a-1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+1][b+4]!=1)&&(M[a+1][b+5]!=1)&&(M[a+1][b+1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X')&&(Mjogo[a][b+2]=='X')&&(Mjogo[a][b+3]=='X')&&(Mjogo[a][b+4]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a][b+5]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b+3]='O';
		Mjogo[a-1][b+4]='O';
		Mjogo[a-1][b+5]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b+3]='O';
		Mjogo[a+1][b+4]='O';
		Mjogo[a+1][b+5]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-2]!=1)&&(M[a][b+4]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+1][b+4]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a-1][b+4]!=1))
{
	if((Mjogo[a][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X')&&(Mjogo[a][b+2]=='X')&&(Mjogo[a][b+3]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a][b-2]='O';
		Mjogo[a][b+4]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b+3]='O';
		Mjogo[a+1][b+4]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b+3]='O';
		Mjogo[a-1][b+4]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-3]!=1)&&(M[a][b+3]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1))
{
	if((Mjogo[a][b-2]=='X')&&(Mjogo[a][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X')&&(Mjogo[a][b+2]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a][b-3]='O';
		Mjogo[a][b+3]='O';
		Mjogo[a-1][b-3]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b+3]='O';
		Mjogo[a+1][b-3]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b+3]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a][b-4]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b-4]!=1)&&(M[a-1][b-3]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a+1][b-4]!=1)&&(M[a+1][b-3]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1))
{
	if((Mjogo[a][b-3]=='X')&&(Mjogo[a][b-2]=='X')&&(Mjogo[a][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a][b+1]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a][b-4]='O';
		Mjogo[a][b+2]='O';
		Mjogo[a-1][b-4]='O';
		Mjogo[a-1][b-3]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a+1][b-4]='O';
		Mjogo[a+1][b-3]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-2][b]!=1)&&(M[a+4][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+4][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b+1]!=1)&&(M[a+4][b+1]!=1))
{
	if((Mjogo[a-1][b]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X')&&(Mjogo[a+2][b]=='X')&&(Mjogo[a+3][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a-2][b]='O';
		Mjogo[a+4][b]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+3][b-1]='O';
		Mjogo[a+4][b-1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+3][b+1]='O';
		Mjogo[a+4][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-3][b]!=1)&&(M[a+3][b]!=1)&&(M[a-3][b-1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a+3][b-1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b+1]!=1))
{
	if((Mjogo[a-2][b]=='X')&&(Mjogo[a-1][b]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X')&&(Mjogo[a+2][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a-3][b]='O';
		Mjogo[a+3][b]='O';
		Mjogo[a-3][b-1]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+3][b-1]='O';
		Mjogo[a-3][b+1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+3][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-4][b]!=1)&&(M[a+2][b]!=1)&&(M[a-4][b-1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-2][b-1]!=1)&&(M[a-1][b-1]!=1)&&(M[a][b-1]!=1)&&(M[a+1][b-1]!=1)&&(M[a+2][b-1]!=1)&&(M[a-4][b+1]!=1)&&(M[a-3][b+1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b+1]!=1))
{
	if((Mjogo[a-3][b]=='X')&&(Mjogo[a-2][b]=='X')&&(Mjogo[a-1][b]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+1][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Porta-avioes \n");		
		Mjogo[a-4][b]='O';
		Mjogo[a+2][b]='O';
		Mjogo[a-4][b-1]='O';
		Mjogo[a-3][b-1]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a-4][b+1]='O';
		Mjogo[a-3][b+1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+2][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-2][b]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+3]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a-1][b+1]=='X')&&(Mjogo[a][b+2]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a-2][b]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-2][b+2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b+3]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b+3]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b+3]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;

	}
}


if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+2][b-2]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1))
{
	if((Mjogo[a+1][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+1][b+1]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b-2]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b+2]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+2][b-2]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+2][b]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+2][b+2]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-2][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b-2]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b-3]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1))
{
	if((Mjogo[a][b-2]=='X')&&(Mjogo[a-1][b-1]=='X')&&(Mjogo[a][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a-2][b]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-2][b-2]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-3]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b-3]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-3]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b+2]!=1)&&(M[a-1][b+3]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+3]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+1][b+3]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1))
{
	if((Mjogo[a+1][b+1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a][b+2]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-1][b+3]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b+3]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+1][b+3]='O';
		Mjogo[a+2][b]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+2][b+2]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a-2][b-2]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1))
{
	if((Mjogo[a-1][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a-1][b+1]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a][b-2]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b+2]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-2][b-2]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-2][b]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-2][b+2]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-1][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b-3]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b-3]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b-3]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b-2]!=1))
{
	if((Mjogo[a][b-2]=='X')&&(Mjogo[a+1][b-1]=='X')&&(Mjogo[a][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b-3]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b-3]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b-3]='O';
		Mjogo[a+2][b]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+2][b-2]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a-1][b-2]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a-2][b-2]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-3][b-1]!=1)&&(M[a-3][b]!=1)&&(M[a-3][b+1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a-1][b-1]=='X')&&(Mjogo[a-2][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a][b-2]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-2][b-2]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-3][b-1]='O';
		Mjogo[a-3][b]='O';
		Mjogo[a-3][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-2][b]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1))
{
	if((Mjogo[a-1][b+1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+1][b+1]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a-2][b]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-2][b+2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b+2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+2][b]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+2][b+2]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b-2]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a+1][b-2]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a+2][b-2]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+3][b-1]!=1)&&(M[a+3][b]!=1)&&(M[a+3][b+1]!=1))
{
	if((Mjogo[a][b]=='X')&&(Mjogo[a+1][b-1]=='X')&&(Mjogo[a+2][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");	
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b-2]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+2][b-2]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+3][b-1]='O';
		Mjogo[a+3][b]='O';
		Mjogo[a+3][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+2]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b+1]!=1)&&(M[a-2][b+2]!=1)&&(M[a-3][b-1]!=1)&&(M[a-3][b]!=1)&&(M[a-3][b+1]!=1))
{
	if((Mjogo[a-1][b+1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a-2][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b+2]='O';
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+2]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-2][b+1]='O';
		Mjogo[a-2][b+2]='O';
		Mjogo[a-3][b-1]='O';
		Mjogo[a-3][b]='O';
		Mjogo[a-3][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-2][b]!=1)&&(M[a-2][b-1]!=1)&&(M[a-2][b-2]!=1)&&(M[a-1][b+1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b-2]!=1)&&(M[a][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b-2]!=1)&&(M[a+1][b+1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b-2]!=1)&&(M[a+2][b]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b-2]!=1))
{
	if((Mjogo[a+1][b-1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a-1][b-1]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a-2][b]='O';
		Mjogo[a-2][b-1]='O';
		Mjogo[a-2][b-2]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b-2]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b-2]='O';
		Mjogo[a+1][b+1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b-2]='O';
		Mjogo[a+2][b]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+2][b-2]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


if((M[a-1][b-1]!=1)&&(M[a-1][b]!=1)&&(M[a-1][b+1]!=1)&&(M[a][b-1]!=1)&&(M[a][b+1]!=1)&&(M[a][b+2]!=1)&&(M[a+1][b-1]!=1)&&(M[a+1][b]!=1)&&(M[a+1][b+2]!=1)&&(M[a+2][b-1]!=1)&&(M[a+2][b+1]!=1)&&(M[a+2][b+2]!=1)&&(M[a+3][b-1]!=1)&&(M[a+3][b]!=1)&&(M[a+3][b+1]!=1))
{
	if((Mjogo[a+1][b+1]=='X')&&(Mjogo[a][b]=='X')&&(Mjogo[a+2][b]=='X'))
	{
		printf("\n Seu inimigo destruiu 1 Hidroavioes \n");		
		Mjogo[a-1][b-1]='O';
		Mjogo[a-1][b]='O';
		Mjogo[a-1][b+1]='O';
		Mjogo[a][b-1]='O';
		Mjogo[a][b+1]='O';
		Mjogo[a][b+2]='O';
		Mjogo[a+1][b-1]='O';
		Mjogo[a+1][b]='O';
		Mjogo[a+1][b+2]='O';
		Mjogo[a+2][b-1]='O';
		Mjogo[a+2][b+1]='O';
		Mjogo[a+2][b+2]='O';
		Mjogo[a+3][b-1]='O';
		Mjogo[a+3][b]='O';
		Mjogo[a+3][b+1]='O';
	Mtotal--;
	Mtotal--;
	Mtotal--;
	}
}


		}

		if((dadosalvo==0)&&(PCacertou==1))
        	{
  
		do
		{
			x=  1 + ( rand() % 15);
        	y=  1 + ( rand() % 15);		
			
			if((Mjogo[x][y]=='O')||(Mjogo[x][y]=='X')){
				volta=1;

			}
			else
				volta=0;
			
		}
		while(volta==1);
			
		if(M[x][y]==0)
		{
			Mjogo[x][y]='O';
			PCacertou=0;
			printf("\n SPLASH, seu inimigo acertou a agua \n");
            dadosalvo=0;	

		}
		if(M[x][y]==1)
		{
			Mjogo[x][y]='X';
			PCacertou=1;
			printf("\n BUM, seu inimigo acertou um navio \n");
			a=x;
			b=y;
			dadosalvo=1;
			if(Mtotal==0)
			{
				printf("\n Voce perdeu o jogo\n");
				continua=0;
			}
        }
        }
    }





		
	
		printf("\n\n          ************SEU JOGO, PROTEJA COM SUA VIDA************ \n");
		printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13| 14| 15|\n");
		printf("   -------------------------------------------------------------");
		x=1;
		printf("\n A |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=2;
		printf("\n B |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=3;
		printf("\n C |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=4;
		printf("\n D |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=5;
		printf("\n E |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=6;
		printf("\n F |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=7;
		printf("\n G |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=8;
		printf("\n H |");
		for(y=1;y<=15;y++){
			
		printf(" %c |", Mjogo[x][y]);
		}
		
		x=9;
		printf("\n I |");
			for(y=1;y<=15;y++){
			
		printf(" %c |", Mjogo[x][y]);
		}
		
		x=10;
		printf("\n J |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=11;
		printf("\n L |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=12;
		printf("\n M |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", Mjogo[x][y]);
		}
		
			x=13;
		printf("\n N |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", Mjogo[x][y]);
		}
	
		x=14;
		printf("\n O |");
		for(y=1;y<=15;y++){
		
			printf(" %c |", Mjogo[x][y]);
		}
		
		x=15;
		printf("\n P |");
		for(y=1;y<=15;y++){
			
			printf(" %c |", Mjogo[x][y]);
		}
		
		printf("\n");
		printf("   -------------------------------------------------------------");






//FIMJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPCJOGADADOPC

	if(Mtotal==0)
	{
		printf("\n Voce perdeu o jogo\n");
		continua=0;
	}
	if(PCtotal==0)
	{
		printf("\n Voce ganhou o jogo\n");
		continua=0;
	}
}
return 0;
}

