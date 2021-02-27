#include<math.h>
double K(double x)
{
return x-0.423*(x*x*x-exp(-x)+sin(x));
}
