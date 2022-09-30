# include <stdio.h>
    void km(float a){
        printf("wel come to kilometre to mile conversions**\n");
        printf("************************************************ %.3f kilometre = %f mile\n", a ,a/(float) 1.609);
    }
    void inf(float b){
        printf("Wel come to inch to feet conversions**\n");
        printf("************************************************ %.2f inch = %f feet\n", b ,b/(float) 12);
    }
    void ci(float c){
        printf("Wel come to centimetre to inch  conversions**\n");
        printf("************************************************ %.2f centimetre = %f inch\n", c ,c/(float) 2.54);
    }
    void pk(float d){
        printf("Wel come to pound to kilogram conversions**\n");
        printf("************************************************ %.3f pound = %f kilogram\n", d ,d/(float) 2.205);
    }
char choice;
  int main() {
   
    while(1){
        printf("************************************************|||||||||||||||||||||||||||||\n");
    printf("you conversions pound to kilogram to choice --> 1 \n");
    printf("you conversions centimetre to inch to choice --> 2 \n");
    printf("you conversions inch to feet to choice --> 3 \n");
    printf("you conversions kilometre to mile to choice --> 4 \n");
    printf("press 'q' to quit this program\n");
    printf(" Enter your choice number:\n");
    
    scanf(" %c" , &choice);
    
        if(choice == '1'){
            float pound;
            printf("please Enter your pound\n");
            scanf("%f" , &pound);
            pk(pound);
        }
        
        else if(choice == '2'){
            float centi;
            printf("please Enter your centimetre\n");
            scanf("%f" , &centi);
            ci(centi);
        }
        
        else if(choice == '3'){
            float inch;
            printf("please Enter your inch\n");
            scanf("%f" , &inch);
            inf(inch);
        }
        else if(choice == '4'){
            float kilo;
            printf("please Enter your kilometre\n");
            scanf("%f" , &kilo);
            km(kilo);
        }
        else if(choice == 'q'){
            printf("******thank you for using my program!!*****");
            break;
        }
        else{
        printf("plese Enter a number between 1 to 5\n               thank you!!!!\n");
        }
            
    }
       
    
  return 0;
  }
  