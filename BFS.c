#include <stdio.h>

int main()
{
    int graph[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0}
    };

    int visited[5] = {0};
    int queue[5];
    int front = 0, rear = 0;
    int start = 0;
    int i, current;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS Traversal: ");

    while (front < rear)
    {
        current = queue[front++];
        printf("%d ", current);

        for (i = 0; i < 5; i++)
        {
            if (graph[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    return 0;
}