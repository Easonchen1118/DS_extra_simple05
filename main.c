#include <stdio.h>
//十進制轉二進制
int main(){
    int num;
    int ans[8] = {0};
    int negative = 0;//if negative set 1
    scanf("%d", &num);
    if (num < 0) {
        num *= -1;
        negative = 1;
    }
    if (num >= 128) {
        ans[0] = 1;
        num -= 128;
    }
    if (num >= 64) {
        ans[1] = 1;
        num -= 64;
    }
    if (num >= 32) {
        ans[2] = 1;
        num -= 32;
    }
    if (num >= 16) {
        ans[3] = 1;
        num -= 16;
    }
    if (num >= 8) {
        ans[4] = 1;
        num -= 8;
    }
    if (num >= 4) {
        ans[5] = 1;
        num -= 4;
    }
    if (num >= 2) {
        ans[6] = 1;
        num -= 2;
    }
    if (num >= 1) {
        ans[7] = 1;
        num -= 1;
    }
    // if negative 0 -> 1 && 1 -> 0 and add 1
    if (negative == 1){
        for (int i=0; i<8; i++) {
            if (ans[i] == 0) {
                ans[i] = 1;
            }
            else {
                ans[i] = 0;
            }
        }
        //二補數
        ans[7] += 1;
        for (int i=7; i>0; i--) {
            if (ans[i] > 1) {
                ans[i] = 0;
                ans[i-1] += 1;
            }
        }
    }
    //print ans
    for (int i=0; i<8; i++) {
        printf("%d", ans[i]);
    }
    printf("\n");
    
    return 0;
}
