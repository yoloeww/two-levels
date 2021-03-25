#include <stdio.h>
#define   N   12
typedef  struct
{  char  num[10];
   double  s;
} STREC;
double  fun( STREC  *a, STREC *b, int *n )
{
	int i;
    double av=0.0;
	*n=0;
	for(i=0;i<N;i++)
		av=av+a[i].s;
	av=av/N;
	for(i=0;i<N;i++)
		if(av<=a[i].s)
		{
		    b[*n]=a[i];
			*n=*n+1;
		}
		return av;
}
int main(void)
{
    return 0;
}