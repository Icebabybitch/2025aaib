//week11-1.cpp
#include <stdio.h>
int main()
{
    printf("請輸入1422:");
    int n;
    scanf("%d",&n);
    //怎麼找最大位數
    int ans=0;
    while (n>0){
        printf("現在剝出來的皮:%d\n",n%10);
        if (n%10 > ans) ans =n%10;
        n /=10;
    }
    printf("找到最大的皮是:%d\n",ans);
}
