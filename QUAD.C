#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 double a,b,c,d,r1,r2,rp,ip;
 clrscr();
 printf("/nEnter the value for a,b,c: ");
 scanf("%lf%lf%lf",&a,&b,&c);
 d=b*b-(4*a*c);
 if (d>0)
 {
  r1=(-b+sqrt(d))/(2*a);
  r2=(-b-sqrt(d))/(2*a);
  printf("real roots:%0.2lf%0.2lf",r1,r2);
 }
 else if(d==0)
 {
  r1=-b/(2*a);
  r2=-b/(2*a);
  printf("roots are real and equal: ");
 }
 else
 {
  rp=-b/(2*a);
  ip=sqrt(-d)/(2*a);
  printf("roots are imaginary\n");
  printf("root1: %0.2lf+%0.2lfi\t root2: %0.2lf-%0.2lfi",rp,ip,rp,ip);
 }
 getch();
}
