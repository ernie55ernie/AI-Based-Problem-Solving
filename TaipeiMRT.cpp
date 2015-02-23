#include "DepthFirstSearch.h"
#include "BreadthFirstSearch.h"
#include "HillClimbingSearch.h"
#include "LeastCostSearch.h"

int main(){
	char to[40], from[40];
	MRTInfo m;
	//DepthFirstSearch ob;
	//BreadthFirstSearch ob;
	//HillClimbingSearch ob;
	LeastCostSearch ob;

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
	ob.addInfo("Ī�w", "�T������", 2);
	ob.addInfo("�T������", "�}�פ���", 2);
	ob.addInfo("�}�פ���", "�T�M�ꤤ", 2);
	ob.addInfo("�T�M�ꤤ", "�T����p", 2);
	ob.addInfo("�T����p", "�j���Y", 3);
	ob.addInfo("�j���Y", "�x�_��", 2);
	ob.addInfo("�x�_��", "��d", 2);
	ob.addInfo("��d", "�T��", 2);
	ob.addInfo("�T��", "���ޮc", 3);
	ob.addInfo("���ޮc", "�Y�e��", 2);
	ob.addInfo("�Y�e��", "�s��", 2);
	ob.addInfo("�s��", "���j", 3);
	ob.addInfo("���j", "����", 2);
	ob.addInfo("����", "�j�s", 3);
	ob.addInfo("�j���Y", "���v���", 3);
	ob.addInfo("���v���", "���s��p", 2);
	ob.addInfo("���s��p", "��Ѯc", 2);
	ob.addInfo("��Ѯc", "�Q���n��", 2);
	ob.addInfo("�Q���n��", "�����s��", 2);
	ob.addInfo("�����s��", "�F��", 2);
	ob.addInfo("�F��", "�j�F", 4);
	ob.addInfo("�j�F", "����", 4);
	ob.addInfo("����", "�æw����", 2);
	ob.addInfo("�æw����", "���w", 2);
	ob.addInfo("���w", "�n�ը�", 2);
	
	// Add blue line station connections to database
	ob.addInfo("�ù�", "�g��", 2);
	ob.addInfo("�g��", "���s", 2);
	ob.addInfo("���s", "�ȪF��|", 3);
	ob.addInfo("�ȪF��|", "����", 2);
	ob.addInfo("����", "�O��", 2);
	ob.addInfo("�O��", "�s�H", 2);
	ob.addInfo("�s�H", "���l�A", 2);
	ob.addInfo("���l�A", "�s�s�x", 4);
	ob.addInfo("�s�s�x", "���", 2);
	ob.addInfo("���", "�x�_����", 3);
	ob.addInfo("�x�_����", "���ɦx", 2);
	ob.addInfo("���ɦx", "�����s��", 2);
	ob.addInfo("�����s��", "�����_��", 2);
	ob.addInfo("�����_��", "��������", 2);
	ob.addInfo("��������", "��������]", 2);
	ob.addInfo("��������]", "���F��", 2);
	ob.addInfo("���F��", "�ìK", 2);
	ob.addInfo("�ìK", "��s��", 2);
	ob.addInfo("��s��", "����", 2);
	ob.addInfo("����", "�n��", 2);
	ob.addInfo("�n��", "�n��i���]", 2);

	cout << "From? ";

	cin.getline(from, 40);
	cout << "To? ";

	cin.getline(to, 40);

	// Find multiple solutions.
	for(;;){
		// See if there is a connection.
		ob.findroute(from, to);

		// If no new route was found, then end.
		if(!ob.routefound())break;

		// Save the information on top-of-stack.
		m = ob.getTOS();

		ob.route(); // display the current route.

		ob.resetAllSkip();	// reset the skip fields

		// Remove last information in previous solution
		// from the information database.
		ob.remove(m);
	}
	/*
	// See if there is a route between from and to.
	ob.findroute(from, to);

	// If there is a route, show it.
	if(ob.routefound())
		ob.route();
	*/

	system("pause");
	return 0;
}