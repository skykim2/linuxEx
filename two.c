#include <stdio.h>


int main()
{
	int i, j=0, k;

	scanf(" %d\n", &i);

	for( k = 0; (i % 2) == 0  && i > 1; k++){
		j++;
	    i = i/2;
	}
	printf(" %d is divided %d times by two\n", k, 2<<j-1);
}
