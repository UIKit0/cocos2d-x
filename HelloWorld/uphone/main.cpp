// Application main file.
 
// Original file name: cocosTemplateEntry.cpp
// Generated by TOPS Builder:Project wizard,Date:2010-09-27

// uphone header
#include "TG3.h"
// cocos2d
#include "cocos2d.h"
// game
#include "AppDelegate.h"


Int32 TG3AppMain(const TUChar * pAppID, UInt32 nCmd, void * pCmdParam)
{
	AppDelegate app;

	// on uphone emulator, we copy resources files to Work7/TG3/APP/ folder instead of zip file
#ifndef _TRANZDA_VM_  
 	cocos2d::CCFileUtils::setResource("HelloWorld.zip");
#endif

	app.Run();

	return 1;
}

