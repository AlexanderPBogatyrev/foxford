#include <iostream>

using namespace std;
// h1 - from; h2 - to
int timely(int h1, int m1, int s1, int h2, int m2, int s2){
    int result;
    if(h1 == h2 && m1 == m2 && s1 == s2){
        return 0;
    }
    if(h2 < h1){
        h1 = h1 - h2;
        h2 = 24;
    }
    if(m2 < m1){
        h2 += 23;
        m1 = m1 - m2;
        m2 = 60;
    }
    if(s2 < s1){
        h2 += 24;
        s1 = s1 + s2;
        s2 = s2 - s1;
        s1 = s2 - s1;
    }
    result =  h2 - h1 + m2 - m1 + s2 - s1 + 4;
    return result;
}
int main()
{
//Test only
//    int h1 = 1, m1 = 0, s1 = 0;
//    int h2 = 0, m2 = 0, s2 = 0;
    printf("Expected:0 actual:%d\n", timely(23, 59, 59, 23, 59, 59));
    printf("Expected:5 actual:%d\n", timely(0, 0, 0, 1, 0, 0));
    printf("Expected:27 actual:%d\n", timely(1, 0, 0, 0, 0, 0));

    printf("Expected:86 actual:%d\n", timely(0, 1, 0, 0, 0, 0));
    printf("Expected:5 actual:%d\n", timely(0, 0, 0, 0, 1, 0));

    printf("Expected:29 actual:%d\n", timely(0, 0, 1, 0, 0, 0));
    printf("Expected:5 actual:%d\n", timely(0, 0, 0, 0, 0, 1));
return 0;
}
