//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("CNC.res");
USEFORM("Main.cpp", FormMain);
USEUNIT("quilt_Messages.cpp");
USEUNIT("api_VecApi.cpp");
USEUNIT("quilt_Strings.cpp");
USEFORM("About.cpp", FormAbout);
USEFORM("Simulator.cpp", FormSimulator);
USEUNIT("QuiltingLib.cpp");
USEFORM("Export.cpp", FormExport);
USEFORM("Options.cpp", FormOptions);
USEUNIT("Plugin.cpp");
USELIB("memmgr.lib");
USEUNIT("CNCLib.cpp");
USEFORM("Properties.cpp", FormProperties);
//---------------------------------------------------------------------------
void ShowVendorMessage();
#include "api_VecApi.h"
#pragma startup ShowVendorMessage 64
//---------------------------------------------------------------------------
void ShowVendorMessage()
{
//	MessageDlg(DecodeMessage(c_strForMoreInformation),mtInformation,TMsgDlgButtons()<<mbOK,0);
}
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
        // load vecad.dll
        if(vlStartup()==FALSE)
        {
            MessageDlg("VECAD52.DLL is not found",mtError,TMsgDlgButtons()<<mbOK,0);
            exit(0);
        }
        else
        {
			Application->Initialize();
			Application->CreateForm(__classid(TFormMain), &FormMain);
		Application->CreateForm(__classid(TFormAbout), &FormAbout);
		Application->CreateForm(__classid(TFormExport), &FormExport);
		Application->CreateForm(__classid(TFormOptions), &FormOptions);
		Application->CreateForm(__classid(TFormSimulator), &FormSimulator);
		Application->CreateForm(__classid(TFormProperties), &FormProperties);
		Application->Run();
        }
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	return 0;
}
//---------------------------------------------------------------------------
