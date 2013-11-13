/* peliberr.cpp --

   This file is part of the "PE Maker".

   Copyright (C) 2005-2006 Ashkbiz Danehkar
   All Rights Reserved.

   "PE Maker" library are free software; you can redistribute them
   and/or modify them under the terms of the GNU General Public License as
   published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYRIGHT.TXT.
   If not, write to the Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   yodap's Forum:
   http://yodap.sourceforge.net/forum/

   yodap's Site:
   http://yodap.has.it
   http://yodap.cjb.net
   http://yodap.sourceforge.net

   Ashkbiz Danehkar
   <ashkbiz@yahoo.com>
*/

#include "PELibErr.h"

const char *szErrorMsg[]=
{	"",
	"File access error :(",										// MemErr
	"Invalid PE file!",											// PEErr
	"Not enough memory :(",										// FileErr
	"Files with a filesize of 0 aren't allowed!",				// NoRoom4SectionErr
	"There's no room for a new section :(",						// FsizeErr
	"Too many sections!",										// SecNumErr
	"Too much ImageImportDescriptors!",							// IIDErr	
	"File already was protected!",								// FileISProtect
	"Invalid PE file! It might be protected by another tool.",	// PEnotValid	
	"This Version does not support COM Runtime structure.",		// PEisCOMRuntime
	"This Version does not support dynamic link library.",		// DLLnotSupport
	"This Version does not support windows driver model.",		// WDMnotSupport
	"This Version does not support terminal server aware.",		// TServernotSupport
	"This Version does not support system file.",				// SYSnotSupport
	"No SE handler resides in this PE.",						// NOSEHnotSupport	
	"Can not support PE file with no bind.",					// NOBINDnotSupport
	"Section's Name is not recognized :("						// PackSectionName	
};

void ShowErr(unsigned char numErr);

//----------------------------------------------------------------
//----- ERROR MESSAGES ----
//The ShowErr display message by receiving its Error Number
void ShowErr(unsigned char numErr)
{
	//char *szErr=new TCHAR[64];
	//strcpy(szErr,szErrorMsg[numErr]);
	//MessageBox(GetActiveWindow(),szErr,
	//		   "Error", 
	//		   MB_OK | MB_ICONERROR );
}	