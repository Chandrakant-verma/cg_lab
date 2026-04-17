#include <graphics.h>
#include <conio.h>
#include <string.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Default font
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(50, 50, "DEFAULT FONT");

    // Triplex font (large stylish font)
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
    outtextxy(50, 100, "TRIPLEX FONT");

    // Small font
    settextstyle(SMALL_FONT, HORIZ_DIR, 1);
    outtextxy(50, 180, "SMALL FONT");

    // Sans Serif font
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtextxy(50, 220, "SANS SERIF FONT");

    // Gothic font
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 2);
    outtextxy(50, 260, "GOTHIC FONT");

    // Vertical text
    settextstyle(DEFAULT_FONT, VERT_DIR, 2);
    outtextxy(400, 100, "VERTICAL");

    // Different sizes
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
    outtextxy(50, 320, "SIZE 1");

    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
    outtextxy(50, 350, "SIZE 4");

    getch();
    closegraph();
    return 0;
}