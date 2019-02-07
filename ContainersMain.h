/***************************************************************
 * Name:      ContainersMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2017-05-06
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef CONTAINERSMAIN_H
#define CONTAINERSMAIN_H

//(*Headers(ContainersDialog)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/radiobut.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class ContainersDialog: public wxDialog
{
    public:

        ContainersDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~ContainersDialog();

    private:

        //(*Handlers(ContainersDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnInit(wxInitDialogEvent& event);
        void OnRadioButton1Select(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnNotebook1PageChanged(wxNotebookEvent& event);
        //*)

        //(*Identifiers(ContainersDialog)
        static const long ID_RADIOBUTTON1;
        static const long ID_RADIOBUTTON2;
        static const long ID_RADIOBUTTON3;
        static const long ID_RADIOBUTTON4;
        static const long ID_RADIOBUTTON5;
        static const long ID_RADIOBUTTON6;
        static const long ID_RADIOBUTTON7;
        static const long ID_RADIOBUTTON8;
        static const long ID_STATICTEXT1;
        static const long ID_SPINCTRL1;
        static const long ID_STATICTEXT4;
        static const long ID_SPINCTRL2;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_PANEL1;
        static const long ID_PANEL2;
        static const long ID_NOTEBOOK1;
        //*)

        //(*Declarations(ContainersDialog)
        wxRadioButton* InsertBack;
        wxStaticText* ListTime;
        wxNotebook* Notebook1;
        wxStaticText* VectorTime;
        wxRadioButton* Sort;
        wxSpinCtrl* SpinCtrl1;
        wxRadioButton* InsertBegin;
        wxStaticText* StaticText2;
        wxRadioButton* RadioButton5;
        wxButton* Button1;
        wxRadioButton* RadioButton4;
        wxRadioButton* LinearSearch;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxStaticText* StaticText5;
        wxSpinCtrl* SpinCtrl2;
        wxStaticText* DequeTime;
        wxPanel* Panel2;
        wxRadioButton* Clear;
        wxStaticText* StaticText4;
        wxRadioButton* RemovEnd;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CONTAINERSMAIN_H
