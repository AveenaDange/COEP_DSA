#include "array.h"
#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

void init(array *arr, int n)
{
	arr->A = (int *)malloc(n * sizeof(int));
	arr->size=n;	
	arr->length=0;
	return;
}

void append(array *arr, int ele)
{
	if(arr->length < arr->size)
		arr->A[arr->length++] = ele;
	return;	
}

void insert(array *arr, int pos, int element) {
    int i;
    if(pos < 0 || pos >= arr->length)
        return;

    i = arr->length - 1;
    while (i >= pos) {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[pos] = element;
    arr->length++;
    return;
}

void rem(array *arr, int pos) {
    int i;
    if(pos < 0 || pos > arr->length - 1) {
        return;
    }

    i = pos;
    while (i < (arr->length - 1)) {
        arr->A[i] = arr->A[i + 1];
        i++;
    }

    arr->length--;
    return;
}

void reverse(array *arr) {
    int end = arr->length - 1;
    int start = 0;
    int temp;

    while(start < end) {
        temp = arr->A[start];
        arr->A[start] = arr->A[end];
        arr->A[end] = temp;
        start++;
        end--;
    }
    return;
}

int max(array arr) {
    int maximum = INT_MIN;
    int i;

    for(i = 0; i < arr.length; i++) {
        if(arr.A[i] > maximum)
            maximum = arr.A[i];
    }
    return maximum;
}

int min(array arr) {
    int minimum = INT_MAX;
    int i;

    for(i = 0; i < arr.length; i++) {
        if(arr.A[i] < minimum)
            minimum = arr.A[i];
    }
    return minimum;
}

array merge(array a, array b) {
    array merged;
    int i;
    init(&merged, a.length + b.length);
    
    for(i = 0; i < a.length; i++) {
        append(&merged, a.A[i]);
    }

    for(i = 0; i < b.length; i++) {
        append(&merged, b.A[i]);
    }

    return merged;
}

void display(array arr)
{
	for(int i=0;i<arr.length;i++)
	{
		printf("%d | ",arr.A[i]);
	}
	return;
}

