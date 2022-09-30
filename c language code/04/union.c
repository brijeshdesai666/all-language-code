# include <stdio.h>
# include <string.h>

    union student
    {
        int id;
        int marks;
        char fav_char;
        char name[10];
    }s1;
    
  int main() {
     s1.id = 5435;
     s1.marks = 53;
     strcpy(s1.name , "brijesh");
     s1.fav_char = 'A';

     printf("student id is : %d\n", s1.id );   // garbaze value
     printf("student marks is : %d\n", s1.marks);   // garbaze value
     printf("student fav_char is : %c\n", s1.fav_char);   
     printf("student name is : %s\n", s1.name);   // garbaze value
  return 0;
  }