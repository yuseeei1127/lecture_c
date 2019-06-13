#include<stdio.h>
#include<math.h>
typedef struct complex {
   double real;
   double imag;
} cnum;

cnum c_add(cnum c1, cnum c2);

int main(){
  cnum c1, c2, c3;
  c1.real=0.3,  c1.imag=0.7;
  c2.real=0.8,  c2.imag=0.9;

  c3 = c_add(c1, c2);
  printf("c3 = (%8.4f %8.4f )\n", c3.real, c3.imag);
}

cnum c_add(cnum c1, cnum c2){
   cnum c3;
   c3.real = c1.real + c2.real ;
   c3.imag = c1.imag + c2.imag ;
   return c3;
}