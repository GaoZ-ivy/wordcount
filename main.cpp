#include<conio.h>
#include "Word.cpp"
#include "Line.cpp"
#include "Code.cpp"
int main(){
  int key;
  do{
  printf("\t\t1. 字数统计\n");
  printf("\t\t2. 词数统计\n");
  printf("\t\t3. 行数统计\n");
  printf("\n\n\t Enter :");
  scanf("%d",&key);
  switch(key){
    case 1:
        Code();
    break;
    case 2:
        Word();
    break;
    case 3:
       Line();
    break;
    default:
        printf("ERROR");}
    printf("\nPress any key to the menu.\n");
    getch();
    system("CLS");
  }while(1);
  return 0;
}
