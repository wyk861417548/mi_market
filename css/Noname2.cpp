#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
void main(){
    int i,n,k;
    int Fib1(int n);
    int Fib2(int n);
    printf("请选择算法：1.迭代   2.递归");
    scanf("%d",&k);
    DWORD  time,begin=GetTickCount();
    printf("请输入数0~100");
    scanf("%d",&n);
    if(k==1){
        for(i=1;i<=n;i++){
            printf("第%d项=%d\n",i,Fib1(n));
        }
    }else if(k==2){
        for(i=1;i<=n;i++){
            printf("第%d项=%d\n",i,Fib2(n));
        }
    }
    time=GetTickCount()-begin;
    printf("%dms\n",time);
}

int Fib1(int n){
    int x=0;y=1;sum=0;
    for(int i=2;i<=n;i++){
        sum=x+y;
        x=y;
        y=sum;
    }
    return sum;
}

int Fib2(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else if(n>=2){
        return Fib(n-1)+Fib(n-2);
    }

}
