///week09-1.cpp
#include <stdio.h>
int myAdd(int a,int b){///�禡�w�q
    return a+b;///in 2,out 1
}
void myPrint(int a){///�禡�w�q in 1
    for(int i=1;i<=a;i++)printf("*");
    printf("\n");
}
int main(){///�禡�I�s
    int ans=myAdd(3,4);
    printf("Hello ans: %d\n",ans);
    myPrint(ans);///�禡�I�s
}
