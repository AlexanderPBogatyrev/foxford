#include <iostream>

using namespace std;

int main()
{
    int n, i, sum;
    scanf("%d", &n);
    for (int i = 1;i < n; i++){
        sum += i * (i + 1);
    }
    printf("%d", sum);
    return 0;
}
