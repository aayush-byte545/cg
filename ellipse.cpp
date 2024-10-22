
/*
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>

void main(){
 int gd=DETECT,gm;
 initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");

 float x,y,rx,ry,xc,yc,p1,p2;

 printf("Enter the radius of ellipse (rx, ry): ");
 scanf("%f%f", &rx, &ry);
 printf("Enter the centre of ellipse (xc, yc): ");
 scanf("%f%f", &xc, &yc);

 x=0;
 y=ry;

 p1=(ry*ry)-(rx*rx*ry)+(0.25*(rx*rx));

 do{
  putpixel(x+xc,y+yc,YELLOW);
  putpixel(x+xc,-y+yc,YELLOW);
  putpixel(-x+xc,y+yc,YELLOW);
  putpixel(-x+xc,-y+yc,YELLOW);
  if(p1<0){
   x=x+1;
   y=y;
   p1=p1+(2*ry*ry*(x+1))+(ry*ry);
  }
  else{
   x=x+1;
   y=y-1;
   p1=p1+(2*ry*ry*(x+1))+(ry*ry)-(2*rx*rx*(y-1));
  }
 }while((2*ry*ry*x) <= (2*rx*rx*y));

 p2=((x+0.5)*(x+0.5)*ry*ry)+((y-1)*(y-1)*(rx*rx))-(rx*rx*ry*ry);

 do{
  putpixel(x+xc,y+yc,YELLOW);
  putpixel(x+xc,-y+yc,YELLOW);
  putpixel(-x+xc,y+yc,YELLOW);
  putpixel(-x+xc,-y+yc,YELLOW);

  if(p2>0){
   x=x;
   y=y-1;
   p2=p2-(2*rx*rx*y)+(3*rx*rx);
  }
  else{
   x=x+1;
   y=y-1;
   p2=p2+(2*ry*ry*(x+1))-(2*rx*rx*y)+(3*rx*rx);
  }
 }while(y>0);

 getch();
 closegraph();
}
*/
