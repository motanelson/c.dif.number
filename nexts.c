#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sums(int *list1){
    int i=list1[0];
    int n=0;
    int r=0;
    for(n=0;n<i;n++)r=r+list1[n+1];
    return r;

}
void difs(int *list1,int *list2){
    int i=list2[0];
    int n=0;
    i++;
    
    for(n=1;n<i-1;n++)list1[n]=list2[n+1]-list2[n];
    list1[0]=list2[0]-1;

}

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
void nexts(int *list1){
    int mm[4096]={0};
    int t=0;
    int l=0;
    int ll=0;
    difs(mm,list1);
    t=sums(mm);
    l=mm[0];
    ll=t/l;
    t=list1[0];
    t=list1[t];
    adds(list1,t+ll);
    
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
void printnf(double f){
    printf("%lf ",f);

}

void printn(int d){
    printf("%d ",d);

}
void print(int *list1){
    int i=list1[0];
    int l=0;
    int n=0;
    for(n=0;n<i;n++)printn(list1[n+1]);
    printf("\n");
}
int main(){
    int i=0;
    int nn[4096]={9,1,2,3,4,5,6,7,8,9};
    int mm[4096]={0};
    printf("\033c\033[43;30m\nnumbers\n");
    print(nn);
    printf("\n\n");
    nexts(nn);
    print(nn);
    printf("\n\n");
    return 0;
}
