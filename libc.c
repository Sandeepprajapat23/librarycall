#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int ch;
        FILE  *fp1;
        FILE  *fp2;
        fp1=fopen("Src.txt","r");
        if(fp1==NULL){
            printf("Error opening the file");
            exit(1);
        }
        fp2=fopen("dst.txt","w+");
        if(fp2==NULL){
            printf("Error opening the file");
            exit(1);
        }

        while((ch=fgetc(fp1))!=EOF)
        {
            fputc(ch,fp2);
        }

        fclose(fp1);
        fclose(fp2);
    }