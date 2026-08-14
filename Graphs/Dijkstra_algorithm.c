#include <stdio.h>

#define INF 9999

int main()
{
    int graph[5][5] = {
        {0, 10, 3, 0, 0},
        {10, 0, 1, 2, 0},
        {3, 1, 0, 8, 2},
        {0, 2, 8, 0, 7},
        {0, 0, 2, 7, 0}
    };

    int distance[5];
    int visited[5] = {0};
    int i, j, min, current;

    for (i = 0; i < 5; i++)
    {
        distance[i] = INF;
    }

    distance[0] = 0;

    for (i = 0; i < 5; i++)
    {
        min = INF;
        current = -1;

        for (j = 0; j < 5; j++)
        {
            if (visited[j] == 0 && distance[j] < min)
            {
                min = distance[j];
                current = j;
            }
        }

        if (current == -1)
            break;

        visited[current] = 1;

        for (j = 0; j < 5; j++)
        {
            if (graph[current][j] != 0 &&
                visited[j] == 0 &&
                distance[current] + graph[current][j] < distance[j])
            {
                distance[j] = distance[current] + graph[current][j];
            }
        }
    }

    printf("Shortest distances from vertex 0:\n");

    for (i = 0; i < 5; i++)
    {
        printf("0 -> %d = %d\n", i, distance[i]);
    }

    return 0;
}