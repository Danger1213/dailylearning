#pragma once
//SqList.h 一般这些接口函数声明放在.h中
// 下面的接口函数的实现放到SqList.cpp中
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int SqDataType;//数据元素类型

typedef struct
{
    SqDataType* arr;   //存储数据的动态数组的指针
    int size;         //记录顺序表已经存入的数据个数  
    int capacity;    //动态数组的容量空间大小
}SqList;

//初始化顺序表
void SqListInit(SqList* ps);

//引用的方式初始化顺序表
//void SqListInit(SqList& s);

void SqListDestroy(SqList* ps);