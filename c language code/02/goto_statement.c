# include <stdio.h>

int main() {
    int num;
    label:
    for(int i = 0 ; i<8;i++){
        printf("%d\n",i);

            for(int j = 0; j<8;j++){

                printf("Enter 0 to exit\n");
                scanf("%d",&num);

                if(num == 0){
                    goto end; // exit all loops 
                }
            }
    }
    end:
    // goto label;
return 0;
}