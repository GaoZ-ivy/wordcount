#include<stdio.h>
#include"head.h"
//����ͳ��
int Word(char path[]){
 FILE *file ;
 file= fopen(path, "r");//���ļ�
 int num=0;
 int sign;//����״̬��
 char word;
 if(file==NULL){
  printf("ERROR:file is not exit.");
  return 0;
 }
 else{
   while((word=fgetc(file))!=EOF){
    if((word>='a'&&word<='z')||(word>='A'&&word<='Z')||word=='_'){//���ַ�Ϊ��ĸ������ǰ����δ����
        sign=1;
    }
    else if(sign){//���ַ���Ϊ��ĸʱ
        num++;
        sign=0;
    }
   }
   fclose(file);
   printf("%d",num+1);
   return num;
 }
}
