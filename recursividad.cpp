

#include<stdio.h>

int MCD_Rec(int x, int y){
	int z = x%y;
	if(z==0) return y;
	else MCD_Rec(y,z);
}

int main(){
	int x,y;
	printf("ingrese el primer num entero");
	scanf("%d",&x);
	printf("ingrese el segundo num entero");
	scanf("%d",&y);
	printf("el MCD es: %d", MCD_Rec(x,y));
	return 0;
}