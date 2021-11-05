#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[100000], b[100000], ab_numbers[100000], n = 0, ab_number[100000];
    string A, B;
    scanf("%s", &A);
    scanf("%s", &B);
    for(int i = 0;i < 100000;i++){
        a[i] = A[i];
    }
    for(int j = 0;j < 100000;j++){
        b[j] = B[j];
    }
    for(int i = 0;i < 100000;i++){
        for(int j = 0;j < 100000;j++){
            if(a[i] == b[j]){
                ab_numbers[n] = a[i];
                a[i] = -1;
                b[j] = -1;
                n++;
            }
        }
    }
    n = 0;
    for(int i = 0;i != NULL;i++){
        n+=1;
    }
    int elem1 = 0, elem2 = 0;
    for(int j = 0;j < n;j++){
        for(int i = 0;i != NULL;i++){
            if(ab_numbers[i] > elem1){
                elem1 = ab_numbers[i];
                elem2 = i;
            }
        }
        ab_number[j] = elem1;
        elem1 = 0;
        ab_numbers[elem2] = -1;
    }
    for(int i = 0; i != NULL; i++){
        printf("%d", ab_numbers[i]);
    }
    return 0;
}
