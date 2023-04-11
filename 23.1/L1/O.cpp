/*
Website: UVa Online Judge
Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1372
*/
#include <bits/stdc++.h>

using namespace std;

const double b[] = { 0.319381530, -0.356563782, 1.781477937, -1.821255978, 1.330274429 };
const double p = 0.2316419;
double value, mean, dev;
int n, q, cnt = 0;

int main() {
    while (scanf("%d", &n) != EOF) {
        if (cnt > 0) printf("\n");
        printf("Data Set #%d\n", cnt + 1);

        double sm = 0, smt = 0;
        for (int i = 0; i < n; i++) {
            cin >> value;
            sm += value;
            smt += value * value;
        }
        mean = sm / n;
        dev = sqrt((smt - 2 * sm * mean + mean * mean * n) / (n - 1));
        printf("Mean = %.4lf\n", mean);
        printf("Standard Deviation = %.4lf\n", dev);

        cin >> q;
        for (int i = 0; i < q; i++) {
            cin >> value;
            double z = (value - mean) / dev;
            double fz = exp(-(z * z) / 2) * (1.0 / sqrt(2 * M_PI));
            double t = 1 / (1 + p * fabs(z));
            double qz = fz * (b[0] * t + b[1] * t * t + b[2] * t * t * t + b[3] * t * t * t * t + b[4] * t * t * t * t * t);
            printf("P(z) = %.4lf, Q(z) = %.4lf, T = %.4lf\n", 1.0 - qz, qz, qz * n);
        }
        cnt++;
    }

    return 0;
}