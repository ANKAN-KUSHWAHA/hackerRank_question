#include<stdio.h>
#include<math.h>
int main() {
  long long a,b,c;
  scanf("%lld %lld %lld",&a,&b,&c);

  float d=b*b-4*a*c;
   
  float x,y;
  x=(-b + sqrt(d))/((2.0)*a);
  y=(-b - sqrt(d))/((2.0)*a);
   if(d>0){
     printf("Roots: %0.2f, %0.2f\n", x, y);
     printf("Type: Real and Distinct");
   }
   else if(d==0){
     printf("Roots: %0.2f, %0.2f\n", x, y);
     printf("Type: Real and Equal");
   }
   else if(d<0){
     float m=-b/((2.0)*a);
     
     float t=sqrt(-d)/(2.0*a);
     
     printf("Roots: %0.2f + %0.2fi, %0.2f - %0.2fi\n", m, t,m,t);
    
     printf("Type: Complex");
   }
  return 0;
}
