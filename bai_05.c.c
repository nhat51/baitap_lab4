#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int top,bottom,height,S;
	printf ("nhap day nho: ",top);
	scanf ("%d",&top);
    printf ("nhap day lon: ",bottom);
    scanf ("%d",&bottom);
    printf("nhap chieu cao: ",height);
    scanf ("%d",&height);
	
	S=((top+bottom)*height)/2;
	
	printf ("dien tich hinh thang la %d",S);
	return 0;
}
