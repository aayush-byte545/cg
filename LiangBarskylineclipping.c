#include <stdio.h>
#include <graphics.h>

// Liang-Barsky line clipping function
void liangBarskyClipping(float x_min, float y_min, float x_max, float y_max,
			 float x1, float y1, float x2, float y2) {
    float p[4], q[4];
    float t1 = 0.0, t2 = 1.0;
    float dx = x2 - x1, dy = y2 - y1;

    p[0] = -dx; q[0] = x1 - x_min;
    p[1] = dx;  q[1] = x_max - x1;
    p[2] = -dy; q[2] = y1 - y_min;
    p[3] = dy;  q[3] = y_max - y1;

    for (int i = 0; i < 4; i++) {
	if (p[i] == 0 && q[i] < 0) {
	    // Line is parallel and outside the clipping area
	    printf("Line is outside and parallel to the clipping window.\n");
	    return;
	}

	float t = q[i] / p[i];
	if (p[i] < 0) {
	    if (t > t2) {
		printf("Line is completely outside the clipping window.\n");
		return;
	    } else if (t > t1) {
		t1 = t;
	    }
	} else if (p[i] > 0) {
	    if (t < t1) {
		printf("Line is completely outside the clipping window.\n");
		return;
	    } else if (t < t2) {
		t2 = t;
	    }
	}
    }

    // Update the points with the clipped coordinates
    float newX1 = x1 + t1 * dx;
    float newY1 = y1 + t1 * dy;
    float newX2 = x1 + t2 * dx;
    float newY2 = y1 + t2 * dy;

    // Draw the clipped line
    setcolor(RED);
    line(newX1, newY1, newX2, newY2);

    printf("Clipped Line coordinates: (%.2f, %.2f) to (%.2f, %.2f)\n", newX1, newY1, newX2, newY2);
}

int main() {
    int gd = DETECT, gm=0;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C://TURBOC3/BGI");

    float x_min, y_min, x_max, y_max;
    float x1, y1, x2, y2;

    // Input the clipping rectangle coordinates
    printf("Enter clipping window coordinates (x_min, y_min, x_max, y_max): ");
    scanf("%f %f %f %f", &x_min, &y_min, &x_max, &y_max);

    // Draw the clipping window (rectangle)
    rectangle(x_min, y_min, x_max, y_max);

    // Input the original line coordinates
    printf("Enter original line coordinates (x1, y1, x2, y2): ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    // Draw the original line
    setcolor(WHITE);
    line(x1, y1, x2, y2);

    // Perform line clipping
    liangBarskyClipping(x_min, y_min, x_max, y_max, x1, y1, x2, y2);

     // Wait for a key press
    closegraph();  // Close the graphics window
    return 0;
}
