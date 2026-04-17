#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw a line
    line(50, 50, 200, 50);

    // Draw a rectangle
    rectangle(50, 80, 200, 150);

    // Draw a circle
    circle(300, 100, 50);
 
    // Draw an ellipse
    ellipse(300, 250, 0, 360, 80, 40);

    // Draw a polygon (triangle)
    line(100, 200, 50, 300);
    line(50, 300, 150, 300);
    line(150, 300, 100, 200);

    // Draw another polygon (square using lines)
    line(250, 200, 350, 200);
    line(350, 200, 350, 300);
    line(350, 300, 250, 300);
    line(250, 300, 250, 200);

    getch();
    closegraph();
    return 0;
}