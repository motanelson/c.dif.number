#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void addat(int *list1,int posa,int number){
    int i=list1[0];
    int n=0;
    for(n=0;n<i-posa;n++)list1[i-n+1]=list1[i-n];
    list1[posa+1]=number;
    i++;
    list1[0]=i;
}

void saves(char *names,int *list1){
    FILE* f1;
    int n=list1[0];
    int i=0;
    f1=fopen(names,"w");
    for(i=0;i<n;i++){
        if(i==0)fprintf(f1,"%d",list1[i+1]);
        if(i!=0)fprintf(f1,", %d",list1[i+1]);
    }
    fclose(f1);
}
void adda(int *list1,int nn){
    int i=list1[0];
    int n=0;
    int j=0;
    for(n=0;n<i;n++){
        j=list1[n+1];
        j=j+nn;
        list1[n+1]=j;
    }


}
void adds(int *list1,int i){
    int n=list1[0];
    n++;
    list1[n]=i;
    
    list1[0]=n;

}
void multa(int *list1,int m,int asizes){
    int i=0;
    list1[0];
    for(i=0;i<asizes*m;i=i+m)adds(list1,i);


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
    int nn[4096]={6,0,10,15,20,25,30};
    printf("\033c\033[43;30m\nnumbers\n");
    print(nn);
    addat(nn,1,5);
    print(nn);
    return 0;
}
