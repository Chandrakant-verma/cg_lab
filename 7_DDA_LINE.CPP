#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <iostream.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    float x1, y1, x2, y2, dx, dy, steps;
    float xinc, yinc, x, y;
    int i;

    // Input coordinates
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    // Determine number of steps
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    // Calculate increment
    xinc = dx / steps;
    yinc = dy / steps;

    x = x1;
    y = y1;

    // Plot first point
    putpixel(round(x), round(y), WHITE);

    // Generate points
    for (i = 1; i <= steps; i++) {
        x = x + xinc;
        y = y + yinc;
        putpixel(round(x), round(y), WHITE);
    }

    getch();
    closegraph();
    return 0;
}