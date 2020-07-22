/*
 * Copyright (C) 2020-2025 ASHINi corp. 
 * 
 * This library is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU Lesser General Public 
 * License as published by the Free Software Foundation; either 
 * version 2.1 of the License, or (at your option) any later version. 
 * 
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * Lesser General Public License for more details. 
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 * 
 */

#ifndef MEM_CTRL_REMOTE_CTRL_H_4D39CDDB_CTL_E289_4d56_9F98_FE42776F4467
#define MEM_CTRL_REMOTE_CTRL_H_4D39CDDB_CTL_E289_4d56_9F98_FE42776F4467

// �ڼ��� ������ �Ʒ��� ��Ű �������� �����Ͻñ� �ٶ��ϴ�.
// [PoRemoteRequest]
// http://mw.ashindev.com/wiki/index.php/PoRemoteRequest

typedef struct _mem_ctrl_remote_ctrl
{
	String					strSvrAddress;		//	remote host(=sc console) ip
	String					strSvrPort;			//	remote host(=sc console) port
	String					strAlertMsg;		//	���� ���� �� ����� ���� �޽���
	String					strModuleVersion;	//	���� ��� ����
	String					strDownloadInfo;	//	���� ��� �ٿ�ε� ����(���ϸ�, URL �� ���������� ����)
	String					strHash;			//	���� ��� �ؽ��� (md5 or sha1 or sha2)
	UINT32					nAlertType;			//	����� ���� �޽��� ��뿩�� (0 : ������ / 1 : �����) �⺻��=0
	UINT32					nConnectMode;		//	0 : Bitmap Cache / 1 : Driver Mode (Driver Mod could not support 2.0 to be updated.) �⺻��=0
	UINT32					nViewOnly;			//	ȭ�� ������ ���� (1 : ������ / 0 : ���) �⺻��=0
	UINT32					nLocation;			//	���ݸ�� ������ (0 : Ŭ���̾�Ʈ ������ / 1 : �ѱ��� / 2 : ���� / 3 : �Ͼ� / �߱��ü : 4 / �߱����ü : 5) �⺻��=0

	void SetEmpty()
	{
		strSvrAddress.empty();
		strSvrPort.empty();
		strAlertMsg.empty();
		strModuleVersion.empty();
		strDownloadInfo.empty();
		strHash.empty();
		nAlertType			= 0;
		nConnectMode		= 0;
		nViewOnly			= 0;
		nLocation			= 0;
	}

	_mem_ctrl_remote_ctrl()
	{
		SetEmpty();
	}

}MEM_CTRL_REMOTE_CTRL, *PMEM_CTRL_REMOTE_CTRL;

typedef list<MEM_CTRL_REMOTE_CTRL>			TListMemCtrlRemoteCtrl;
typedef TListMemCtrlRemoteCtrl::iterator	TListMemCtrlRemoteCtrlItor;

typedef map<UINT32, MEM_CTRL_REMOTE_CTRL>	TMapMemCtrlRemoteCtrl;
typedef TMapMemCtrlRemoteCtrl::iterator		TMapMemCtrlRemoteCtrlItor;

#endif //MEM_CTRL_REMOTE_CTRL_H_4D39CDDB_CTL_E289_4d56_9F98_FE42776F4467


