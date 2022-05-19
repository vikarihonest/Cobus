//Simple Obfuscate String by Vikarihonest
//Link : http://vikari.rf.gd
#include <stdlib.h>

char* enc(char* strt){
char* res=(char*)malloc(strlen(strt)+1);
char ch[3];
char str[strlen(strt)];
sprintf(str,"%s",strt);
const char c[] = ",";   
char *token;
token = strtok(str, c); 
int b=1;
int key[10]={53,90,31,10,29,45,33,77,11,7,};while( token != NULL ) {
int i=b++;
int s=i-1;
int y=key[s];
int x=atoi(token)+y;
if(i==10){
	b=1;
}
int v=x;
if(x%2==0){
v=x+6;
}
sprintf(ch,"%c",v);
strcat(res,ch);
      token = strtok(NULL, c);
}
return res;
}

