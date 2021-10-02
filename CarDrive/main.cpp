#include <cstdio>

using namespace std;

int main()
{
    int n, m, d;
    scanf("%d", &n);
    scanf("%d", &m);
    d = m / n + (m % n);
    printf("%d\n", d);
}
