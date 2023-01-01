#include<stdio.h>
#include"ʹ�����Լ��鼮�ṹ��.h"
//������
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

//arr: Ŀ������,index: Ŀ��ڵ�,size: �����С

void HeapIfy(user *arr, int index, int size)
{
	int left = index * 2 + 1;
	while (left < size)
	{
		//�ҽϴ��ӽڵ�
		int largest = (left + 1 < size && arr[left + 1].account2 > arr[left].account2) ? left + 1 : left;

		//�Ƚ��ӽڵ�͸��ڵ�
		if (arr[largest].account2 > arr[index].account2)
			Change(arr, largest, index);
		else
			break;

		//ѭ���ṹ
		index = largest;
		left = index * 2 + 1;
	}
}

void HeapSort(user* arr, int size)
{
	int i = 0;
	if (arr == NULL || size < 2)
		return;

	//����������
	for (i = 1; i < size; i++)
	{
		HeapInsert(arr, i);
	}

	//����
	while (size > 0)
	{
		Change(arr, 0, --size);
		HeapIfy(arr, 0, size);
	}
}
//�û���Ϣ������
void HeapSortU(){
	int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	HeapSort(users, sum2);
}
//�û����ֲ���
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
//�鼮��Ŷ��ֲ���
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
