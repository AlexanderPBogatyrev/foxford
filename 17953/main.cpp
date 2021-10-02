#include <iostream>

using namespace std;

int main()
{
int x, n;
scanf("%d", &x);
n = x;
while (true) {
    if (x & n){
        printf("1");
    }else{
        printf("0");
    }
    if (n == 1){
        break;
    }
    n >>= 1;
}
    return 0;
}
