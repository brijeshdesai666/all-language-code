# include <stdio.h>
# include <stdlib.h>
# include <time.h>

  int main() {
        int number , guess , anumber = 1;
        srand(time(0));
        number = rand()%100 + 1;
        
            
        // printf("the random number is %d\n " , number);
          
           do{  
            printf("guess a number of between 1 to 100\n");
            scanf("%d" , &guess);
            if(guess > number){
                printf("plase down your number\n");
            } else if(guess < number){
             printf("plase up your number\n");
            } else{
             printf("**you win!** \n");
                
                printf("your guess is %d was right\n" , guess);
               
                printf("you win this game only %d attemt!! \n *****congrets !!!****\n" , anumber); 
            } anumber++;   
           }
            while(guess != number);
            getchar();
  return 0;
  }