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
		cout << endl << "1. ���.";
		cout << endl << "2. ��ʾѭ������.";
		cout << endl << "3. �ܳ���.";
		cout << endl << "5. ����.";
		cout << endl << "0. �˳�" << endl;
		cin >> c;
		switch (c)
		{
		case'1':
			cout << "Ҫ���뼸��������Ϣ" << endl;
			cin >> d;
			cout << "�밴����� ��λ�� ����λ�� Ʊ�� ��ɵص� ���ʱ�䣨�� �� �� ʱ �� �룩�ִ�ص� �ִ�ʱ�䣨�� �� �� ʱ �� �룩����" << endl;
			cout << "������" << endl;
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
			cout << "���еĳ���Ϊ��" << l << endl;
			break;
		case'5':
			s.DelQueue(z);
			cout << "ԭ����Ԫ��Ϊ��" << z << endl;
			s.Traverse(Write<Air>);
			break;
		case'0':
			return 0;
		}
	}
	return 0;
}