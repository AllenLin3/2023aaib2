///week09-1.cpp
#include <stdio.h>
int myAdd(int a,int b){///函式定義
    return a+b;///in 2,out 1
}
void myPrint(int a){///函式定義 in 1
    for(int i=1;i<=a;i++)printf("*");
    printf("\n");
}
int main(){///函式呼叫
    int ans=myAdd(3,4);
    printf("Hello ans: %d\n",ans);
    myPrint(ans);///函式呼叫
}
