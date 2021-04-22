//
//  main.c
//  11399_ATM
//
//  Created by Yeongyun Jeong on 2021/04/22.
//

#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>

/*int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}*/

typedef struct list {
    int size;
    int *array;
}list;

int main()
{
    int N;
    scanf("%d", &N);
    
    int pArr[N];
    //char p[N];
    for (int i=0; i<N; i++)
    {
        scanf("%d", &pArr[i]);
                                //이렇게 하면 여러 줄에 걸쳐서 입력을 해야 되는데.. 한 줄로 입려받을 순 없나?
                                //https://shacoding.com/2019/08/01/c언어-수-여러개를-입력해서-수-개수만큼-배열에-저장/
                                    //참고하기. 띄어쓰기로 구분하여 정수형 리스트에 저장하기.
    }
    
    for (int j=0; j<N; j++) {
        if (pArr[j]>pArr[j+1])
        {
            int temp = pArr[j];
            pArr[j] = pArr[j+1];
            pArr[j+1] = temp;       //두 개 순서 뒤집음
        }
    }
     
    for (int k=0; k<N; k++){
        printf("%d", pArr[k]);
    }
    return 0;
}
