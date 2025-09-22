#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    int n[4096]={6,0,5,10,15,20,25};
    int nn[4096]={0};
    printf("\033c\033[43;30m\nnumbers\n");
    print(n);
    copys(nn,n);
    print(nn);
    return 0;
}
