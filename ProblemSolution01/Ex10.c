#include<stdio.h>
void main(){
 double x;
 scanf("%lf", &x);
 double sin, cos,sint,cost;
 sint=sin = x;
 cost=cos = 1.0;
 for (int i = 2; i <= 100; i++){
 sint = sint*x*x / ((2 * i - 1)*(2 * i - 2)*-1);
 cost = cost*x*x / ((2 * i - 2)*(2 * i - 3)*-1);
 sin += sint;
 cos += cost;
 }
 printf("%lf %lf", sin, cos);
}