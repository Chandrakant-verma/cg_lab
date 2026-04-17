#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

// Function to draw rectangle
void draw(int x[], int y[]) {
    int i;
    for(i = 0; i < 4; i++) {
        line(x[i], y[i], x[(i+1)%4], y[(i+1)%4]);
    }
}

int main() {
    int gd = DETECT, gm;
    int i;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Original rectangle
    int x[4] = {100, 200, 200, 100};
    int y[4] = {100, 100, 200, 200};

    int xt[4], yt[4];
    int xr[4], yr[4];
    int xs[4], ys[4];
    int xf[4], yf[4];

    // ================= ORIGINAL =================
    setcolor(WHITE);
    draw(x, y);
    outtextxy(100, 80, "Original");
    getch();
    cleardevice();

    // ================= TRANSLATION =================
    int tx = 100, ty = 50;

    for(i = 0; i < 4; i++) {
        xt[i] = x[i] + tx;
        yt[i] = y[i] + ty;
    }

    setcolor(GREEN);
    draw(xt, yt);
    outtextxy(100, 80, "Translation");
    getch();
    cleardevice();

    // ================= SCALING =================
    float sx = 1.5, sy = 1.5;

    for(i = 0; i < 4; i++) {
        xt[i] = x[i] * sx;
        yt[i] = y[i] * sy;
    }

    setcolor(YELLOW);
    draw(xt, yt);
    outtextxy(100, 80, "Scaling");
    getch();
    cleardevice();

    // ================= ROTATION =================
    float angle = 45 * 3.1416 / 180;

    for(i = 0; i < 4; i++) {
        xr[i] = x[i]*cos(angle) - y[i]*sin(angle);
        yr[i] = x[i]*sin(angle) + y[i]*cos(angle);
    }

    setcolor(CYAN);
    draw(xr, yr);
    outtextxy(100, 80, "Rotation");
    getch();
    cleardevice();

    // ================= SHEARING =================
    float shx = 1;

    for(i = 0; i < 4; i++) {
        xs[i] = x[i] + shx * y[i];
        ys[i] = y[i];
    }

    setcolor(MAGENTA);
    draw(xs, ys);
    outtextxy(100, 80, "Shearing");
    getch();
    cleardevice();

    // ================= REFLECTION =================
    for(i = 0; i < 4; i++) {
        xf[i] = x[i];
        yf[i] = 480 - y[i];   // reflection about X-axis
    }

    setcolor(RED);
    draw(xf, yf);
    outtextxy(100, 80, "Reflection");
    getch();

    closegraph();
    return 0;
} 