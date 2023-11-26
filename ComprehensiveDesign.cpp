/*#include <wx/wx.h>

class MyFrame : public wxFrame
{
public:
	MyFrame() : wxFrame(NULL, wxID_ANY, "Draw Triangle with Perpendicular Line and Text")
	{
		SetSize(800, 600);//边框大小 长 宽
		Bind(wxEVT_LEFT_DOWN, &MyFrame::OnLeftDown, this);

	}

	void OnPaint(wxPaintEvent& event)
	{
		wxPaintDC dc(this);

		dc.SetBackground(*wxWHITE_BRUSH);
		dc.Clear();

	}

	void OnLeftDown(wxMouseEvent& event)
	{
		wxPoint pos = event.GetPosition();//捕捉鼠标位置
		wxClientDC dc(this);

		dc.DrawLine(pos.x-16, pos.y+8, pos.x+16, pos.y+8);//电容器 上半 水平 部分
		dc.DrawLine(pos.x-16, pos.y-8, pos.x+16, pos.y-8);//电容器 下半 水平 部分
		dc.DrawLine(pos.x ,  pos.y+8, pos.x ,  pos.y+40);//电容器 上半 竖直 部分
		dc.DrawLine(pos.x,   pos.y-8, pos.x,  pos.y-40);//电容器 下半 竖直 部分
		dc.DrawText("C", pos.x-3, pos.y-8);
	}

	DECLARE_EVENT_TABLE()
};

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
EVT_PAINT(MyFrame::OnPaint)
END_EVENT_TABLE()

class MyApp : public wxApp
{
public:
	virtual bool OnInit()
	{
		MyFrame* frame = new MyFrame();
		frame->Show(true);
		return true;
	}
};
*/

#include "wxFormBuilder.h"

///////////////////////////////////////////////////////////////////////////

wxBEGIN_EVENT_TABLE(MyFrame1, wxFrame)
EVT_PAINT(MyFrame1::OnPaint)
EVT_MENU(wxID_ANY, MyFrame1::OnAddD_Dual_CommonCathod_KAA_Split)
EVT_MENU(wxID_ANY, MyFrame1::OnAddGND)
EVT_MENU(wxID_ANY, MyFrame1::OnAddBattery)
wxEND_EVENT_TABLE()


MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{

	Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(MyFrame1::OnLeftDown));

	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	m_menubar1 = new wxMenuBar(0);
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加连线")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem1);

	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加总线")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem2);

	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加总线入口")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem3);

	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加一个不连接标志")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem4);

	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加结点")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem5);

	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加文本")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem6);

	wxMenuItem* m_menuItem7;
	m_menuItem7 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加矩形")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem7);

	wxMenuItem* m_menuItem8;
	m_menuItem8 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加圆形")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem8);

	wxMenuItem* m_menuItem9;
	m_menuItem9 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("添加圆弧")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem9);

	m_menu2 = new wxMenu();



	m_menubar1->Append(m_menu1, wxT("放置"));
	m_menubar1->Append(m_menu2, wxT("元器件"));

	wxMenuItem* m_menuItem10;
	m_menuItem10 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("D_Dual_CommonCathod_KAA_Split")), wxEmptyString, wxITEM_NORMAL);
	m_menu2->Append(m_menuItem10);

	wxMenuItem* m_menuItem11;
	m_menuItem11 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("GND")), wxEmptyString, wxITEM_NORMAL);
	m_menu2->Append(m_menuItem11);

	wxMenuItem* m_menuItem12;
	m_menuItem12 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("Battery")), wxEmptyString, wxITEM_NORMAL);
	m_menu2->Append(m_menuItem12);

	wxMenuItem* m_menuItem13;
	m_menuItem13 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("Capacitor")), wxEmptyString, wxITEM_NORMAL);
	m_menu2->Append(m_menuItem13);


	Connect(m_menuItem10->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame1::OnAddD_Dual_CommonCathod_KAA_Split));
	Connect(m_menuItem11->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame1::OnAddGND));
	Connect(m_menuItem12->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame1::OnAddBattery));
	Connect(m_menuItem13->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame1::OnAddCapacitor));

	this->SetMenuBar(m_menubar1);


	this->Centre(wxBOTH);

}

