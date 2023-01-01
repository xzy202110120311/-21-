#include<stdio.h>
#include"使用者以及书籍结构体.h"
//堆排序
void Change(user *arr, int x, int y)
{
	user userss;
	userss = arr[x];
	arr[x] = arr[y];
	arr[y] = userss;
}

void HeapInsert(user *arr, int index)
{
	while (arr[index].account2 > arr[(index - 1) / 2].account2)
	{
		Change(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;
	}
}

//arr: 目标数组,index: 目标节点,size: 数组大小

void HeapIfy(user *arr, int index, int size)
{
	int left = index * 2 + 1;
	while (left < size)
	{
		//找较大子节点
		int largest = (left + 1 < size && arr[left + 1].account2 > arr[left].account2) ? left + 1 : left;

		//比较子节点和父节点
		if (arr[largest].account2 > arr[index].account2)
			Change(arr, largest, index);
		else
			break;

		//循环结构
		index = largest;
		left = index * 2 + 1;
	}
}

void HeapSort(user* arr, int size)
{
	int i = 0;
	if (arr == NULL || size < 2)
		return;

	//进二叉树：
	for (i = 1; i < size; i++)
	{
		HeapInsert(arr, i);
	}

	//排序：
	while (size > 0)
	{
		Change(arr, 0, --size);
		HeapIfy(arr, 0, size);
	}
}
//用户信息堆排序
void HeapSortU(){
	int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	HeapSort(users, sum2);
}
//用户二分查找
int Bsearch(user arr[],int key,int n){
	int low = 0;
	int high = n - 1; 
	int mid;		
	while (low <= high){
		mid = (low + high) / 2;	
		if (arr[mid].account2 < key){	
			low = mid + 1;
		}
		else if (arr[mid].account2 > key){
			high = mid - 1;		
		}
		else{               
			return mid;		
		}
	}
	return -1;
}
//书籍编号二分查找
int Bsearch_book(book arr[],int key,int n){
	int low = 0;
	int high = n - 1; 
	int mid;		
	while (low <= high){
		mid = (low + high) / 2;	
		if (arr[mid].number < key){	
			low = mid + 1;
		}
		else if (arr[mid].number > key){
			high = mid - 1;		
		}
		else{               
			return mid;		
		}
	}
	return -1;
}
