#include <stdio.h>

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int stringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void displayMenu()
{
    printf("\nMenu:\n");
    printf("1. Enter array and calculate sum\n");
    printf("2. Enter string and calculate length\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

int main()
{
    int n;

    while (1)
    {
        displayMenu();
        scanf("%d", &n);

        switch (n)
        {
        case 0:
            printf("Exiting program...\n");
            return 0;

        case 1:
            {
                int size;
                printf("Enter array size: ");
                scanf("%d", &size);

                if (size > 0)
                {
                    int arr[size];
                    printf("Enter array elements:\n");
                    for (int i = 0; i < size; i++)
                    {
                        printf("a[%d] = ", i);
                        scanf("%d", &arr[i]);
                    }

                    int total = sumArray(arr, size);
                    printf("The sum of an Array: %d\n", total);
                }
                else
                {
                    printf("Invalid array size. Please enter a positive number.\n");
                }
            }
            break;

        case 2:
            {
                char str[100];
                printf("\nEnter any string: ");
                scanf(" %[^\n]s", str);

                int len = stringLength(str);
                printf("Length is: %d\n\n", len);
            }
            break;

        default:
            printf("Invalid option. Please try again.\n");
            break;
        }
    }

    return 0;
}
