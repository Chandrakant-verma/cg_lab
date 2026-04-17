#include <graphics.h>
#include <conio.h>
#include <iostream.h>

int main() {
    int gd = DETECT, gm;
    int x, y, color;

    // Initialize graphics
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Input coordinates
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    // Input color (0–15)
    cout << "Enter color (0-15): ";
    cin >> color;

    // Plot the pixel
    putpixel(x, y, color);

    // Display message
    outtextxy(10, 10, "Pixel Plotted!");

    getch();
    closegraph();
    return 0;
}