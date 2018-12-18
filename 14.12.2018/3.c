// Calkowanie numeryczne - metoda Monte-Carlo
// www.algorytm.org
// (c)2007 by Tomasz Lubinski

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX(a,b) (a>b)?a:b

//funkcja dla ktorej obliczamy calke
float func(float x) {
return x*x+3;
}

//1 jeżeli punkt leży nad osią OY i jednocześnie pod wykresem funkcji całkowanej
//-1 jeżeli punkt leży pod osią OY i jednocześnie nad wykresem funkcji całkowanej
//0 w przeciwnym razie
int funcIn(float x, float y) {
if (( y > 0) && (y <= func(x)))
return 1;
else if (( y > 0) && (y <= func(x)))
return -1;
return 0;
}

//random number from a to b
double randomPoint(double a, double b) {
return a + (double)rand()/(double)(RAND_MAX+1) * (b-a);
}

//get data, algorithm
int main(){
float xp, xk, yp, yk, calka;
int i, n, pointsIn;

printf("Podaj poczatek przedzialu calkowania\n");
scanf("%f", &xp);

printf("Podaj koniec przedzialu calkowania\n");
scanf("%f", &xk);

printf("Podaj dokladnosc calkowania (w setkach punktow)\n");
scanf("%d", &n);
n *= 100;

yp = 0;
yk = ceil(MAX(func(xp), func(xk)));

pointsIn = 0;
srand((unsigned)time( NULL ));

for (i=0; i<n; i++) {
pointsIn += funcIn(randomPoint(xp, xk), randomPoint(yp, yk));
}

calka = (pointsIn / (double)n) * ((xk-xp) * (yk-yp));

printf("Wartosc calki wynosi w przyblizeniu %f\n", calka);

return 0;
}
