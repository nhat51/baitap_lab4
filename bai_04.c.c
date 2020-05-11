#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float C,F;
	printf ("nhap do C : ");
	scanf ("%f",C);
	
	F= (C*9)/5+32;
	printf (" do F la %f",F);
	return 0;
}
