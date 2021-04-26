//
//  main.c
//  10162_microwave
//
//  Created, Edited on 2021/04/26.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    int T, A = 0, B = 0, C = 0, errorcode = -1;
    scanf("%d", &T);
    
    while (T != 0){
        
        if (T >= 300) {
            T = T - 300;
            A++;
        }
        else if (T >= 60) {
            T = T - 60;
            B++;
        }
        else if (T >= 10) {
            T = T - 10;
            C++;
        }
        else {
            printf("%d\n", errorcode);
            break;
        }
    }
    
    
    if (T==0) {
        printf("%d %d %d\n", A, B, C);
    }
    
    
    return 0;
}
