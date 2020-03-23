#include<stdio.h>
#include"head.h"
int Word(){
 FILE *file ;
 file= fopen("one word.txt", "r+");
 int num=0;
 int sign;
 char word;
 if(file==NULL){
  printf("ERROR:file is not exit.");
  return 0;
 }
 else{
   while((word=fgetc(file))!=EOF){
    if((word>='a'&&word<='z')||(word>='A'&&word<='Z')||word=='_'){
        sign=1;
    }
    else if(sign){
        num++;
        sign=0;
    }
   }
   fclose(file);
   printf("%d",num+1);
   return num;
 }
}
