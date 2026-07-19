#include<stdio.h>
int main(){
    char str[100];
    printf("LOWER CASE TO UPPER CASE CONVERTER\n");
    printf("ENTER STRING: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i] >= 'a' && str[i] <= 'z')
{
    str[i] = str[i] - 32;
}
    printf("%c",str[i]);
    }

}