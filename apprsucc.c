#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   void apprsucc(double x0, double eps, double (*pF[])(double x))
{  double x1; 
 int choixf;
 int  iter=0;
 x1=(*pF[choixf])(x0);
 iter=1;
 while(fabs(x1-x0)>eps)
 {
 x0=x1;
 x1=(*pF[choixf])(x0);
 iter++; }
 printf("Approximations successives converge vers %14.12f au bout de %d iterations\n", x1, iter);}
