#include <graphics.h>

#include <conio.h>

void drawV(int x, int y, int size) {
  int V[7][5] = {
    {
      1,
      0,
      0,
      0,
      1
    },
    {
      1,
      0,
      0,
      0,
      1
    },
    {
      1,
      0,
      0,
      0,
      1
    },
    {
      1,
      0,
      0,
      0,
      1
    },
    {
      1,
      0,
      0,
      0,
      1
    },
    {
      0,
      1,
      0,
      1,
      0
    },
    {
      0,
      0,
      1,
      0,
      0
    }
  };
  int i,
  j;
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      if (V[i][j] == 1) {
        rectangle(x + j * size, y + i * size, x + (j + 1) * size, y + (i + 1) * size);
        floodfill(x + j * size + 1, y + i * size + 1, WHITE);
      }

    }}}

int main() {
  int gd = DETECT,
  gm;
  int x = 200,
  y = 100;
  int size = 10;
  initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
  drawV(x, y, size);
  getch();
  closegraph();
  return 0;
}
