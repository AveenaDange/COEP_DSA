typedef struct arr{
	int *A;
	int size;
	int length;
}array;

void init(array *arr, int size);
void append(array *arr, int ele);
void insert(array *arr, int pos, int element);
void rem(array *arr, int pos);
void reverse(array *arr);

int max(array arr);
int min(array arr);
array merge(array a, array b);
void display(array arr);
