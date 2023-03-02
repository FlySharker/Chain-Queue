#ifndef __NODE_H__
#define __NODE_H__
#include<cstddef>
#include"Assistance.h"

// �����
template <class T>
struct Node
{
	// ���ݳ�Ա:
	T data;				// ������
	Node<T>* next;		// ָ����

// ���캯��:
	Node();						// �޲����Ĺ��캯��
	Node(T e, Node<T>* link = NULL);	// ��֪������Ԫ��ֵ��ָ�뽨���ṹ
};

// ������ʵ�ֲ���
template<class T>
Node<T>::Node()
// �������������ָ����Ϊ�յĽ��
{
	next = NULL;
}

template<class T>
Node<T>::Node(T e, Node<T>* link)
// �������������һ��������Ϊe��ָ����Ϊlink�Ľ��
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
	out << "����ţ�" << setw(6) << a.id << "��λ����" << setw(3) << a.seat << "����λ����" << setw(3) << a.emptyseat <<"Ʊ�ۣ�"<<setw(4)<<a.price<< endl << "��ɵص�: " << setw(8) << a.departure << '\t' << "���ʱ�䣺" << setw(4) << a.depart_year << "�� " << setw(2) << a.depart_month << "�� " << setw(2) << a.depart_day << "�� " << setw(2) << a.depart_hour << "ʱ " << setw(2) << a.depart_minute << "�� " << setw(2) << a.depart_second << "�� " << endl << "�ִ�ص㣺" << setw(8) << a.arrival << '\t' << "�ִ�ʱ�䣺" << setw(4) << a.arrive_year << "�� " << setw(2) << a.arrive_month << "�� " << setw(2) << a.arrive_day << "�� " << setw(2) << a.arrive_hour << "ʱ " << setw(2) << a.arrive_minute << "�� " << setw(2) << a.arrive_second << "�� " << endl;
	return out;
}

istream& operator>>(istream& in, Air& a)
{
	in >> a.id >> a.seat >> a.emptyseat >> a.price>> a.departure >> a.depart_year >> a.depart_month >> a.depart_day >> a.depart_hour >> a.depart_minute >> a.depart_second >> a.arrival >> a.arrive_year >> a.arrive_month >> a.arrive_day >> a.arrive_hour >> a.arrive_minute >> a.arrive_second;
	return in;
}

#endif


