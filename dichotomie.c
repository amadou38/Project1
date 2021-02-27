#include<stdio.h>
 
 void dichotomie (double a, double b, double eps, int Nmax, double (*pf[])(double x))
{  int choixf;
 int rep;
int  iter=0;
printf("Taper le nombre d'iterations: ");
scanf("%d",&Nmax);
double M;
while((b-a)>eps && iter<Nmax)
{ 
 M=(a+b)/2;
 if((*pf[choixf])(a)*(*pf[choixf])(M)<0)
 b=M;
 else if((*pf[choixf])(b)*(*pf[choixf])(M)<0)
 a=M;
 else 
  {
   a=M; b=M;
    }
 ++iter;
 }
	if((b-a)<=eps)
	printf("Dichotomie converge vers %14.12f au bout de %d iterations\n", (a+b)/2, iter);
	else 
	printf("Dichotomie: precision pas atteinte apres %d iterations\n",Nmax);
}
