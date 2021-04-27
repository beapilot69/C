//
//  main.c
//  2839_sugarDelivery
//
//  Created, Edited on 2021/04/26.
//

#include <stdio.h>

int main(void) {
    int N, cnt = 0;

    scanf("%d", &N);
    
    while (N>0) {
        
        if (N % 5 == 0) {       // 5로 나눌 수 있으면 5 빼고 카운트 업
            N -= 5;
            cnt++;
        }
        else if (N % 3 == 0) {  // 3으로 나눌 수 있으면 3 빼고 카운트 업
            N -= 3;
            cnt++;
        }
        else if (N > 5) {       // 5로 나눌 수 없고 3으로도 나눌 수 없고 5보다 크면 5빼고 카운트 업
            N -= 5;
            cnt++;
        }
        else {                  // 3,5로 못나누고 5보다 작으면 에러코드 출력
            cnt = -1;
            break;
        }
    }
    printf("%d", cnt);
        
    return 0;
}
