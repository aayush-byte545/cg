#include<stdio.h>
#include<graphics.h>

void drawline(int x, int y, int x1, int y1)
{
int dx, dy, p;
dx=x1-x;
dy=y1-y;
p=2*dy-dx;
while(x<x1)
{
if(p>=0)
{
putpixel(x,y,7);
y++;
p+=2*(dy-dx);
}
else
{
putpixel(x,y,7);
p=p+2*dy;
}
x++;
}
}
int main()
{
int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
printf("Enter co-ordinates of first point: ");
scanf("%d%d", &x0, &y0);
printf("Enter co-ordinates of second point: ");
scanf("%d%d", &x1, &y1);
drawline(x0, y0, x1, y1);
return 0;
}