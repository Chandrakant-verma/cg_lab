#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    outtextxy(200, 200, "Hello");
    delay(3000); // 3 seconds delay

    cleardevice();
    outtextxy(200, 200, "After Delay");

    getch();
    closegraph();
    return 0;
} 