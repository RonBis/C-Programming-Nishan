#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct Student
  {
    char StudentName[50];
    int rollNum;
    float CGPA;
    char favSinger[50];

  }s1,s2;

  int main()
  {
    // char favSinger[50];
    printf("%d\n", sizeof(s1));

   strcpy(s1.StudentName, "Nishan Das");
   s1.rollNum = 19;
   s1.CGPA = 8.5;
  strcpy(s1.favSinger, "Arijit Singh");
   
   strcpy(s2.StudentName, "Subham Roy");
   s2.rollNum = 20;
   s2.CGPA = 7.58;
  strcpy(s2.favSinger, "Shreya Ghosal");

   printf("STUDENT'S NAME IS: %s\n", s1.StudentName);
   printf("ROLL NUMBER: %d\n", s1.rollNum);
   printf("CGPA: %.2f\n", s1.CGPA);
  printf("FAVOURITE SINGER: %s\n", s1.favSinger);

   printf("STUDENT'S NAME IS: %s\n", s2.StudentName);
   printf("ROLL NUMBER: %d\n", s2.rollNum);
   printf("CGPA: %.2f\n", s2.CGPA);
   printf("FAVOURITE SINGER: %s\n",s2.favSinger);
   
    return 0;
  }

 
