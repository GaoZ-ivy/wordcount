#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"Word.cpp"
#include "Line.cpp"
#include "Code.cpp"
int main(){
  int key;
  char path[500];
  do{
  printf("\t\t1. ����ͳ��\n");
  printf("\t\t2. ����ͳ��\n");
  printf("\t\t3. ����ͳ��\n");
  printf("please enter the path:\n");
  printf("\n\n\t Enter :");
  scanf("%s",&path);
  printf("please choose 1or 2or 3:\n");
  printf("\n\n\t Enter :");
  scanf("%d",&key);
  switch(key){
    case 1:
        Code(path);
    break;
    case 2:
        Word(path);
    break;
    case 3:
       Line(path);
    break;
    default:
        printf("ERROR");}
    printf("\nPress any key to the menu.\n");
    getch();
    system("CLS");
  }while(1);
  return 0;
}
