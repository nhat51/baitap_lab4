#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	int tong,hieu,tich;
	float thuong;
	printf ("nhap so num1: ");
	scanf("%d",&num1);
	printf ("nhap so num2: ");
	scanf ("%d",&num2);
	
	tong=num1+num2;
	printf ("tong hai so la %d\n",tong);
	
	hieu=num1-num2;
	printf ("hieu hai so la %d\n",hieu);
	
	tich=num1*num2;
	printf ("tich hai so la %d\n",tich);
	
	thuong=num1/num2;
	printf ("thuong hai so la %f",thuong);
	
	getchar();
}
