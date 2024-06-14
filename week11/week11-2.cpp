///week11-2
# include <stdio.h>
int main(){
    int bound=20000,ans=0;
    int table[20000]={};
    for(int i=2;i<bound;i++){
        if(table[i]==0){
            ans++;
            for(int k=i*i;k<bound;k+=i){
                table[k]=-1;
            }
        }
    }
    printf("½è¼Æ¦³: %d\n",ans);
}
