//
//  main.c
//  5585_change "거스름돈"
//
//  Created by Yeongyun Jeong on 2021/04/23.
//

#include <stdio.h>

int main() {
    // insert code here...
    
    //500 100 50 10 1 엔
    int money = 0;
    scanf("%d", &money);
    
    int change = 1000 - money;
    
    if ((change < 1000) * (change >= 100)){
        int num_100 = change / 100;
        if ((change < 100) * (change >= 10)){
            if (change >= 50){
                
            }
            else{
                change = change - (num_100 * 100);
            }
        }
    }
    else if ((change < 100) * (change >= 10)){
        
        
    }
    
    return 0;
}
