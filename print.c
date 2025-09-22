#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printn(int d){
    printf("%d ",d);

}
int main(){
    int i=0;
    printf("\033c\033[43;30m\nnumbers\n");
    for(i=0;i<250;i=i+5)printn(i);
    
    return 0;
}
