#include<stdio.h>
#include<stdlib.h>
#include"head.h"
//����ͳ��
int Line(char path[]){
 FILE *file ;
 file=fopen(path, "r");//���ļ�
 int num=0;
 char line;
 char *s=(char*)malloc(200*sizeof(char));
 if(file==NULL){
  printf("ERROR:file is not exit.");
  return 0;
 }
 else{
   for(;fgets(s,500,file)!=NULL;num++);
    free(s);
    fclose(file);
    printf("%d",num);
    return num;
 }
}
