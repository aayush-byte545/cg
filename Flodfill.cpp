





































/*
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void flood_fill(int x, int y, int oldColor, int newColor){
 if(getpixel(x,y)==oldColor){
  putpixel(x,y,newColor);
  flood_fill(x+1,y,oldColor,newColor);
  flood_fill(x-1,y,oldColor,newColor);
  flood_fill(x,y+1,oldColor,newColor);
  flood_fill(x,y-1,oldColor,newColor);
  flood_fill(x+1,y+1,oldColor,newColor);
  flood_fill(x-1,y-1,oldColor,newColor);
  flood_fill(x+1,y-1,oldColor,newColor);
  flood_fill(x-1,y+1,oldColor,newColor);
 }
}

void main(){
 int gd=DETECT,gm;
 initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

 rectangle(50, 50, 100, 100);

 flood_fill(70, 70, 0, 3);

 getch();
 closegraph();
}
*/
