// Linear Search according to Recursive Style 

int main(void) {
	int arr[] = {3,9,6,15,21,36,49,63,88};
	int size = sizeof(arr) / sizeof(arr[0]); // Công thức tính số lượng phần tử
    int x = 3; // Needed number
   
    int indx;
  	printf("Element %d is the size \n\n\n\n", size);
  
    indx = elmntSrch(arr, size, x);
  
    if (indx != -1)
        printf("Element %d is present at index %d", x, indx);
    else
        printf("Element %d is not present", x);
  
    return 0;
}

int elmntSrch(int arr[], int size, int x) {
    int rec; // The narrower
  
    size--; // Execute this code below then -- ; Trừ trước rồi thực hiện cái codeblock phía dưới đó
  
    if (size >= 0) {
        if (arr[size] == x)
            return size;
        else
            rec = elmntSrch(arr, size, x);
    }
    else
        return -1;
  
    return rec;
}