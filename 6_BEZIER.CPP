#include <graphics.h>
#include <conio.h>
#include <math.h>

void bezier(int x[4], int y[4]) {
    float t;
    for(t=0; t<=1; t+=0.001) {
        float xt = pow(1-t,3)*x[0] +
                   3*t*pow(1-t,2)*x[1] +
                   3*pow(t,2)*(1-t)*x[2] +
                   pow(t,3)*x[3];

        float yt = pow(1-t,3)*y[0] +
                   3*t*pow(1-t,2)*y[1] +
                   3*pow(t,2)*(1-t)*y[2] +
                   pow(t,3)*y[3];

        putpixel(xt, yt, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int x[4] = {100, 150, 250, 300};
    int y[4] = {300, 100, 100, 300};

    bezier(x, y);

    getch();
    closegraph();
    return 0;
}