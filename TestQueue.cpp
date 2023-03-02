#include"Assistance.h"
#include"LinkQueue.h"
int main()
{
	LinkQueue<Air>s;
	Air w, z;
	int d, l, v;
	char c = '9';
	while (c != '0')
	{
		cout << endl << "1. 入队.";
		cout << endl << "2. 显示循环队列.";
		cout << endl << "3. 总长度.";
		cout << endl << "5. 出队.";
		cout << endl << "0. 退出" << endl;
		cin >> c;
		switch (c)
		{
		case'1':
			cout << "要输入几条航班信息" << endl;
			cin >> d;
			cout << "请按航班号 座位数 空座位数 票价 起飞地点 起飞时间（年 月 日 时 分 秒）抵达地点 抵达时间（年 月 日 时 分 秒）输入" << endl;
			cout << "请输入" << endl;
			while(d--) {
				cin >> w;
				s.EnQueue(w);
			}
			break;
		case'2':
			s.Traverse(Write<Air>);
			cout << endl;
			break;
		case'3':
			l = s.GetLength();
			cout << "队列的长度为：" << l << endl;
			break;
		case'5':
			s.DelQueue(z);
			cout << "原队首元素为：" << z << endl;
			s.Traverse(Write<Air>);
			break;
		case'0':
			return 0;
		}
	}
	return 0;
}