#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
       int i,j,a,n,yukarimi;

    printf("n i girin ");
    scanf("%d",&n);

    int matris[n][n];

    a=1;

    yukarimi=1;

    for(i=n-1;i>=0;i--){
        if(yukarimi==1){
            for(j=n-1;j>=0;j--){
                matris[j][i]=a++;
            }
        }
        else{
            for(j=0;j<n;j++){
                matris[j][i]=a++;
            }
        }
        if(yukarimi==1){
            yukarimi=0;
        }
        else{
            yukarimi=1;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }

}
