#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/frame.h>
#include <vector>
#include <wx/dcclient.h>
#include <wx/dcmemory.h>
#include <wx/textdlg.h>


#include <wx/wx.h>
class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};

class MyFrame1 : public wxFrame
{
private:
	wxDECLARE_EVENT_TABLE();
	wxPoint m_startPos;
	bool m_isDrawing;
	bool drawD;
	bool drawG;
	bool drawB;
protected:
	wxMenuBar* m_menubar1;
	wxMenu* m_menu1;
	wxMenu* m_menu2;
public:

	MyFrame1(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 300), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame1();


	void OnLeftDown(wxMouseEvent& event);

	void OnAddD_Dual_CommonCathod_KAA_Split(wxCommandEvent& event);
	
	void OnAddGND(wxCommandEvent& event);

	void OnAddBattery(wxCommandEvent& event);
};