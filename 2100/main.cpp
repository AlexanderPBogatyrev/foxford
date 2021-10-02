#include <iostream>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main()
{
    int a, b, ans1, ans2, bigger, smaller, sum;
    scanf("%d %d", &a, &b);
    if (a - b >= 0){
        bigger = a;
        smaller = b;
        ans1 = bigger / 2;
        ans2 = bigger % 2;
    }
    else{
        bigger = b;
        smaller = a;
        ans2 = bigger / 2;
        ans1 = bigger % 2;
    }
    sum = bigger + smaller;
    if (sum % 3 == 0){
        printf("%d %d", ans1, ans2);
    }
    else{
        printf("%d", -1);
    }
    return 0;
}
