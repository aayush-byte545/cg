

/*
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
void main(){
 int x1,x2,y1,y2,dx,dy,step,i=0;
 int x,y;
 int gd=DETECT,gm=0;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm, "C:\\TurboC3\\bgi");
 printf("Enter value of x1 and y1: ");
 scanf("%d %d", &x1, &y1);
 printf("Enter value of x2 and y2: ");
 scanf("%d %d", &x2, &y2);
 dx = abs(x2-x1);
 dy = abs(y2-y1);
 if(dx>=dy){
  step=dx;
 }else{
  step=dy;
 }
 dx = (x2-x1)/step;
 dy = (y2-y1)/step;
 x = x1+0.5;
 y = y1+0.5;
 while(i<step){
  x=x+dx;
  y=y+dy;
  putpixel(x,y,GREEN);
  i++;
 }
 getch();
}
*/