MyFrame1::~MyFrame1()
{
}
IMPLEMENT_APP(MyApp)



void MyFrame1::OnAddD_Dual_CommonCathod_KAA_Split(wxCommandEvent& event)
{
	drawD = true;
	drawG = false;
	drawB = false;
	drawC = false;
}

void MyFrame1::OnAddGND(wxCommandEvent& event) {
	drawD = false;
	drawG = true;
	drawB = false;
	drawC = false;
}

void MyFrame1::OnAddBattery(wxCommandEvent& event) {
	drawD = false;
	drawG = false;
	drawB = true;
	drawC = false;
}
void MyFrame1::OnAddCapacitor(wxCommandEvent& event) {
	drawD = false;
	drawG = false;
	drawB = false;
	drawC = true;
}
void MyFrame1::OnLeftDown(wxMouseEvent& event)
{
	if (!m_isDrawing && (drawD || drawG || drawB || drawC)) {
		m_startPos = event.GetPosition();
		m_isDrawing = true;
	}
	if (m_isDrawing && drawD) {
		m_startPos = event.GetPosition();
		wxClientDC dc(this);
		int x = m_startPos.x;
		int y = m_startPos.y;
		std::vector<wxPoint> triangle;
		triangle.push_back(wxPoint(x - 25, y - 25));
		triangle.push_back(wxPoint(x - 25, y + 25));
		triangle.push_back(wxPoint(x + 21.1, y));
		wxPen pen1 = *wxRED_PEN;
		wxPen pen2 = *wxRED_PEN;
		pen1.SetWidth(3);
		dc.SetPen(pen1);
		dc.SetBrush(*wxTRANSPARENT_BRUSH);
		dc.DrawPolygon(3, triangle.data(), triangle.size());
		dc.DrawLine(x + 25, y - 25, x + 25, y + 25);
		dc.SetPen(pen2);
		dc.DrawLine(x - 60, y, x + 60, y);
		dc.DrawCircle(x - 60, y, 5);
		dc.DrawCircle(x + 60, y, 5);
		dc.SetTextForeground(*wxRED);
		wxFont font(28, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("SimHei"));
		dc.SetFont(font);
		dc.DrawText("2", x - 50, y - 40);
		dc.DrawText("1", x + 30, y - 40);
		dc.SetTextForeground(*wxCYAN);
		dc.DrawText("D", x - 7, y - 60);
		dc.DrawText("D_Dual_CommonCathode_KAA_Split", x - 250, y + 50);
		drawD = false;
	}
	if (m_isDrawing && drawG) {
		wxPoint pos = event.GetPosition();
		wxClientDC dc(this);
		wxPoint triangle[3];
		triangle[0] = wxPoint(pos.x - 25, pos.y);
		triangle[1] = wxPoint(pos.x + 25, pos.y);
		triangle[2] = wxPoint(pos.x, pos.y + 23);
		wxPen pen = *wxRED_PEN;
		pen.SetWidth(3);
		dc.SetPen(pen);
		dc.SetBrush(*wxTRANSPARENT_BRUSH);
		dc.DrawPolygon(3, triangle);
		wxPoint midPoint;
		midPoint.x = (triangle[0].x + triangle[1].x) / 2;
		midPoint.y = triangle[0].y;
		dc.DrawLine(midPoint.x, midPoint.y - 43, midPoint.x, triangle[2].y - 23);
		wxFont font(28, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("SimHei"));
		dc.SetFont(font);
		dc.DrawText("GND", triangle[2].x - 27, triangle[2].y + 10);
		drawG = false;
	}
	if (m_isDrawing && drawB) {
		m_startPos = event.GetPosition();
		wxClientDC dc(this);
		int x = m_startPos.x;
		int y = m_startPos.y;
		// 设置画笔颜色为红色
		dc.SetPen(wxPen(wxColor(255, 0, 0), 3)); // 使用红色画笔,粗为3
		// 绘制自定义长度的线条
		dc.DrawLine(x - 23, y, x + 23, y); // 在指定的起始点和结束点画一条横线
		dc.SetPen(wxPen(wxColor(255, 0, 0), 5)); // 使用红色画笔,粗为5
		dc.DrawLine(x - 15, y + 10, x + 15, y + 10); // 在指定的起始点和结束点画一条横线
		dc.SetPen(wxPen(wxColor(255, 0, 0), 1)); // 使用红色画笔,粗为1
		dc.DrawLine(x, y - 30, x, y); // 在指定的起始点和结束点画一条横线
		dc.DrawLine(x, y + 10, x, y + 30); // 在指定的起始点和结束点画一条横线
		// 画两个空心小圆圈
		int circleRadius = 5; // 圆的半径
		dc.SetBrush(*wxTRANSPARENT_BRUSH); // 设置画刷为空心
		// 在竖线两端绘制空心小圆圈
		dc.SetPen(wxPen(wxColor(255, 0, 0), 1)); // 使用红色画笔, 粗为3
		// 左侧端点圆圈
		dc.DrawEllipse(x - circleRadius, y - 30 - circleRadius, circleRadius * 2, circleRadius * 2);
		// 右侧端点圆圈
		dc.DrawEllipse(x - circleRadius, y + 30 - circleRadius, circleRadius * 2, circleRadius * 2);
		wxString text = "无缘";
		dc.SetTextForeground(wxColor(0, 0, 255)); // 设置文本颜色为蓝
		// 左侧断点处的文字
		wxCoord textWidth, textHeight;
		dc.GetTextExtent(text, &textWidth, &textHeight);
		int textX = x + 5 - textWidth / 2;
		int textY = y - 30 - textHeight / 2;
		dc.DrawRotatedText(text, textX, textY, 90); // 90度旋转文本，使其垂直于竖线
		// 右侧断点处的文字
		textY = y + 70 - textHeight / 2;
		dc.DrawRotatedText(text, textX, textY, 90); // 90度旋转文本，使其垂直于竖线
		wxString text1 = "BT";
		dc.GetTextExtent(text1, &textWidth, &textHeight);
		dc.DrawRotatedText(text1, x + 40 - textWidth / 2, y - 10 - textHeight / 2, 0);
		wxString text2 = "Battery_Cell";
		dc.GetTextExtent(text2, &textWidth, &textHeight);
		dc.DrawRotatedText(text2, x + 60 - textWidth / 2, y + 10 - textHeight / 2, 0);
		// 创建字体对象，并设置为加粗
		wxFont font = dc.GetFont(); // 获取当前字体设置
		font.SetWeight(wxFONTWEIGHT_MAX); // 设置加粗
		dc.SetFont(font); // 应用新的字体设置
		dc.SetTextForeground(wxColor(255, 0, 0)); // 设置文本颜色为红色
		wxString text3 = "+";
		dc.GetTextExtent(text3, &textWidth, &textHeight);
		dc.DrawRotatedText(text3, x + 5 - textWidth / 2, y - 10 - textHeight / 2, 0);
		drawB = false;
	}
	if (m_isDrawing && drawC) {
		wxPoint pos = event.GetPosition();//捕捉鼠标位置
		wxClientDC dc(this);

		dc.DrawLine(pos.x - 16, pos.y + 8, pos.x + 16, pos.y + 8);//电容器 上半 水平 部分
		dc.DrawLine(pos.x - 16, pos.y - 8, pos.x + 16, pos.y - 8);//电容器 下半 水平 部分
		dc.DrawLine(pos.x, pos.y + 8, pos.x, pos.y + 40);//电容器 上半 竖直 部分
		dc.DrawLine(pos.x, pos.y - 8, pos.x, pos.y - 40);//电容器 下半 竖直 部分
		dc.DrawText("C", pos.x - 3, pos.y - 8);
		drawC = false;
	}

}



bool MyApp::OnInit()
{
	if (!wxApp::OnInit())
		return false;
	MyFrame1* dlg = new MyFrame1(NULL);
	dlg->Show();
	return true;
}