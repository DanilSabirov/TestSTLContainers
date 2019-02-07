/***************************************************************
 * Name:      ContainersApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2017-05-06
 * Copyright:  ()
 * License:
 **************************************************************/

#include "ContainersApp.h"

//(*AppHeaders
#include "ContainersMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ContainersApp);

bool ContainersApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ContainersDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
