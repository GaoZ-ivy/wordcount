#include<stdio.h>
#include"head.h"
int Code(char path[]){
 FILE *file ;
 file= fopen(path, "r");
 int num=0;
 char code;
 if(file==NULL){
  printf("ERROR:file is not exit.");
  return 0;
 }
 else{
   while((code=fgetc(file))!=EOF){
    if(code!=' '&&code!='\n'&&code!='\t'){
        num++;
    }
   }
   fclose(file);
   printf("%d",num);
   return num;
 }
}
