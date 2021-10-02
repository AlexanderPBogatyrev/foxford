#include <iostream>

using namespace std;

int main() {
    long long n, i = 1, j = 1, c = 1, regularity = 0;
//    scanf("%lld", &n);
    n = 10000000000000000;
    for (long long regularity = 2; c < n; regularity += 2) {
        if(((c + regularity) > n) && ((c - i <= n))) {
            break;
        }
        c += regularity;
        i++;
        j++;
    }
    if(n - i * j >= 1){
        c += i + j;
        i++;
        j++;
    } else {
        c += 0;
    }
    if(i % 2 == 0 && c - n > 0){
        i -= c - n;
    }
    else if(j % 2 == 0 && c - n < 0){
        j -= n - c;
    }
    else if(i % 2 != 0 && c - n > 0){
        j -= c - n;
    }
    else if(j % 2 != 0 && c - n < 0){
        i -= n - c;
    }
    printf("%lld %lld", i, j);
    return 0;
}
