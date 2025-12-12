#include <stdio.h>
int main(){
    int num;
    int temp;
    int i=1;
    while(1){
        scanf("%d", &num);
        if(num==0)
            break;
        
        temp=num;
        printf("Case %d: %d\n", i, temp);
        i++;
        
    }
    return 0;
}
