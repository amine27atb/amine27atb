#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef enum type1 type1{ PLUS_INFINI, MOINS_INFINI, ERREUR };
typedef union type2 type2{ int x, type1 y};
typedef struct super_int super_int{ type2 x, int y};


union division( int a, int b){
	type2 z;
	if(a==0 && b==0) z.y=ERREUR;
	if(b==0){
		if(a>0) return z.y=PLUS_INFINI;
		if(a<0) return z.y=MOINS_INFINI;
	}
	else z.x=a/b;
	
	return z;
}

union addition(super_int a, super_int b){
	super_int z;
	
	if(a.y==2 && b.y==2){
		if(a.y.y==PLUS_INFINI && b.y.y==PLUS_INFINI) z.y.y=PLUS_INFINI;
		if(a.y.y==MOINS_INFINI && b.y.y==MOINS_INFINI) z.y.y=MOINS_INFINI;
		if(a.y.y==ERREUR || b.y.y==ERREUR) z.y.y=ERREUR;
	}
	if(a.y==2 && b.y==1) z.y.y=a.y.y;
	if(a.y==1 && b.y==2) z.y.y=b.y.y;
	if(a.y==1 && b.y==1) z.y a+b;
	
	return z;
}
		
	
	
	
	
	
	
	
int main(){
	
	return 0;
	
}
