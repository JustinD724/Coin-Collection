#include <stdio.h>

int main (void) {

	char first, middle, last;
	int pennies, nickels;
	int dimes, quarters;
	int dollars;
	int change;
	int total_dollars;
	int total_cents;


	printf ("type in your 3 initials and press return> ");
	scanf ("%c%c%c", &first, &middle, &last);
	printf ("\n%c%c%c, please enter your coin information.\n",
			first, middle, last);

	printf ("number of $ dollars > ");
		scanf ("%d", & dollars);
	printf ("number of quarters > ");
		scanf ("%d", & quarters);
	printf ("number of dimes > ");
	      scanf ("%d", & dimes );
	printf ("number of nickels > ");
	      scanf ("%d", & nickels );
	printf ("number of pennies > ");
	     scanf ("%d", & pennies );

	total_cents = 100* dollars + 25 * quarters +10 * dimes + 5 * nickels + pennies;

	total_dollars = total_cents / 100;
	change = total_cents % 100;

	printf ("\n\n%c%c%c coin credit\ndollars: %d\ndollars: %d\nchange: %d cents\n",
		first, middle, last, total_dollars, change);

	return (0); }
