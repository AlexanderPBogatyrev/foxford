#include <iostream>

using namespace std;

int main()
{
    unsigned int x, counter;
    scanf("%d", &x);
    for(unsigned int i = 0; x >= 1; i++){
        if(x % 2 == 1){
            counter++;
        }
        x /= 2;
    }
    printf("%d", counter);
    return 0;
}
