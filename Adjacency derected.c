#include<stdio.h>
int main ()
{
    int i,j,x,y,inf,cost,node,edge,matrix[100][100];

    scanf("%d%d",&node,&edge);

    for(i=0;i<edge;i++){
        scanf("%d%d%d",&x,&y,&cost);
        matrix[x][y]=cost;
    }
    printf("Connection: %d",matrix[3][2]);
    printf("\n");
    inf=9999;
    for(i=1;i<=node;i++){
        for(j=1;j<=node;j++){
            if(matrix[i][j]==0){
                printf("%d ",inf);
            }
            else{
                printf("%d ",matrix[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
