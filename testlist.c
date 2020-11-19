#include"listg.h"

int main() {
	LinkList *list = CreateList();
	Insert(list, 1, 10);
	Insert(list, 1, 20);
	Delete(list, 2);
	Insert(list, 1, 30);
	Insert(list, 1, 40);
	printf("链表的元素个数为：%d\n", Size(list));
	PrintLink(list);
	printf("链表的第2个元素为：%d\n", GetData(list, 2));
	CreatList();
	Delect();
	Print();
	printf("\n");
	return 0;

}


	
