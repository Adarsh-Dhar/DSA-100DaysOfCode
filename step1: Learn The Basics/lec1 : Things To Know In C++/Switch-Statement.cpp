#include <vector>
#include <cmath>
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
    switch (ch) {
        case 1: {
            double r = a[0];
            double area = M_PI * r * r;
            return area;
        }
        case 2: {
            double area = a[0] * a[1];
            return area;
        }
        default:
            return -1; // Invalid choice
    }
}
