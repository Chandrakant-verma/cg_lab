#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    
    int x1, y1, x2, y2;
    int dx, dy, p, x, y;
    
    // Fixed coordinates (no user input)
    x1 = 100; y1 = 100;  // Starting point
    x2 = 300; y2 = 200;  // Ending point
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    x = x1;
    y = y1;
    
    // Initial decision parameter
    p = 2 * dy - dx;
    
    // Plot first point
    putpixel(x, y, WHITE);
    
    // Loop for drawing line
    while (x < x2) {
        x = x + 1;
        
        if (p < 0) {
            p = p + 2 * dy;
        } else {
            y = y + 1;
            p = p + 2 * (dy - dx);
        }
        
        putpixel(x, y, WHITE);
    }
    
    getch();
    closegraph();
    return 0;
}