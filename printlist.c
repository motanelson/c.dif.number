#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printn(int d){
    printf("%d ",d);

}
void print(int *list1){
    int i=list1[0];
    int n=0;
    for(n=0;n<i;n++)printn(list1[n+1]);
}
int main(){
    int i=0;
    int n[4096]={6,0,5,10,15,20,25};
    printf("\033c\033[43;30m\nnumbers\n");
    print(n);
    
    return 0;
}
