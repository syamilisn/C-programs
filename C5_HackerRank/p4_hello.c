#include <stdio.h>
#include <string.h>

void main(){
    //Enter string
    char str[200];
    char *ptr_str = str;
    gets(str);
    int length = strlen(str);
    char s1[13] = "Hello, World!";
    char s2[13] = "Hello, Sasken";
    char s3[6] = "sasken";
    char claim = '!';
    //printf("%d", length);
    for(int i=0;i<length;i++){
        if(ptr_str[i]=="s" || ptr_str[i]=="S"){
            if(ptr_str[i]=="a" || ptr_str[i]=="A"){
                if(ptr_str[i]=="s" || ptr_str[i]=="S"){
                    if(ptr_str[i]=="k" || ptr_str[i]=="K"){
                        if(ptr_str[i]=="e" || ptr_str[i]=="E"){
                            if(ptr_str[i]=="n" || ptr_str[i]=="N"){
                                strcat(s2,claim);
                                if(i<length){
                                    printf("%s",s2);
                                }
                            }
                        }
                    }
                }
            }  
        }
        else{
            printf("%s",s1);
        }
    }
}