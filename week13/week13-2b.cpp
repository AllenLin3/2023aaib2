///week13-2b
#include <string.h>
#include <stdio.h>
int main(){
    char line[20];
    scanf("%s",line);
    int N = strlen(line);
    int bad=0;
    for(int i=0;i<N/2;i++){
        if(line[i]!=line[N-1-i])bad=1;
    }
    ///0123456789共10個
    ///^        ^相加是9
    /// 1      8
    ///  2    7
    ///   3  6
    ///    45
    ///    45
    ///   3  6
    ///  2    7
    /// 1      8
    ///0        9
    if(bad==1)printf("NO\n");
    else printf("YES\n");
}
