// To Do List in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_tasks 100
#define max_length 100

char tasks[max_tasks][max_length];
int task_count = 0;

void add_task()
{
    if (task_count >= max_tasks)
    {
        printf("Task limit has reached\n");
        return;
    }

    printf("Enter your task (single word): ");
    scanf("%s", tasks[task_count]);
    task_count++;
    printf("Task added\n");
}

void view_task()
{
    if (task_count == 0)
    {
        printf("No tasks yet\n");
        return;
    }

    printf("---Your Tasks---\n");
    for (int i = 0; i < task_count; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n---To-Do List Menu---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_task();
            break;
        case 2:
            view_task();
            break;
        case 3:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
