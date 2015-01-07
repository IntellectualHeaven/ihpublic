/*++

Copyright (c) : Pankaj Garg & www.intellectualheaven.com

Module Name:

    resource.h

Module Description:

	Resource identifier file for the CrashDoctor application

Author:

    Pankaj Garg		2004-09-26
    
Latest update:

    Pankaj Garg		2005-04-18

--*/

#ifndef _RESOURCE_H_
#define _RESOURCE_H_

#define ST_MAKE_STR(_X_)            ST_MAKE_STR_REAL(_X_)
#define ST_MAKE_STR_REAL(_X_)       #_X_

#define ST_CASTBYTE(b) ((DWORD)(b) & 0xFF)
#define ST_DWORD_VERSION(VER_MAJOR, VER_MINOR, VER_BUILD, VER_STEP) \
            (ST_CASTBYTE(VER_MAJOR) << 24 | \
             ST_CASTBYTE(VER_MINOR) << 16 | \
             ST_CASTBYTE(VER_BUILD) << 8  | \
             ST_CASTBYTE(VER_STEP))

//
// Version related information
//
#define COMPANY_NAME		"www.intellectualheaven.com\0"
#define PRODUCT_NAME		"CrashDoctor - Crash Protection Program\0"
#define LEGAL_COPYRIGHT		"Copyright (c) : www.intellectualheaven.com\0"

#define CRASH_DOCTOR_VER_MAJOR 1
#define CRASH_DOCTOR_VER_MINOR 0
#define CRASH_DOCTOR_VER_BUILD 0
#define CRASH_DOCTOR_VER_STEP  0

#define CRASH_DOCTOR_BIN_VERSION			CRASH_DOCTOR_VER_MAJOR,CRASH_DOCTOR_VER_MINOR,CRASH_DOCTOR_VER_BUILD,CRASH_DOCTOR_VER_STEP
#define CRASH_DOCTOR_STR_VERSION			CRASH_DOCTOR_VER_MAJOR.CRASH_DOCTOR_VER_MINOR.CRASH_DOCTOR_VER_BUILD.CRASH_DOCTOR_VER_STEP
#define CRASH_DOCTOR_DWORD_VERSION			ST_DWORD_VERSION(CRASH_DOCTOR_VER_MAJOR, CRASH_DOCTOR_VER_MINOR, CRASH_DOCTOR_VER_BUILD, CRASH_DOCTOR_VER_STEP)



//
// Icons
//
#define IDI_APP_ICON					201
#define IDI_APP_ICON_SM					202
#define IDI_PROCESS_ICON				203


//
// Bitmaps
//
#define IDB_IH_SYMBOL					411


//
// Dialogs & Controls
//
#define IDC_STATIC                      -1

// Main dialog
#define IDD_DIALOG_HANDLE_CRASH			801
#define IDC_BTN_RECOVER					802
#define IDC_BTN_TERMINATE				803
#define IDC_LIST_DEBUGGER				804
#define IDC_BTN_DEBUG					805
#define IDC_BTN_ADD_DEBUGGER			806
#define IDC_ICON_PROCESS				807
#define IDC_EDIT_PROCESS_NAME			808
#define IDC_BTN_MODIFY_DEBUGGER			809
#define IDC_BTN_DELETE_DEBUGGER			810

// Install/Uninstall Dialog
#define IDD_DIALOG_INSTALL				811
#define IDC_BTN_INSTALL					812
#define IDC_BTN_UNINSTALL				813
#define IDC_BTN_CLOSE					814

// Add debugger dialog
#define IDD_DIALOG_ADD_DEBUGGER			821
#define IDC_TEXT_DEBUGGER				822
#define IDC_EDIT_CMDLINE				823

// Modify debugger dialog
#define IDD_DIALOG_MODIFY_DEBUGGER		831

// Recovering status dialog
#define IDD_DIALOG_RECOVER_STATUS		841
#define	IDC_LIST_STATUS					842
// IDC_BTN_TERMINATE is re-used from Main Dialog

// About dialog
#define IDD_DIALOG_ABOUT				851


#endif

