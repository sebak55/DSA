#include <stdio.h>

int main()
{
    int graph[6][6] = {
        {0, 1, 0, 1, 0, 0},
        {1, 0, 1, 0, 1, 0},
        {0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0},
        {0, 1, 0, 1, 0, 1},
        {0, 0, 1, 0, 1, 0}
    };

    int visited[6] = {0};
    int stack[6];
    int top = -1;
    int start = 0;
    int i, current;

    stack[++top] = start;

    printf("DFS Traversal: ");

    while (top != -1)
    {
        current = stack[top--];

        if (visited[current] == 0)
        {
            visited[current] = 1;
            printf("%d ", current);

            for (i = 5; i >= 0; i--)
            {
                if (graph[current][i] == 1 && visited[i] == 0)
                {
                    stack[++top] = i;
                }
            }
        }
    }

    return 0;
}
