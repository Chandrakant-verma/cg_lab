#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

// Draw cube using 8 points
void drawCube(int x[], int y[]) {
    // Front face
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[3], y[3]);
    line(x[3], y[3], x[0], y[0]);

    // Back face
    line(x[4], y[4], x[5], y[5]);
    line(x[5], y[5], x[6], y[6]);
    line(x[6], y[6], x[7], y[7]);
    line(x[7], y[7], x[4], y[4]);

    // Connections
    line(x[0], y[0], x[4], y[4]);
    line(x[1], y[1], x[5], y[5]);
    line(x[2], y[2], x[6], y[6]);
    line(x[3], y[3], x[7], y[7]);
}

int main() {
    int gd = DETECT, gm;
    int i;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Original cube points (2D projection)
    int x[8] = {100,200,200,100, 130,230,230,130};
    int y[8] = {100,100,200,200, 130,130,230,230};

    int xt[8], yt[8];

    // ================= ORIGINAL =================
    setcolor(WHITE);
    drawCube(x, y);
    outtextxy(100, 80, "Original Cube");
    getch();
    cleardevice();

    // ================= TRANSLATION =================
    int tx = 100, ty = 50;

    for(i=0;i<8;i++) {
        xt[i] = x[i] + tx;
        yt[i] = y[i] + ty;
    }

    setcolor(GREEN);
    drawCube(xt, yt);
    outtextxy(100, 80, "Translation");
    getch();
    cleardevice();

    // ================= SCALING =================
    float sx = 1.5, sy = 1.5;

    for(i=0;i<8;i++) {
        xt[i] = x[i] * sx;
        yt[i] = y[i] * sy;
    }

    setcolor(YELLOW);
    drawCube(xt, yt);
    outtextxy(100, 80, "Scaling");
    getch();
    cleardevice();

    // ================= ROTATION =================
    float angle = 30 * 3.1416 / 180;

    for(i=0;i<8;i++) {
        xt[i] = x[i]*cos(angle) - y[i]*sin(angle);
        yt[i] = x[i]*sin(angle) + y[i]*cos(angle);
    }

    setcolor(CYAN);
    drawCube(xt, yt);
    outtextxy(100, 80, "Rotation");
    getch();

    closegraph();
    return 0;
} 