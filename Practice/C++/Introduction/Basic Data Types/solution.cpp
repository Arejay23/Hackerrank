#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf ( "%d %ld %c %f %lf", &a,&b,&c,&d,&e);
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    printf("%.3f\n", d);
    printf("%.9lf", e);

    return 0;
}
