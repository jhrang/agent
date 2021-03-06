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


#ifndef COM_DEFINE_PO_FA_OP_H_938EF200_F60B_452A_BD30_A10E8507EDCC
#define COM_DEFINE_PO_FA_OP_H_938EF200_F60B_452A_BD30_A10E8507EDCC

//-------------------------------------------------------------------
//fa unit type
#define SS_PO_FA_OP_UNIT_TYPE_OBJECT				0
#define SS_PO_FA_OP_UNIT_TYPE_SUBJECT				1


//-------------------------------------------------------------------
//fa log mode
#define SS_PO_FA_LOG_TYPE_ALLOW						0
#define SS_PO_FA_LOG_TYPE_DENY						1

#define SS_PO_FA_LOG_OP_TYPE_RENEXT					0x00000800
#define SS_PO_FA_LOG_OP_TYPE_FILELOG				0x00000400
#define SS_PO_FA_LOG_OP_TYPE_TKILL					0x00000200
#define SS_PO_FA_LOG_OP_TYPE_PEND					0x00000100
#define SS_PO_FA_LOG_OP_TYPE_HIDE					0x00000080
#define SS_PO_FA_LOG_OP_TYPE_PROCKILL				0x00000040
#define SS_PO_FA_LOG_OP_TYPE_CREATE					0x00000020
#define SS_PO_FA_LOG_OP_TYPE_DELETE					0x00000010
#define SS_PO_FA_LOG_OP_TYPE_RENAME					0x00000008
#define SS_PO_FA_LOG_OP_TYPE_READ					0x00000004
#define SS_PO_FA_LOG_OP_TYPE_WRITE					0x00000002
#define SS_PO_FA_LOG_OP_TYPE_EXEC					0x00000001
#define SS_PO_FA_LOG_OP_TYPE_NONE					0x00000000

//-------------------------------------------------------------------
//fa perm
#define SS_PO_FA_PERM_RENEXT						0x00000800
#define SS_PO_FA_PERM_FILELOG						0x00000400
#define SS_PO_FA_PERM_TKILL							0x00000200
#define SS_PO_FA_PERM_PEND							0x00000100
#define SS_PO_FA_PERM_HIDE							0x00000080
#define SS_PO_FA_PERM_PROCKILL						0x00000040
#define SS_PO_FA_PERM_CREATE						0x00000020
#define SS_PO_FA_PERM_DELETE						0x00000010
#define SS_PO_FA_PERM_RENAME						0x00000008
#define SS_PO_FA_PERM_READ							0x00000004
#define SS_PO_FA_PERM_WRITE							0x00000002
#define SS_PO_FA_PERM_EXEC							0x00000001
#define SS_PO_FA_PERM_NONE							0x00000000

//-------------------------------------------------------------------
//fa op ext option common 
#define SS_PO_FA_OP_EXT_OPTION_COMMON_LAST_COMP_CHECK		0x00000001

//-------------------------------------------------------------------
//fa op obj unit access path
#define SS_PO_FA_OP_OBJ_UNIT_ACCESS_PATH_LOCAL				0x00000001
#define SS_PO_FA_OP_OBJ_UNIT_ACCESS_PATH_NETWORK			0x00000002


//-------------------------------------------------------------------
//fa op sub unit subject type
#define SS_PO_FA_OP_SUB_UNIT_SUBJECT_TYPE_ANY			0x0000
#define SS_PO_FA_OP_SUB_UNIT_SUBJECT_TYPE_USER			0x0001
#define SS_PO_FA_OP_SUB_UNIT_SUBJECT_TYPE_GROUP			0x0002
#define SS_PO_FA_OP_SUB_UNIT_SUBJECT_TYPE_PROC			0x0004
#define SS_PO_FA_OP_SUB_UNIT_SUBJECT_TYPE_PG			0x0008

//-------------------------------------------------------------------
//fa op unit key type
#define SS_PO_FA_OP_UNIT_KEY_TYPE_OBJECT				0x01 // 
#define SS_PO_FA_OP_UNIT_KEY_TYPE_SUBJECT				0x02 // 
#define SS_PO_FA_OP_UNIT_KEY_TYPE_RULE					0x03 // 
#define SS_PO_FA_OP_UNIT_KEY_TYPE_SCHEDULE				0x04 // 




//--------------------------------------------------------------------
#endif	//COM_DEFINE_PO_FA_OP_H_938EF200_F60B_452A_BD30_A10E8507EDCC