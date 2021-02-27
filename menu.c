#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int menu(void){ 
 double f(double x); double g(double x); double h(double x); double j(double x); double k(double x); 
 double fprime(double x); double gprime(double x); double hprime(double x); double jprime(double x); double kprime(double x); 
double F(double x); double G(double x); double H(double x); double J(double x); double K(double x); 
double a; double b; double x0; double x1; double fixe; 
 void dichotomie (double a, double b, double eps, int Nmax, double (*f[])(double x)); 
void apprsucc(double x0, double eps, double (*pF[])(double x)); 
void secante(double x1, double fixe, double eps, int Nmax, double (*pf[])(double x)); 
void newton(double x0, double eps, int Nmax, double (*pf[])(double x), double (*pfprime[])(double x));
 int choixm; 
 int choixf; 
double (*pf[])(double x)={&f,&f,&g,&h,&j,&k}; 
double (*pF[])(double x)={&F,&F,&G,&H,&J,&K};
double (*pfprime[])(double x)={&fprime,&fprime,&gprime,&hprime,&jprime,&kprime}; 
 int Nmax; 
printf("\n\n*****Voici les fonctions a resoudre*****\n");
printf("\t<1>:  f(x)= x-exp(-x).\n");
printf("\t<2>:  g(x)= x²-2.\n");
printf("\t<3>:  h(x)= ln(x²-1)-sqrt(x²+2)+2.\n");
printf("\t<4>:  j(x)= x³-sqrt(2)*x²-4.\n");
printf("\t<5>:  k(x)= x³-exp(-x)+sin(x).\n");
printf("\t<6>:  Pour quitter!!!\n");
do{
printf("\t\t    Choisissez: \n");
scanf("%d",&choixf);}
while(choixf<1||choixf>6);
if(choixf==6) exit(-1);
else{
switch(choixf)
 {
case 1: a=0; b=1; x0=0; x1=0; fixe=1;
     break;
case 2: a=0; b=2; x0=a; x1=0; fixe=b;
     break;
    case 3: a=4; b=6; x0=b; x1=6; fixe=a;
     break;
    case 4: a=2; b=3; x0=a; x1=0; fixe=b;
     break;
    case 5: a=0; b=1; x0=a; x1=0; fixe=b;
     break;}
printf("Vous avez choisi de résoudre l'équation %d, dans l'intervalle [%1.0f;%1.0f]\n", choixf, a, b);
printf("\n\n*****Voici les methodes de resolution pour votre equation*****\n");
printf("\t<1>:  Methode de Dichotomie.\n");
printf("\t<2>:  Methode des Approximations Successives.\n");
printf("\t<3>:  Methode de la Secante.\n");
printf("\t<4>:  Methode de Newton.\n");
printf("\t<5>:  Pour quitter!!!\n");
do{
printf("\t\t    Choisissez: \n");
scanf("%d", &choixm);}
while(choixm<1 || choixm>5);
switch(choixm)
 {
    case 1: system("clear");
     dichotomie( a, b, 1.0e-12, Nmax, &pf[choixf]);
     break;
   case 2: system("clear");
    apprsucc(x0, 1.0e-12, &pF[choixf]);
    
     break;
    case 3: system("clear");
    secante(x1, fixe, 1.0e-12, Nmax, &pf[choixf]); 
     break;
    case 4: system("clear"); 
    newton(x0, 1.0e-12, Nmax, &pf[choixf], &pfprime[choixf]);
    
     break;
    case 5: exit(-1);
     system("clear");
     break;
    default: printf("Choix erronne! Recommencez!\n");}  
            }}
