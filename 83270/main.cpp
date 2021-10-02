#include <iostream>

using namespace std;

int main()
{
    unsigned int a, n, ans;
    scanf("%d %d", &a, &n);
    ans = a << 32 - n;
    ans = ans >> 32 - n;
    printf("%d", ans);
    return 0;
}
