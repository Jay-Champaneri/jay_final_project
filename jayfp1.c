#include<stdio.h>
#include<string.h>
#include<math.h>

char s[101];
void delete(int i){
while(s[i]!='\0'){
s[i] = s[i+2];
s[i+1] = s[i+3];
i+=2;
}}
int main(){
int i=0,len=0;
scanf("%s",s);
while(s[len]!='\0'){
len++;
}
while(i<len){
if((s[i]==s[i+1]) &&(i>=0) && s[i]!='\0'){
delete(i);
i--;
}
else{
i++;
}}
if(s[0] == '\0')
printf("string is empty ");
else
printf("string is %s\n",s);
}


