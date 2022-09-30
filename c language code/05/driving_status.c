# include <stdio.h>
typedef struct driving_status
{
  char name[20];
  char DrivingLN[30];
  char route[25];
  char Kms[23];
}ds;
  ds d1,d2,d3;

void input(){
  
  printf("Enter frist driver's Name: \n");
  gets(d1.name);
  printf("Enter frist driver's Driving licence number: \n");
  gets(d1.DrivingLN);
  printf("Enter frist driver's route: \n");
  gets(d1.route);
  printf("Enter frist driver's kilometer: \n");
  gets(d1.Kms);

  printf("Enter second driver's Name: \n");
  gets(d2.name);
  printf("Enter second driver's Driving licence number: \n");
  gets(d2.DrivingLN);
  printf("Enter second driver's route: \n");
  gets(d2.route);
  printf("Enter second driver's kilometer: \n");
  gets(d2.Kms);
  
  printf("Enter thrid driver's Name: \n");
  gets(d3.name);
  printf("Enter thrid driver's Driving licence number: \n");
  gets(d3.DrivingLN);
  printf("Enter thrid driver's route: \n");
  gets(d3.route);
  printf("Enter thrid driver's kilometer: \n");
  gets(d3.Kms);
  
}

void output(){
  printf("\n\n");
  printf("frist driver's name is %s\n",d1.name);
  printf("frist driver's driving licence number is %s\n",d1.DrivingLN);
  printf("frist driver's route is %s\n",d1.route);
  printf("frist driver's kilometer is %s\n",d1.Kms);

  printf("\n");
  printf("second driver's name is %s\n",d2.name);
  printf("second driver's driving licence number is %s\n",d2.DrivingLN);
  printf("second driver's route is %s\n",d2.route);
  printf("second driver's kilometer is %s\n",d2.Kms);

  printf("\n");
  printf("thrid driver's name is %s\n",d3.name);
  printf("thrid driver's driving licence number is %s\n",d3.DrivingLN);
  printf("thrid driver's route is %s\n",d3.route);
  printf("thrid driver's kilometer is %s\n",d3.Kms);
}
  

  int main() {
      input();
      output();
  return 0;
  }