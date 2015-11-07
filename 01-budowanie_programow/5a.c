/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */
#include <stdio.h>
#include <math.h>
int main() {
   double deg, rad;
   printf("Podaj kat w stopniach : ");
   scanf("...", &deg);
   rad = ... ;  /* grep PI /usr/include/math.h */
   printf("%lf deg = %lf rad\n", ... , ...);
   return 0;
}
