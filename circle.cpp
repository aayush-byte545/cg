#include<graphics.h>
#include<stdlib.h>

#include<conio.h>
#include<iostream.h>
void main() {
  int gdriver = DETECT,
  gmode,
  errorcode;
  initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
  int xm = (getmaxx()/2);
  int ym = getmaxy()/2;
  cout<<"\n Enter radius:";
  int r;
  cin>>r;
  int x = 0;
  int y = r;
  float d = 1.25-r;
  while(x <= y) {
    putpixel(xm+x, ym-y, 15);
    putpixel(xm+y, ym-x, 15);
    putpixel(xm+y, ym+x, 15);
    putpixel(xm+x, ym+y, 15);
    putpixel(xm-x, ym+y, 15);
    putpixel(xm-y, ym+x, 15);
    putpixel(xm-y, ym-x, 15);
    putpixel(xm-x, ym-y, 15);
    if(d < 0) {
      d += (2*x)+3;
    }
    else
    {
      d += (2*(x-y))+5;
      y--;
    }
    x++;
  }
  getch();
  closegraph();
}
