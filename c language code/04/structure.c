# include <stdio.h>
# include <string.h>
 struct  student
 {
    int id;
    float marks;
    char name[65];
 }s1, s2, s3;
 
  int main() {
    // struct student s1, s2, s3;
    s1.id = 4654646;
    s2.id = 5464647;
    s3.id = 8798659;
    s1.marks = 465.64;
    s2.marks = 979.54;
    s3.marks = 921.95;
    strcpy(s1.name , "alkesh");
    strcpy(s2.name , "ronak");
    strcpy(s3.name , "hardik");
    printf("The marks of %s is %.2f and that student id is %d\n", s1.name,s1.marks,s1.id);
    printf("The marks of %s is %.2f and that student id is %d\n", s2.name,s2.marks,s2.id);
    printf("The marks of %s is %.2f and that student id is %d\n", s3.name,s3.marks,s3.id);
  return 0;
  }