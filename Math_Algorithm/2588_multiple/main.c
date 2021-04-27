//
//  main.c
//  2588_multiple
//
//  Created, Edited on 2021/04/28.
//

#include <stdio.h>

int main(void) {

    
    int A, B;
    
    scanf("%d", &A);
    scanf("%d", &B);
    
    //백의 자리 구해서 C구하기
    int C = A * (  (B - (B/100)*100) - ((B - (B/100)*100)/10)*10);
    printf("%d\n", C);
    
    int D = A * ((B - (B/100)*100)/10);
    printf("%d\n", D);
                // B에서 B의 백의자리를 빼고 십의자리를 뺀 것 = B의 일의자리 숫자
    int E = A * (B/100);
    printf("%d\n", E);
                // B에서 B의 백의자리를 빼고 10 나눈 것 = B의 십의자리 숫자
    
    printf("%d\n", A*B);
    
    
    return 0;
}
