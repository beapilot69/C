#include <stdio.h>
int length = 0, change_num = 0;
int main(void) {
    char S[999999];
    scanf("%s", S);
    
    //배열의 크기를 계산
    for (int i = 0; i < 900000; i++){
        if ((S[i] == '1') || (S[i] =='0')) {
            // 불필요한 공백 방지. 값이 있을 때만 수행
            //printf("%c", S[i]);
            length++;
        }
    }
    
    //계산된 길이의 배열을 생성
    char S2[length];
    for (int j = 0; j < length; j++) {
        S2[j] = S[j];
    }
    
    //숫자가 바뀌는 부분 계산 : change_num번
    for (int k = 0; k < length-1; k++) {
        if (S2[k] != S2[k+1]) {
            change_num++;
        }
    }
    //printf("%d\n", change_num);
    
    //덩어리 개수 = 바뀐 부분 + 1
    int part = change_num + 1;
    
    //뒤집어야 할 덩어리 개수 = 덩어리 개수의 절반
    printf("%d\n", part/2);
    
    return 0;
}
