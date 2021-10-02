#include <iostream>

using namespace std;

int main()
{
    unsigned int m, n, first_number, second_number, ans;
    scanf("%d %d", &n, &m);
    first_number = 1 << n;
    second_number = 1 << m;
    ans = first_number += second_number;
    printf("%d", ans);
    return 0;
}
