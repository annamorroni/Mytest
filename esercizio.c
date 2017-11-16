#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main(void) {
	int x,y,z;
	printf ("scrivi i valori dei tre lati \n");
	scanf ("%d %d %d", &x, &y, &z);
	if (x<=0||y<=0||z<=0||x>=y+z||y>=x+z||z>=x+y||x<=abs(y-z)||y<=abs(x-z)||z<=abs(x-y))
		printf("non è un triangolo \n");
	else{
	if(x==y&&y==z)
	printf ("il triangolo è equilatero, quindi non rettangolo \n");
	else{
	if(x!=y&&x!=z&&y!=z)
	printf ("il triangolo è scaleno");
	else 
	printf ("il trangolo è isoscele");
	if ((x*x)==((y*y)+(z*z))||(y*y)==((x*x)+(z*z))||(z*z)==((x*x)+(y*y)))
	printf (" e rettangolo \n");
	else
	printf (" e non rettangolo \n");
}
}
  return 0;
}

