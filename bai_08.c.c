#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("======== DO DAI CAC KIEU DU LIEU VA VI DU ============ \n");

	
printf ("kieu int: %d bytes \n",sizeof (int) );
printf ("vi du kieu so thuc int : 22\n");
printf ("\n kieu char: %d bytes\n", sizeof (char));	
printf ("vi du kieu ki tu char: Nhat\n");
printf ("\n kieu float: %d bytes\n",sizeof (float));
printf ("vi du kieu so thuc: 3.1476525987\n");	
printf ("\n kieu double: %d bytes\n",sizeof (double));	
printf ("vi du kieu double: 6.3423247\n");
printf ("\n kieu long double: %d bytes\n",sizeof (long double));
printf ("kieu long int: %d bytes ", sizeof (long int));
	
	
	
	return 0;
}
