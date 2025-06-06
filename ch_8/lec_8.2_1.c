#include <stdio.h>

// Perform CRUD operations on 1D array
/*
    C - Create / Insert
    R - Read / Retrieve / Fetch / Access
    U - Update
    D - Delete
*/

int main()
{
    int size, i, choice;

    printf("Enter Array size: ");
    scanf("%d", &size);

    if (size < 0)
    {
        printf("Invalid size.\n");
        return 1;
    }

    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter array element at index %d: ", i);
        scanf("%d", &a[i]);
    }

    while (1)
    {
        printf("\n\n=====================================================================\n\n");

        printf("Press 1 to insert an element\n");
        printf("Press 2 to update an element\n");
        printf("Press 3 to delete an element\n");
        printf("Press 4 to view all elements\n");
        printf("Press 0 to exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Insert
        {
            int new_element, pos;
            printf("Enter the element to insert: ");
            scanf("%d", &new_element);
            printf("Enter the position to insert at (0 to %d): ", size);
            scanf("%d", &pos);

            if (pos < 0 || pos > size)
            {
                printf("Invalid position.\n");
                break;
            }
            else
            {
                for (i = size; i > pos; i--)
                {
                    a[i] = a[i - 1];
                }
            }
            a[pos] = new_element;
            size++;
            printf("\nElement inserted successfully.\n");
            break;
        }

        case 2: // Update
        {
            int pos, new_val;
            printf("Enter the index to update (0 to %d): ", size - 1);
            scanf("%d", &pos);

            if (pos < 0 || pos >= size)
            {
                printf("Invalid index.\n");
                break;
            }
            else
            {

                printf("Enter new value: ");
                scanf("%d", &new_val);

                a[pos] = new_val;
                printf("\nElement updated successfully.\n");
            }
            break;
        }

        case 3: // Delete
        {
            int pos;
            printf("Enter the index to delete (0 to %d): ", size - 1);
            scanf("%d", &pos);

            if (pos < 0 || pos >= size)
            {
                printf("Invalid index.\n");
                break;
            }
            else
            {
                for (i = pos; i < size - 1; i++)
                {
                    a[i] = a[i + 1];
                }

                size--;
                printf("\nElement deleted successfully.\n");
            }
            break;
        }

        case 4: // View
        {
            if (size == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                printf("\nThe array is: ");
                for (i = 0; i < size; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            break;
        }

        case 0: // Exit
            printf("\nExiting program...\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
