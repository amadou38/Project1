#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   void newton(double x0, double eps, int Nmax, double (*pf[])(double x), double (*pfprime[])(double x))
{  double x1;
 int choixf;
 int  iter=0;
 printf("Taper le nombre d'iterations: ");
scanf("%d",&Nmax);
 x1=x0-(*pf[choixf])(x0)/(*pfprime[choixf])(x0); 
 iter=1;
 while(fabs(x1-x0)>eps && iter<Nmax)
 {
 x0=x1;
 x1=x0-(*pf[choixf])(x0)/(*pfprime[choixf])(x0);
 iter++; }
if(fabs(x1-x0)<=eps)
 printf("Newton converge vers %14.12f au bout de %d iterations\n", x1, iter);
else printf("Newton: précision pas atteinte après %d itérations\n",Nmax);}
