//
//  main.c
//  11497_통나무건너뛰기
//
//  Created by Yeongyun Jeong on 2021/05/07.
//

#include <stdio.h>
#include <stdlib.h>

//구조체로 풀 수 있을 것 같아. 알고리즘 만들어놓고 주말에 해보자!

int main(int argc, const char * argv[]) {
    int set, count = 0;
    scanf("%d", &set);
    int N[set];
    int arr[set][N[set]];
    

    
    while (count < set) {
        scanf("%d", &N[count]); //N입력받고
        //scanf("%d", &arr[count][])
        
        /*for (int i = 0; i<N[count]; i++){
            scanf("%d", &arr[count][i]);
        }*/
        for (int test = 0; test<N[count]; test++)  {
            printf("%d ", arr[count][test]);
        }
                count++;
    }   // 원하는 세트만큼 입력함
    
    /*
    count = 0; //아래에서 사용하기 위해 초기화 해줌
    
    int level[set];
    while (count < set){
        level[count] = arr[count][N[set]-1] - arr[count][N[set]-3];
        count ++;
    }
        
    for (int c = 0; c<set; c++){
        printf("%d\n", level[count]);
    }
    */
    return 0;
}
