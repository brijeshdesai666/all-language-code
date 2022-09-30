 # include <stdio.h>
 # include <string.h>
    typedef struct account{
        int year;
        int account_number;
        char bd[52];
        int passcode;
        char holder_name[95];
        
    }account;
    // void display(account d) {
    //     printf("your account was opend years is %d\n" , d);
    //     printf("your account was opend years is %d\n" , d);
    // } 
   int main() {
    account a1 ;
    account *ptr;
    ptr = &a1;
    ptr->year = 2023; 
//    a1.year = 2023; 
    ptr->account_number = 8956266; 
    ptr->passcode = 1359; 
    strcpy(a1.bd , "21/02/2001");
    strcpy(a1.holder_name,"pansheriya ronak alkeshbhai");

     printf("this account holder name is %s\n" , a1.holder_name);
     printf("this account open year is  %d\n" , a1.year);
     printf("account oner brithdate is  %s\n" ,a1.bd);     
     printf("this account number is %d\n" ,a1.account_number );
     printf("this account passcode is %d\n" ,a1.passcode );
   return 0;
   }