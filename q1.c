#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int main() {
    int a , b;
    printf("ENTER THREE NUM: ");
    scanf("%d%d", &a,&b);
    // printf("%d", a/b);
    // if ((a+b >0 && (a+b)%2 == 0) || (b+c >0 && (b+c)%2 == 0) || (c+a > 0 && (c+a)%2 == 0))
    // {
    //      printf("YES");
    // }      
    // else
    // {
    //     printf("NO");
    // }
    printf("%d", a%b);
    return 0;
}