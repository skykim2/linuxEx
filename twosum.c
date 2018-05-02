#include <stdio.h>


int main()
{
	int a, b, i, j=0, k=0, sum =0;

	scanf(" %d  %d\n", &a, &b);
	
	for(i = a;i <= b; i++){
		if((i%2)!= 0)
		 sum += 1;
	    
		for( j = a; (j % 2) == 0  && j > 1; j/=2)
	         k++;
		
		 sum += 2<<k;
    }
	printf(" %d and %d and  sum is %d by two\n", a,b, sum);
}
