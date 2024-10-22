
/*
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main(){
 int gd=DETECT, gm;
 initgraph(&gd, &gm,"C:\\TurboC3\\bgi");

 int xo,yo,x,y;
 float r,po;
 printf("Enter the radius of Circle: ");
 scanf("%f", &r);
 printf("Enter the X-Corodinate & Y-Corodinate of Circle: ");
 scanf("%d%d",&xo,&yo);
 x=0;
 y=r;
 po=(5/4)-r;

 do{
  putpixel(x+xo, y+yo, YELLOW);
  putpixel(-x+xo, y+yo, RED);
  putpixel(x+xo, -y+yo, BLUE);
  putpixel(-x+xo, -y+yo, GREEN);
  putpixel(y+xo, x+yo, YELLOW);
  putpixel(-y+xo, x+yo, RED);
  putpixel(y+xo, -x+yo, BLUE);
  putpixel(-y+xo, -x+yo, GREEN);

  if(po<0){
   po=po+((2*x)+3);
  }
  else{
   po=po+(2*(x-y)+5);
   y--;
  }
  x++;
 } while(x<y);

 getch();
 closegraph();
 return 0;
}
*/
