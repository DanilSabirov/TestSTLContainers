/***************************************************************
 * Name:      ContainersMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2017-05-06
 * Copyright:  ()
 * License:
 **************************************************************/

#include <string>
#include "ContainersMain.h"
#include <wx/msgdlg.h>
#include <mathplot.h>
#include "VectorControl.h"
#include "ListControl.h"
#include "DequeControl.h"
#include "Benchmark.h"
#include <stdint.h>
#include <math.h>
//#include <unistd.h>

//(*InternalHeaders(ContainersDialog)
#include <wx/string.h>
#include <wx/intl.h>
//*)

/*#ifdef _WIN32
    #include <windows.h>

    void sleep(unsigned milliseconds)
    {
        Sleep(milliseconds);
    }
#else
    #include <unistd.h>

    void sleep(unsigned milliseconds)
    {
        usleep(milliseconds * 1000); // takes microseconds
    }
#endif
*/
//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(ContainersDialog)
const long ContainersDialog::ID_RADIOBUTTON1 = wxNewId();
const long ContainersDialog::ID_RADIOBUTTON2 = wxNewId();
const long ContainersDialog::ID_RADIOBUTTON6 = wxNewId();
const long ContainersDialog::ID_RADIOBUTTON7 = wxNewId();
const long ContainersDialog::ID_RADIOBUTTON8 = wxNewId();
const long ContainersDialog::ID_STATICTEXT1 = wxNewId();
const long ContainersDialog::ID_SPINCTRL1 = wxNewId();
const long ContainersDialog::ID_STATICTEXT4 = wxNewId();
const long ContainersDialog::ID_SPINCTRL2 = wxNewId();
const long ContainersDialog::ID_BUTTON1 = wxNewId();
const long ContainersDialog::ID_STATICTEXT2 = wxNewId();
const long ContainersDialog::ID_STATICTEXT3 = wxNewId();
const long ContainersDialog::ID_STATICTEXT5 = wxNewId();
const long ContainersDialog::ID_STATICTEXT6 = wxNewId();
const long ContainersDialog::ID_STATICTEXT7 = wxNewId();
const long ContainersDialog::ID_STATICTEXT8 = wxNewId();
const long ContainersDialog::ID_PANEL1 = wxNewId();
const long ContainersDialog::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ContainersDialog,wxDialog)
    //(*EventTable(ContainersDialog)
    //*)
END_EVENT_TABLE()

