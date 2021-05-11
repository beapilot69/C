//
//  main.c
//  11497_통나무건너뛰기
//
//  Created on 2021/05/07.
//  Edited on 2021/05/11.

#include <stdio.h>
#include <stdlib.h>

//구조체로 풀 수 있을 것 같아. 알고리즘 만들어놓고 주말에 해보자!
// -> 구조체 사용 못했음. 행은 무한히 만들 수 있으나, 열 개수를 정의하는 게 제한적이어서. 해결법이 있을지 알아보기

int main(int argc, const char * argv[]) {
    
    int set;
    scanf("%d", &set); //set 입력받음
    
    int N[set];
    int result[set];    //입력과 동시에 수행된 연산의 결과값 저장할 배열을 생성
    
    for (int i = 0; i<set; i++){
        scanf("%d", &N[i]);    //N 입력 받음
        int arr[N[i]];
        for (int test = 0; test<N[i]; test++){
            scanf("%d", &arr[test]);
        }   // 배열 생성
        int temp = 0;
        for (int a = 0; a < N[i]; a++){
            for (int k = 0; k < N[i]-1; k++) {
                if (arr[k] > arr[k+1]){ //두 요소 순서바꾸기
                    temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                }
            }
        }
        result[i] = arr[N[i]-1] - arr[N[i]-3];
    }
    
    for (int j = 0; j<set; j++){
        printf("%d\n", result[j]);
    }
    
    return 0;
}
