//Depth first search programme

#include<stdio.h>

//function declaration
void DFS(int [][],int[]);
void push(int);
void pop();

typedef struct stack
{
    int a[100];
    int top;
}st;

st graph_stack;

//driver's code
int main()
{
    int n,graph[100],i,adjacency_matrix[100][100],j;
    printf("Enter the no. of vertices in the graph : ");
    scanf("%d",&n);
    graph_stack.top = -1;

    //taking input for the name of the vertices
    for(i=0;i<n;i++)
    {
        printf("Enter %d vertex name : ",i);
        scanf("%d",&graph[i]);
    }

    //creating an adjacency matrix
    printf("\n-------------------Creating Adjacency Matrix-------------------\n");
    printf("\nEnter 1 if two vertext are adjacent otherwise enter 0............\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the relation between a[%d][%d] : ",i,j);
            scanf("%d",&adjacency_matrix[i][j]);
        }
    }
    DFS(adjacency_matrix,graph);
    return 0;
}

//function definition
void push(int a)
{
    graph_stack.top += 1;
    graph_stack.a[graph_stack.top] = a; 
}
