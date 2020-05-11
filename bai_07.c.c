#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cd,cr;
	float hv;
	float r;
	float C,S;
	
printf ("/*==============bai07================*/ \n");

	// nhap du lieu cua hinh chu nhat
	printf ("\n nhap chieu dai hinh chu nhat: ",cd);
	scanf ("%f",&cd);
	printf ("nhap chieu rong hinh chu nhat: ",cr);
	scanf ("%f",&cr);
	
	// nhap du lieu inh vuong
	printf ("nhap chieu dai mot canh cua hinh vuong: ",hv);
	scanf ("%f",&hv);
	
	// nhap du lieu cu hinh tron 
	printf ("nhap ban kinh hinh tron: ",r);
	scanf ("%f",&r);
	
    printf ("\n da tinh toan xong\n");
		
	// chu vi va dien tich hinh chu nhat
	C=(cd+cr)*2;
	S=cd*cr;
	printf ("\n\nchu vi hinh chu nhat la: %.2f \n",C);
	printf ("dien tich hinh chu nhat la: %.2f \n",S);
	

	
	// chu vi va dien tich hinh vuong
	C=hv*2;
	S=hv*hv;
	printf ("\nchu vi hinh vuong la: %.2f\n",C);
	printf ("dien tich hinh vuong la: %.2f\n ",S);
	
	// chu vi va dien tich hinh tron
	C=r*2*3.14;
	S=r*r*3.14;
	printf ("\nchu vi hinh tron la: %.2f\n",C);
	printf ("dien tich hinh tron la: %.2f",S);
	return 0;
}
