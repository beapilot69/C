//
//  main.c
//  11047_CoinToZero
//
//  Created on 2021/04/25.
//  Edited on 2021/04/26

#include <stdio.h>

int main(void) {
    
    int N, K, dan = 0, coin = 0;
    scanf("%d %d", &N, &K);
    
    int cost[N];    // 크기가 N인 리스트 생성. 0번지 ~ N-1번지
    for (int j = N; j>0; j--){
        scanf("%d", &cost[j-1]);    //0~N-1번지까지 리스트에 입력
    }
    
    while (K != 0){
        if (cost[dan] <= K){
            K = K - cost[dan];
            coin++;
        }
        else {
            dan++;
        }
    }
    printf("%d\n", coin);
    return 0;
}
