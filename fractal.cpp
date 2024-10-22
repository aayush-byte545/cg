#include <graphics.h>

#include <stdio.h>

#include <conio.h>
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
  int points[] = {
    x1,
    y1,
    x2,
    y2,
    x3,
    y3,
    x1,
    y1
  };
  drawpoly(4, points);
}
void fractal(int x1, int y1, int x2, int y2, int x3, int y3, int depth) {
  if (depth == 0) {
    drawTriangle(x1, y1, x2, y2, x3, y3);
  } else {
    int mx1 = (x1 + x2) / 2;
    int my1 = (y1 + y2) / 2;
    int mx2 = (x2 + x3) / 2;
    int my2 = (y2 + y3) / 2;
    int mx3 = (x1 + x3) / 2;
    int my3 = (y1 + y3) / 2;
    // Recursively draw three smaller triangles
    fractal(x1, y1, mx1, my1, mx3, my3, depth - 1);
    fractal(x2, y2, mx1, my1, mx2, my2, depth - 1);
    fractal(x3, y3, mx2, my2, mx3, my3, depth - 1);
  }
}
int main() {
  int gd = DETECT,
  gm;
  initgraph(& gd, & gm, "C:\\TURBOC3\\BGI");
  int x1 = getmaxx() / 2;
  int y1 = 50;
  int x2 = 50;
  int y2 = getmaxy() - 50;
  int x3 = getmaxx() - 50;
  int y3 = getmaxy() - 50;
  int depth = 5; // Depth of recursion
  fractal(x1, y1, x2, y2, x3, y3, depth);
  getch();
  closegraph();
  return 0;
}
