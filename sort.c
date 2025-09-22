#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(int *list1){
    int n = list1[0];
    int i, j, tmp;
    for(i = 1; i < n; i++){
        for(j = 1; j < n - i + 1; j++){
            if(list1[j] > list1[j+1]){
                tmp = list1[j];
                list1[j] = list1[j+1];
                list1[j+1] = tmp;
            }
        }
    }
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
    int nn[4096]={18,10,1,20,2,30,3,40,4,50,5,60,6,70,7,80,8,90,9};
    printf("\033c\033[43;30m\nnumbers\n");
    
    print(nn);
    sort(nn);
    printf("\n\n");
    print(nn);
    saves("data.txt",nn);
    return 0;
}
