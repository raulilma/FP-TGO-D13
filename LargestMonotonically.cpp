/*
Masukkan input:
9
4 1 13 7 0 2 8 11 3
*/
#include<stdio.h>
#include<algorithm>
int arr[1005],lis[1005];
int main()
{
    int n; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int panjang,i,j;
    for(panjang=i=0;i<n;i++)
    {
        int pos=std::lower_bound(lis,lis+panjang,arr[i])-lis;
        if(pos<panjang) lis[pos]=arr[i];
        else lis[panjang++]=arr[i];
    }
    printf("Solusi LMIS dari bilangan-bilangan yang diberikan adalah %d\n",panjang);
    return 0;
}
