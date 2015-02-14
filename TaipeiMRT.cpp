#include "DepthFirstSearch.h"

int main(){
	char to[40], from[40];
	DepthFirstSearch ob;

	// Add station connections to database.
	ob.addInfo("�H��", "����L", 3);
	ob.addInfo("����L", "�˳�", 3);
	ob.addInfo("�˳�", "����", 3);
	ob.addInfo("����", "���q", 2);
	ob.addInfo("���q", "�_���^", 2);
	ob.addInfo("�_���^", "�_��", 3);
	ob.addInfo("�_��", "�s�_��", 3);
	ob.addInfo("�_��", "�_��", 2);
	ob.addInfo("�_��", "ԧ����", 2);
	ob.addInfo("ԧ����", "�۵P", 2);
	ob.addInfo("�۵P", "���w", 2);
	ob.addInfo("���w", "�ۤs", 2);
	ob.addInfo("�ۤs", "�h�L", 2);
	ob.addInfo("�h�L", "�C��", 2);
	ob.addInfo("�C��", "��s", 2);
	ob.addInfo("��s", "���v���", 2);

	cout << "From? ";

	cin.getline(from, 40);
	cout << "To? ";

	cin.getline(to, 40);

	// See if there is a route between from and to.
	ob.findroute(from, to);

	// If there is a route, show it.
	if(ob.routefound())
		ob.route();

	system("pause");
	return 0;
}