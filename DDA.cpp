#include <graphics.h>
#include <iostream.h>

#include <math.h>
#include <dos.h>
#include <conio.h>
void main() {
  float x,
  y,
  x1,
  y1,
  x2,
  y2,
  dx,
  dy,
  step;
  int i,
  gd = DETECT,
  gm;
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  cout << "Enter the value of x1 and y1:";
  cin >> x1 >> y1;
  cout << "Enter the value of x2 and y2:";
  cin >> x2 >> y2;
  dx = (x2 - x1);
  dy = (y2 - y1);
  if (abs(dx) >= abs(dy))
  step = abs(dx);
  else
  step = abs(dy);
  int xi = dx / step;
  int yi = dy / step;
  x = x1;
  y = y1;
  i = 0;
  while (i <= step) {
    putpixel(x, y, 5);
    x += xi;
    y += yi;
    i++;
    delay(100);
  }
  getch();
  closegraph();
}
