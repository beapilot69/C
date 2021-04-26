//
//  main.c
//  2720_세탁소사장동혁
//
//  Created, Edited on 2021/04/26.
//

#include <stdio.h>
int main(void) {
    int T, qt=0,dm=0,nk=0,pn=0;        // T = test횟수
    scanf("%d", &T);
    
    // T번의 테스트set을 입력(단위 : 센트)
    int trial[T];
    for (int i = 0; i < T; i++) {
        scanf("%d",&trial[i]);
    }
    
    int cnt = 0;
    // 각 set에 대해 쿼터, 다임, 니켈, 페니 개수를 출력
    
    while (1) { //입력 값 세 개를 하나씩 처리
        for (int t = 0; t < 100; t++){
            if (trial[cnt] >= 25){
                trial[cnt] = trial[cnt] - 25;
                qt++;
            }
            else if (trial[cnt] >= 10){
                trial[cnt] = trial[cnt] - 10;
                dm++;
            }
            else if (trial[cnt] >= 5){
                trial[cnt] = trial[cnt] - 5;
                nk++;
            }
            else if (trial[cnt] >= 1){
                trial[cnt] = trial[cnt] - 1;
                pn++;
            }
            else if (trial[cnt] == 0)
                break;
        }
        printf("%d %d %d %d\n", qt, dm, nk, pn);
        cnt++;
        
        qt=0;dm=0;nk=0;pn=0; // 카운터 초기화
        
        if (cnt == T)
            break;
    }
}
