// Program 34: Program to reverse an array element in the array

void revereseArray(int arr[], int start, int end);
void printArray(int arr[], int size);

int main() 
{
    int n;
    int arr[n];

    printf("Enter number of integers: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    } 

    printArray(arr, n);
    revereseArray(arr, 0, n-1);
    printf("Reversed array is \n");
    printArray(arr, n);    
    return 0;
}

void revereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];   
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
}     
 
/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
} 