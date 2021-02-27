#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   void secante(double x1, double fixe, double eps, int Nmax, double (*pf[])(double x))
{  double x0; int choixf;
 double yfixe=(*pf[choixf])(fixe); 
 
 int  iter=0;
 printf("Taper le nombre d'iterations: ");
scanf("%d",&Nmax);
 x1=x0-(*pf[choixf])(x0)/(((*pf[choixf])(x0)-(*pf[choixf])(fixe))/(x0-fixe)); 
 iter=1;
 while(fabs(x1-x0)>eps && iter<Nmax)
 {
 x0=x1;
 x1=x0-(*pf[choixf])(x0)/(((*pf[choixf])(x0)-(*pf[choixf])(fixe))/(x0-fixe));
 iter++; }
if(fabs(x1-x0)<=eps)
 printf("Secante converge vers %14.12f au bout de %d iterations\n", x1, iter);
else printf("Secante: précision pas atteinte après %d itérations\n",Nmax);}
