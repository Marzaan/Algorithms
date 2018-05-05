#include<stdio.h>
int main ()
{
    int i,j,x,y,edge,node,cost;

    scanf("%d%d",&node,&edge);

    int matrix[node+1][edge+1];

    for(i=0;i<edge;i++){
        scanf("%d%d%d",&x,&y,&cost);
        matrix[x][y]=cost;
        matrix[y][x]=cost;
    }
    for(i=1;i<=node;i++){
        for(j=1;j<=node;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
