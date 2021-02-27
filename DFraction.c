#include <stdio.h>
     void solve(int nr, int dr) 
    { 
    if (dr == 0 || nr == 0) 
        return; 
    if (dr%nr == 0) 
    { 
        printf("%d ",dr/nr); 
        return; 
    } 
    if (nr%dr == 0) 
    { 
        printf("1/%d ",nr/dr); 
        return; 
    } 
    if (nr > dr) 
    { 
        printf("1/%d ",nr/dr); 
        solve(nr%dr, dr); 
        return; 
    } 

    int n = dr/nr + 1; 
    printf("%d ",n); 
    solve(nr*n-dr, dr*n); 
    }     
    int main()
    {
    // write your code here
    int t;
     scanf("%d",&t);
     while(t--)
    {
    int nr,dr;
    scanf("%d%d",&nr,&dr);
    solve(nr,dr);
    }
    return 0;
    }
