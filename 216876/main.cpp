#include <iostream>

using namespace std;

int main()
{
    int a, b, place1 = 0, place2 = 0, place3 = 0, signal = 0, max = 0, place = 0, t = 0, ans = -1;
    scanf("%d%d", &a, &b);
    int c[100000], d[100000], e[100000], f[100000];
    for(int i = 0; a >= 1; i++){
        c[i] = a % 10;
        a /= 10;
        place1++;
    }
    for(int j = 0; b >= 1; j++){
        d[j] = b % 10;
        b /= 10;
        place2++;
    }
    for(int l = 0; l < place1; l++){
        for(int m = 0; m < place2; m++){
            if(c[l] == d[m]){
                e[l] = c[l];
                c[l] = -1;
                d[m] = -2;
                signal++;
                place3++;
            }
        }
    }
    if (signal > 0){
        for(int s = 0; s < place3; s++){
            for(int w  = 0; w < place3; w++){
                if(e[w] > max){
                    max = e[w];
                    f[place] = max;
                    t = w;
                }
            }
            place++;
            max = 0;
            e[t] = -1;
        }
    for (int k = 0; k < place1-2; k++){
        printf("%d", f[k]);
    }
    }else{
        printf("%d", -1);
    }
    return 0;
}
