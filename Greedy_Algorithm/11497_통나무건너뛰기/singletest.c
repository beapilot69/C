//
//  main.c
//  11497_통나무건너뛰기
//
//  Created on 2021/05/10.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int N;    // absl에는 인접한 두 요소의 차이를 저장하는 것임
    scanf("%d", &N);    // 테스트셋 개수 입력
    
    int arr[N], absl[N];
    
    // 개수만큼 입력받아 배열에 저장
    for (int i = 0; i<N; i++){
        scanf("%d", &arr[i]);
        
        //입력받음과 동시에 인접한 요소의 차의 절대값을 저장
        /*if (i>0)
        {
            absl[i-1] = abs(arr[i-1] - arr[i]);
        }*/
    }
    //absl[N-1] = abs(arr[0]-arr[N-1]);
    
    // 입력받은 숫자배열을 이용해 가장 작은 난이도를 구하려면 가장 큰 수에서 3번째로 큰 수를 빼면 된다.
    // sort
    int temp = 0;
    for (int a = 0; a < N; a++){
        for (int k = 0; k < N-1; k++) {
            if (arr[k] > arr[k+1]){ //두 요소 순서바꾸기
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    /*for (int i = 0; i<N;i++){
        printf("%d", arr[i]);
    }*/
    int level;
    level = arr[N-1] - arr[N-3];
    printf("%d", level);
    
    // 바꾸지 않은 상태에서 난이도 구하는 것
    /*
    int max = absl[0];
    for (int j = 1; j<N; j++) {
        // absl에서 가장 큰 값 구해야함
        if (absl[j] > max){
            max = absl[j];
        }
    }
    printf("%d\n", max);
     */
    
    return 0;
}
