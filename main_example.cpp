#include "kademlia.hpp"

//创建全局的节点管理器
kad::CNodeManager NodeManager;

int main()
{
	for(int i=0; i<100; i++){
		//创建新节点，记录节点信息
		UINT new_node_pos = kad::NodeManager.CreateNode((UINT)rand());
		//根据节点信息找到节点,发布节点
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