#include <iostream>

using namespace std;

int main()
{
unsigned long int x, n = 0;
scanf("%d", &x);
n += x;
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
