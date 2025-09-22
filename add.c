#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void adds(int *list1,int i){
    int n=list1[0];
    n++;
    list1[n]=i;
    
    list1[0]=n;

}
void copys(int *list1,int *list2){
    int i=list2[0];
    int n=0;
    i++;
    for(n=0;n<i;n++)list1[n]=list2[n];


}
void printn(int d){
    printf("%d ",d);

}
void print(int *list1){
    int i=list1[0];
    int n=0;
    for(n=0;n<i;n++)printn(list1[n+1]);
    printf("\n");
}
int main(){
    int i=0;
    int nn[4096]={0};
    printf("\033c\033[43;30m\nnumbers\n");
    for(i=0;i<80;i=i+5)adds(nn,i);
    print(nn);
    return 0;
}
