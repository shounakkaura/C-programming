#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("ENTER NUMBER TO BE CHECKED: ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n % i == 0){
            sum+=i;
        }
        
    }
    if(sum == n){
        printf("YES ITS A PERFECT NUMBER");
    }
    else{printf("ITS NOT A PERFECT NUMBER");
    }
    return 0;
}