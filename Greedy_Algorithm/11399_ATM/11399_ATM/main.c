//
//  main.c
//  11399_ATM
//
//  Created by Yeongyun Jeong on 2021/04/22.
//

#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int pArr[N];
    //char p[N];
    for (int i=0; i<N; i++)
    {
        scanf("%d", &pArr[i]);  // 띄어쓰기로 입력하면 자동으로 구분됨
    }
    
    /*
    for (int k=0; k<N; k++){
        printf("%d ", pArr[k]);
    }
    printf("\n");
    */ //정렬되기 전의 p를 출력
    
    for (int in=0; in<N; in++){
        for (int j=0; j<N-1; j++) {
            if (pArr[j]>pArr[j+1])
            {
                int temp = pArr[j];     //왼쪽값 임시 저장
                pArr[j] = pArr[j+1];    //오른쪽값을 왼쪽으로 이동
                pArr[j+1] = temp;       //왼쪽값을 오른쪽으로 이동
            }
        }
    } // 2중for문 쓰지 않으려면 어떻게 해야할까?
    
    /*for (int k=0; k<N; k++){
        printf("%d ", pArr[k]);
    }
    printf("\n"); */ //정렬된 p를 출력
    
    int sum = 0;
    for (int f=0;f<N;f++) {
        int totTime = (N-f)*pArr[f];
        sum = sum + totTime;
    }
    
    printf("%d\n", sum);
    return 0;
}
