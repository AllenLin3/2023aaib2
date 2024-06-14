///week11-1
# include <stdio.h>
int isp(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int bound=300000,ans=0;
    for(int i=2;i<bound;i++){
        if(isp(i)){printf("%d ",i);
        ans++;
        }
    }
    printf("質數有:%d 個\n",ans);

}
