#pragma once

// ���ļ�ר�����ڶ����������

enum CHAT_ERROR
{
	CHAT_SUCCESS,
	CHAT_ERROR_TARGET_NOT_EXIST,	//	Ŀ�겻����
	CHAT_IN_BLACK_FRIEND,			//	�ڶԷ���������
	CHAT_ERROR_NO_GUILD,			//	���й���
	CHAT_ERROR_NO_SELF,				//	�������Լ�˽��
	CHAT_ERROR_NO_ITEM,				//	û������������Ʒ
	CHAT_ERROR_INGAME,				//	�Է�����Ϸ�У��޷��յ�ĳЩ��������
	CHAT_ERROR_IMSVR_ERR,			//	im�������쳣���޷����п������
	CHAT_ERROR_NOTEAM,              // Ŀǰû�ж���
	CHAT_ERROR_TIME,				//	���ʱ�䲻��
	CHAT_ERROR_ERROR_MAP,			//	��ͼ���Ͳ���
	CHAT_ERROR_NOCHANNEL,			//û��Ƶ��
	CHAT_ERROR_STATE,				//״̬����
	CHAT_ERROR_IN_TRADE,			//�ڽ�����
	CHAT_ERROR_NULL_COMMAND,		//��Ч������
	CHAT_ERROR_LEVEL_LOW,			//�ȼ�����
};

enum SERVER_TO_SEVER_ERROR
{
	GS_SUCCESS,						//�ɹ�	
	GS_REGISTER_IDDUPLICATE,		//�ظ�ע��
	GS_REGISTER_INVALIDID,			//��Ч�ķ�����id
	GS_REGISTER_FAILED,				//logic error
};