ContainersDialog::ContainersDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ContainersDialog)
    wxStaticBoxSizer* StaticBoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* List;
    wxStaticBoxSizer* StaticBoxSizer5;
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer2;
    wxStaticBoxSizer* StaticBoxSizer3;
    wxBoxSizer* BoxSizer9;
    wxBoxSizer* BoxSizer4;
    wxStaticBoxSizer* StaticBoxSizer4;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer6;
    wxStaticBoxSizer* StaticBoxSizer1;

    Create(parent, wxID_ANY, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("wxID_ANY"));
    SetClientSize(wxSize(852,491));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    Test = new wxNotebook(this, ID_NOTEBOOK1, wxDefaultPosition, wxSize(858,452), 0, _T("ID_NOTEBOOK1"));
    Panel1 = new wxPanel(Test, ID_PANEL1, wxPoint(291,184), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer5 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Operations"));
    InsertBack = new wxRadioButton(Panel1, ID_RADIOBUTTON1, _("Insertion at the end of the container"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    StaticBoxSizer5->Add(InsertBack, 1, wxALL|wxALIGN_LEFT, 5);
    InsertBegin = new wxRadioButton(Panel1, ID_RADIOBUTTON2, _("Insertion at the begin of the container"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
    StaticBoxSizer5->Add(InsertBegin, 1, wxALL|wxALIGN_LEFT, 5);
    Sort = new wxRadioButton(Panel1, ID_RADIOBUTTON6, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON6"));
    StaticBoxSizer5->Add(Sort, 1, wxALL|wxEXPAND, 5);
    LinearSearch = new wxRadioButton(Panel1, ID_RADIOBUTTON7, _("Linear Search"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON7"));
    StaticBoxSizer5->Add(LinearSearch, 1, wxALL|wxEXPAND, 5);
    Clear = new wxRadioButton(Panel1, ID_RADIOBUTTON8, _("Clear"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON8"));
    StaticBoxSizer5->Add(Clear, 1, wxALL|wxEXPAND, 5);
    BoxSizer3->Add(StaticBoxSizer5, 2, wxALL|wxEXPAND, 5);
    StaticBoxSizer4 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Options"));
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Data size"), wxDefaultPosition, wxSize(82,17), 0, _T("ID_STATICTEXT1"));
    BoxSizer4->Add(StaticText1, 1, wxALL|wxALIGN_TOP, 5);
    SpinCtrl1 = new wxSpinCtrl(Panel1, ID_SPINCTRL1, _T("4"), wxDefaultPosition, wxDefaultSize, 0, 4, 100000, 4, _T("ID_SPINCTRL1"));
    SpinCtrl1->SetValue(_T("4"));
    BoxSizer4->Add(SpinCtrl1, 1, wxALL|wxALIGN_TOP, 5);
    StaticBoxSizer4->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Amount of elements"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    BoxSizer7->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SpinCtrl2 = new wxSpinCtrl(Panel1, ID_SPINCTRL2, _T("1"), wxDefaultPosition, wxDefaultSize, 0, 1, 10000000, 1, _T("ID_SPINCTRL2"));
    SpinCtrl2->SetValue(_T("1"));
    BoxSizer7->Add(SpinCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer4->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Start"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer8->Add(Button1, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer4->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
    BoxSizer3->Add(StaticBoxSizer4, 2, wxALL|wxEXPAND, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
    List = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("vector"));
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Number of cycles"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    BoxSizer6->Add(StaticText2, 1, wxALL|wxALIGN_TOP, 5);
    VectorTime = new wxStaticText(Panel1, ID_STATICTEXT3, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    BoxSizer6->Add(VectorTime, 1, wxALL|wxALIGN_TOP, 5);
    StaticBoxSizer1->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
    List->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("list"));
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Number of cycles"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    BoxSizer9->Add(StaticText4, 1, wxALL|wxALIGN_TOP, 5);
    ListTime = new wxStaticText(Panel1, ID_STATICTEXT6, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    BoxSizer9->Add(ListTime, 1, wxALL|wxALIGN_TOP, 5);
    StaticBoxSizer2->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
    List->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("deque"));
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Number of cycles"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    BoxSizer10->Add(StaticText5, 1, wxALL|wxALIGN_TOP, 5);
    DequeTime = new wxStaticText(Panel1, ID_STATICTEXT8, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    BoxSizer10->Add(DequeTime, 1, wxALL|wxALIGN_TOP, 5);
    StaticBoxSizer3->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
    List->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer2->Add(List, 1, wxALL|wxEXPAND, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    Test->AddPage(Panel1, wxEmptyString, false);
    BoxSizer1->Add(Test, 2, wxALL|wxEXPAND, 5);
    SetSizer(BoxSizer1);
    SetSizer(BoxSizer1);
    Layout();

    Connect(ID_RADIOBUTTON1,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&ContainersDialog::OnRadioButton1Select);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ContainersDialog::OnButton1Click);

    Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&ContainersDialog::OnInit);
    //*)
}

ContainersDialog::~ContainersDialog()
{
    //(*Destroy(ContainersDialog)
    //*)
}

void ContainersDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ContainersDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void ContainersDialog::OnInit(wxInitDialogEvent& event)
{
}

void ContainersDialog::OnRadioButton1Select(wxCommandEvent& event)
{
}

void ContainersDialog::OnTextCtrl1Text(wxCommandEvent& event)
{
}

std::string StringUpdate(std::string str){
    std::string out;
    for(int i = str.size() - 1, k = 1; i >= 0; i--, k++){
        out += str[i];
        if(k % 3 == 0 && i != 0){
            out += " ";
        }
    }
    std::reverse(out.begin(), out.end());
    return out;
}

void ContainersDialog::OnButton1Click(wxCommandEvent& event)
{
    unsigned long long rep = 10, sizedata = SpinCtrl1->GetValue() - 4, element = SpinCtrl2->GetValue(), averageV = 0, averageD = 0, averageL = 0;

    if(InsertBack->GetValue()){
        {

            for(int i = 0; i < rep; i++){
                DequeControl *dc = new DequeControl(sizedata);
                Benchmark *bench = new Benchmark(dc);
                unsigned long long test = bench->BenchInsertElementsBack(element);
                averageD += test;
                delete dc, bench;
            }
        }

        {
            for(int i = 0; i < rep; i++){
                ListControl *lc = new ListControl(sizedata);
                Benchmark *bench = new Benchmark(lc);
                unsigned long long test = bench->BenchInsertElementsBack(element);
                averageL += test;
                delete lc, bench;
            }
        }

        {
            for(int i = 0; i < rep; i++){
                VectorControl *vc = new VectorControl(sizedata);
                Benchmark *bench = new Benchmark(vc);
                unsigned long long test = bench->BenchInsertElementsBack(element);
                averageV += test;
                delete vc, bench;
            }
        }

    }else if(InsertBegin->GetValue()){
        {

            for(int i = 0; i < rep; i++){
                VectorControl *vc = new VectorControl(sizedata);
                Benchmark *bench = new Benchmark(vc);
                unsigned long long test = bench->BenchInsertElementsFront(element);
                averageV += test;
                delete vc, bench;
            }
        }
        {

            for(int i = 0; i < rep; i++){
                ListControl *lc = new ListControl(sizedata);
                Benchmark *bench = new Benchmark(lc);
                unsigned long long test = bench->BenchInsertElementsFront(element);
                averageL += test;
                delete lc, bench;
            }
        }
        {

            for(int i = 0; i < rep; i++){
                DequeControl *dc = new DequeControl(sizedata);
                Benchmark *bench = new Benchmark(dc);
                unsigned long long test = bench->BenchInsertElementsFront(element);
                averageD += test;
                delete dc, bench;
            }
        }
    }else if(Sort->GetValue()){
        {
            for(int i = 0; i < rep; i++){
                VectorControl *vc = new VectorControl(sizedata);
                Benchmark *bench = new Benchmark(vc);
                unsigned long long test = bench->BenchSort(element);
                averageV += test;
                delete vc, bench;
            }
        }
        {
            for(int i = 0; i < rep; i++){
                ListControl *lc = new ListControl(sizedata);
                Benchmark *bench = new Benchmark(lc);
                unsigned long long test = bench->BenchSort(element);
                averageL += test;
                delete lc, bench;
            }
        }
        {
            for(int i = 0; i < rep; i++){
                DequeControl *dc = new DequeControl(sizedata);
                Benchmark *bench = new Benchmark(dc);
                unsigned long long test = bench->BenchSort(element);
                averageD += test;
                delete dc, bench;
            }
        }
    }else if(LinearSearch->GetValue()){
        unsigned long long time = std::time(0);
        {
            for(int i = 0; i < rep; i++){
                VectorControl *vc = new VectorControl(sizedata, time);
                Benchmark *bench = new Benchmark(vc);
                unsigned long long test = bench->BenchLinearSearch(element);
                averageV += test;
                delete vc, bench;
            }
        }
        {
            for(int i = 0; i < rep; i++){
                ListControl *lc = new ListControl(sizedata, time);
                Benchmark *bench = new Benchmark(lc);
                unsigned long long test = bench->BenchLinearSearch(element);
                averageL += test;
                delete lc, bench;
            }
        }
        {

            for(int i = 0; i < rep; i++){
                DequeControl *dc = new DequeControl(sizedata, time);
                Benchmark *bench = new Benchmark(dc);
                unsigned long long test = bench->BenchLinearSearch(element);
                averageD += test;
                delete dc, bench;
            }
        }
    }else if(Clear->GetValue()){
        unsigned long long time = std::time(0);
        {
            for(int i = 0; i < rep; i++){
                VectorControl *vc = new VectorControl(sizedata);
                Benchmark *bench = new Benchmark(vc);
                unsigned long long test = bench->BenchClear(element);
                averageV += test;
                delete vc, bench;
            }
        }
        {
            for(int i = 0; i < rep; i++){
                ListControl *lc = new ListControl(sizedata);
                Benchmark *bench = new Benchmark(lc);
                unsigned long long test = bench->BenchClear(element);
                averageL += test;
                delete lc, bench;
            }
        }
        {
            for(int i = 0; i < rep; i++){
                DequeControl *dc = new DequeControl(sizedata);
                Benchmark *bench = new Benchmark(dc);
                unsigned long long test = bench->BenchClear(element);
                averageD += test;
                delete dc, bench;
            }
        }
    }

    std::string str = std::to_string(averageV / rep);
    VectorTime->SetLabel(StringUpdate(str));

    str = std::to_string(averageL / rep);
    ListTime->SetLabel(StringUpdate(str));

    str = std::to_string(averageD / rep);
    DequeTime->SetLabel(StringUpdate(str));
}

