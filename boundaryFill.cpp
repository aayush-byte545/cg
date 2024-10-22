
/*
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

// Boundary fill algorithm
void boundary_fill(int x, int y, int boundaryColor, int fillColor){
    int currentColor = getpixel(x, y);
    
    if(currentColor != boundaryColor && currentColor != fillColor){
        putpixel(x, y, fillColor);
        
        boundary_fill(x + 1, y, boundaryColor, fillColor);
        boundary_fill(x - 1, y, boundaryColor, fillColor);
        boundary_fill(x, y + 1, boundaryColor, fillColor);
        boundary_fill(x, y - 1, boundaryColor, fillColor);
    }
}

void main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    rectangle(100, 100, 150, 150);

    boundary_fill(120, 120, WHITE, RED);

    getch();
    closegraph();
}
*/
