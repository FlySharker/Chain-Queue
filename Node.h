#ifndef __NODE_H__
#define __NODE_H__
#include<cstddef>
#include"Assistance.h"

// 结点类
template <class T>
struct Node
{
	// 数据成员:
	T data;				// 数据域
	Node<T>* next;		// 指针域

// 构造函数:
	Node();						// 无参数的构造函数
	Node(T e, Node<T>* link = NULL);	// 已知数数据元素值和指针建立结构
};

// 结点类的实现部分
template<class T>
Node<T>::Node()
// 操作结果：构造指针域为空的结点
{
	next = NULL;
}

template<class T>
Node<T>::Node(T e, Node<T>* link)
// 操作结果：构造一个数据域为e和指针域为link的结点
{
	data = e;
	next = link;
}

struct Air
{
	string id,departure,arrival;
	int depart_year, depart_month, depart_day, depart_hour, depart_minute, depart_second;
	int arrive_year, arrive_month, arrive_day, arrive_hour, arrive_minute, arrive_second;
	int seat, emptyseat;
	double price;
	Air(string Id = "MU5305", string Departure = "Shanghai", string Arrival="Nanjing",int Depart_year=2022, int Depart_month=12, int Depart_day=20, int Depart_hour=9, int Depart_minute=30, int Depart_second=35, int Arrive_year=2023, int Arrive_month=4, int Arrive_day=25, int Arrive_hour=17, int Arrive_minute=15, int Arrival_second=40,int Seat=100,int Emptyseat=50,double Price=200);
	friend ostream& operator<<(ostream& out, const Air& a);
	friend istream& operator>>(istream& in, Air& a);
};

Air::Air(string Id, string Departure, string Arrival, int Depart_year, int Depart_month, int Depart_day, int Depart_hour, int Depart_minute, int Depart_second, int Arrive_year, int Arrive_month, int Arrive_day, int Arrive_hour, int Arrive_minute, int Arrive_second, int Seat, int Emptyseat, double Price) :id(Id), departure(Departure), arrival(Arrival), depart_day(Depart_day), depart_year(Depart_year), depart_month(Depart_month), depart_hour(Depart_hour), depart_minute(Depart_minute), depart_second(Depart_second), arrive_year(Arrive_year),arrive_month(Arrive_month),arrive_day(Arrive_day),arrive_hour(Arrive_hour),arrive_minute(Arrive_minute),arrive_second(Arrive_second), seat(Seat), emptyseat(Emptyseat), price(Price)
{

}

ostream& operator<<(ostream& out, const Air& a)
{
	out << "航班号：" << setw(6) << a.id << "座位数：" << setw(3) << a.seat << "空座位数：" << setw(3) << a.emptyseat <<"票价："<<setw(4)<<a.price<< endl << "起飞地点: " << setw(8) << a.departure << '\t' << "起飞时间：" << setw(4) << a.depart_year << "年 " << setw(2) << a.depart_month << "月 " << setw(2) << a.depart_day << "日 " << setw(2) << a.depart_hour << "时 " << setw(2) << a.depart_minute << "分 " << setw(2) << a.depart_second << "秒 " << endl << "抵达地点：" << setw(8) << a.arrival << '\t' << "抵达时间：" << setw(4) << a.arrive_year << "年 " << setw(2) << a.arrive_month << "月 " << setw(2) << a.arrive_day << "日 " << setw(2) << a.arrive_hour << "时 " << setw(2) << a.arrive_minute << "分 " << setw(2) << a.arrive_second << "秒 " << endl;
	return out;
}

istream& operator>>(istream& in, Air& a)
{
	in >> a.id >> a.seat >> a.emptyseat >> a.price>> a.departure >> a.depart_year >> a.depart_month >> a.depart_day >> a.depart_hour >> a.depart_minute >> a.depart_second >> a.arrival >> a.arrive_year >> a.arrive_month >> a.arrive_day >> a.arrive_hour >> a.arrive_minute >> a.arrive_second;
	return in;
}

#endif


