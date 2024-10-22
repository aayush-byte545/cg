/*
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>

void main(){
 int gd=DETECT, gm=0;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TurboC3\\bgi");

 int x,x1,x2,y,y1,y2,dx,dy,pk,m;
 printf("Enter the value of x1 and y1: ");
 scanf("%d %d", &x1,&y1);
 printf("Enter the value of x2 and y2: ");
 scanf("%d %d", &x2,&y2);

 x=x1;
 y=y1;

 dx=abs(x2-x1);
 dy=abs(y2-y1);

 m=dy/dx;

 if (m>=1){
  // m>=1
  pk=(2*dy)-dx;
  do{
   if(pk<0){
    x=x;
    y=y+1;
    pk=pk+(2*dx);
   }
   else{
    x=x+1;
    y=y+1;
    pk=pk+(2*dx)-(2*dy);
   }
    putpixel(x,y,YELLOW);
   }while(y<y2);
  }
 // for m<1
 else{
 do{
  if(pk<0){
   x=x+1;
   y=y;
   pk=pk+(2*dy);
  }
  else{
   x=x+1;
   y=y+1;
   pk=pk+(2*dy)-(2*dx);
  }
   putpixel(x,y,YELLOW);
  }while(x<x2);
 }
 getch();
}
*/
