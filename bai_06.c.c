#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float hoa,sinh,ly,tb;
	printf ("nhap diem hoa: ",hoa);
	scanf ("%f",&hoa);
	printf ("nhap diem sinh: ",sinh);
	scanf("%f",&sinh);
	printf ("nhap diem ly: ",ly);
	scanf ("%f",&ly);
	
	tb=(hoa+sinh+ly)/3;
	printf ("diem trung binh cua ba mon hoa, sinh, ly la %.2f ",tb);
	return 0;
}
