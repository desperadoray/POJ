#include "kademlia.hpp"

//����ȫ�ֵĽڵ������
kad::CNodeManager NodeManager;

int main()
{
	for(int i=0; i<100; i++){
		//�����½ڵ㣬��¼�ڵ���Ϣ
		UINT new_node_pos = kad::NodeManager.CreateNode((UINT)rand());
		//���ݽڵ���Ϣ�ҵ��ڵ�,�����ڵ�
		kad::NodeManager.GetNode(new_node_pos)
			.PublishSelf(kad::NodeManager.GetSuperNode());
	}

	std::string resource = "Hou Shian";
	UINT temp_id1 = (UINT)rand();
	UINT temp_pos1 = kad::NodeManager.CreateNode(temp_id1);
	kad::Node &tempNode1 = kad::NodeManager.GetNode(temp_pos1);
	tempNode1.PublishSelf(kad::NodeManager.GetSuperNode());

	UINT temp_id2 = (UINT)rand();
	UINT temp_pos2 = kad::NodeManager.CreateNode(temp_id2);
	kad::Node &tempNode2 = kad::NodeManager.GetNode(temp_pos2);
	tempNode2.PublishSelf(kad::NodeManager.GetSuperNode());

	UINT temp_hash1 = kad::Hash(resource.c_str(), resource.length());

	tempNode1.PublishResource(temp_hash1);


	return 0;
}