#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x, y, color;
    
    // Initialize graphics
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    
    // Fixed coordinates (no user input)
    x = 200;      // X coordinate
    y = 150;      // Y coordinate
    
    // Fixed color (0-15)
    color = WHITE;  // or use numbers like 4 for red, 14 for yellow, etc.
     
    // Plot the pixel
    putpixel(x, y, color);
    
    // Display message
    outtextxy(10, 10, "Pixel Plotted!");
    
    getch();
    closegraph();
    return 0;
}