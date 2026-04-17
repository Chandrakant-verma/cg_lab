#include <iostream.h>
#include <math.h>

void main() {
    float x, y;
    cout << "Enter point (x y): ";
    cin >> x >> y;

    // Translation
    cout << "\nTranslation: (" << x+5 << "," << y+3 << ")";

    // Scaling
    cout << "\nScaling: (" << x*2 << "," << y*2 << ")";

    // Rotation
    float angle = 45 * 3.14 / 180;
    float xr = x*cos(angle) - y*sin(angle);
    float yr = x*sin(angle) + y*cos(angle);
    cout << "\nRotation: (" << xr << "," << yr << ")";

    // Shearing
    cout << "\nShearing: (" << x + y << "," << y << ")";

    // Reflection
    cout << "\nReflection (X-axis): (" << x << "," << -y << ")";
}