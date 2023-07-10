#define _CRT_SECURE_NO_WARNINGS.
#include <stdio.h>

main(){
    int num[6], a, b, hold;
    int i;

    for(i=1; i<=6; i++){    
        printf("enter number (%d): ", i);
        scanf("%d", &num[i-1]);
    }
    
    for(a=0; a<6; a++){
        for(b=a+1; b<6; b++){
            if (num[b]<num[a]){
                hold = num[a];
                num[a] = num[b];
                num[b] = hold;
            }          
        }
    }

    printf("Sorted Number: ");
    for(i=0; i<6; i++){
        printf("%d ", num[i]);
    }
}
