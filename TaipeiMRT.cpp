#include "DepthFirstSearch.h"
#include "BreadthFirstSearch.h"

int main(){
	char to[40], from[40];
	//DepthFirstSearch ob;
	BreadthFirstSearch ob;

	// Add red line station connections to database.
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
	ob.addInfo("���v���", "���s", 1);
	ob.addInfo("���s", "���s", 1);
	ob.addInfo("���s", "�x�_����", 2);
	ob.addInfo("�x�_����", "�x�j��|", 2);
	ob.addInfo("�x�j��|", "����������", 2);
	ob.addInfo("����������", "�F��", 3);
	ob.addInfo("�F��", "�j�w�˪L����", 2);
	ob.addInfo("�j�w�˪L����", "�j�w", 2);
	ob.addInfo("�j�w", "�H�q�w�M", 2);
	ob.addInfo("�H�q�w�M", "�x�_101/�@�T", 2);
	ob.addInfo("�x�_101/�@�T", "�H�s", 2);

	// Add green line station connections to database
	ob.addInfo("�Q�s", "�n�ʤT��", 3);
	ob.addInfo("�n�ʤT��", "�x�_�p���J", 2);
	ob.addInfo("�x�_�p���J", "�n�ʴ_��", 2);
	ob.addInfo("�n�ʴ_��", "�Q���n��", 2);
	ob.addInfo("�Q���n��", "���s", 2);
	ob.addInfo("���s", "�_��", 2);
	ob.addInfo("�_��", "���", 2);
	ob.addInfo("���", "�p�n��", 2);
	ob.addInfo("�p�n��", "����������", 2);
	ob.addInfo("����������", "�j�F", 2);
	ob.addInfo("�j�F", "�x�q�j��", 2);
	ob.addInfo("�x�q�j��", "���]", 2);
	ob.addInfo("���]", "�U��", 2);
	ob.addInfo("�U��", "����", 2);
	ob.addInfo("����", "�j�W�L", 2);
	ob.addInfo("�j�W�L", "�C�i", 2);
	ob.addInfo("�C�i", "�p�Ѽ�", 4);
	ob.addInfo("�C�i", "�s���Ϥ���", 2);
	ob.addInfo("�s���Ϥ���", "�s��", 2);

	// Add brown line station connections to database
	ob.addInfo("�n��i���]", "�n��n����", 2);
	ob.addInfo("�n��n����", "�F��", 2);
	ob.addInfo("�F��", "���w", 2);
	ob.addInfo("���w", "�j�򤽶�", 3);
	ob.addInfo("�j�򤽶�", "����", 2);
	ob.addInfo("����", "��w", 2);
	ob.addInfo("��w", "���Y", 2);
	ob.addInfo("���Y", "���", 2);
	ob.addInfo("���", "�C�n��", 2);
	ob.addInfo("�C�n��", "�j��", 2);
	ob.addInfo("�j��", "�Q�s����", 3);
	ob.addInfo("�Q�s����", "���s�ꤤ", 3);
	ob.addInfo("���s�ꤤ", "�n�ʴ_��", 2);
	ob.addInfo("�n�ʴ_��", "�����_��", 2);
	ob.addInfo("�����_��", "�j�w", 2);
	ob.addInfo("�j�w", "��ޤj��", 2);
	ob.addInfo("��ޤj��", "���i�p", 3);
	ob.addInfo("���i�p", "���", 2);
	ob.addInfo("���", "����", 3);
	ob.addInfo("����", "�U����|", 2);
	ob.addInfo("�U����|", "�U�ڪ���", 2);
	ob.addInfo("�U�ڪ���", "��]", 1);
	ob.addInfo("��]", "�ʪ���", 2);

	// Add yellow line station connections to database
	
	// Add blue line station connections to database

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