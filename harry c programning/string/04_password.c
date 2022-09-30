

// thia programmer is not work  
// why not work, i can't know!
// plase soul this program
 # include <stdio.h>
 
   int main() {
    char *mypassword = "brijesh";
    char password[8];
  do{
   printf("Enter your password\n");
    gets(password);
    if(password ==mypassword){
        printf("your password is right\n ");
    }else{
        printf("your password is worong \n plase try again !!\n");
    }
  }while(mypassword != password );
   return 0;
   }