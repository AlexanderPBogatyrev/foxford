#include <iostream>
#include <iomanip>

//----------------

//void transpose(int matrix[n][n]) //либо int matrix[][5], либо int (*matrix)[5]
//{
//    int t;
//    for(int i = 0; i < n; ++i)
//    {
//        for(int j = i; j < n; ++j)
//        {
//            t = matrix[i][j];
//            matrix[i][j] = matrix[j][i];
//            matrix[j][i] = t;
//        }
//    }
//}

//----------------

int main() {
    int n = 5;
//    scanf("%d", &n);
    int m[n][n];
    int k[n][n];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j){
            m[i][j] = 0;
            k[i][j] = 0;
        }
    }
    m[4-1][0]  = 1;
    m[2-1][1]  = 1;
    m[3-1][2]  = 1;
    m[5-1][3]  = 1;
    m[1-1][4]  = 1;

    // вывод
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            printf("%d\t", m[j][i]);
        }
        printf("\n");

    }
//    Транспонирование
    for(int i = 0; i < n; ++i){
        for(int j  = 0; j < n; ++j){
        m[i][j] = k[n+1-i][i];
        }
    }



    printf("\n");
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            printf("%d\t", k[j][i]);

        }
        printf("\n");

    }
    return 0;
}
