#include<stdio.h>
#include"head.h"
//词数统计
int Word(char path[]){
 FILE *file ;
 file= fopen(path, "r");//打开文件
 int num=0;
 int sign;//定义状态量
 char word;
 if(file==NULL){
  printf("ERROR:file is not exit.");
  return 0;
 }
 else{
   while((word=fgetc(file))!=EOF){
    if((word>='a'&&word<='z')||(word>='A'&&word<='Z')||word=='_'){//当字符为字母，即当前单词未结束
        sign=1;
    }
    else if(sign){//当字符不为字母时
        num++;
        sign=0;
    }
   }
   fclose(file);
   printf("%d",num+1);
   return num;
 }
}
