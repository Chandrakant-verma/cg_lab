#include <graphics.h>
#include <conio.h>
#include <iostream.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    
    float x1, y1, x2, y2, x, y, xinc, yinc;
    int steps, i;
    
    // Fixed coordinates (no user input)
    x1 = 100; y1 = 100;  // Starting point
    x2 = 300; y2 = 200;  // Ending point
    
    // Calculate steps
    float dx = x2 - x1;
    float dy = y2 - y1;
    
    if (dx > dy) 
        steps = dx;
    else
        steps = dy;
    
    // Calculate increments
    xinc = dx / steps;
    yinc = dy / steps;
    
    x = x1;
    y = y1;
    
    // Draw line
    for (i = 0; i <= steps; i++) {
        putpixel((int)(x + 0.5), (int)(y + 0.5), WHITE);
        x += xinc;
        y += yinc;
    }
    
    getch();
    closegraph();
    return 0;
}