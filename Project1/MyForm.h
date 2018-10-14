#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: int pos = 200;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1, 1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"ok";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::drawMyGraphics);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1615, 742);
			this->Controls->Add(this->button4);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void drawMyGraphics(System::Object^  sender, System::EventArgs^  e) {
		
		this->pos = 200;
		this->timer1->Enabled = true;

		
	}

	private: void drawStars() {
		Graphics^ g = this->CreateGraphics();

		this->drawStar(g, 189, 66, Color::Yellow);
		this->drawStar(g, 540, 24, Color::MediumPurple);
		this->drawStar(g, 406, 139, Color::Magenta);
		this->drawStar(g, 247, 290, Color::MediumOrchid);
		this->drawStar(g, 87, 234, Color::MistyRose);
		this->drawStar(g, 504, 375, Color::HotPink);
		this->drawStar(g, 124, 486, Color::LightCoral);
		this->drawStar(g, 361, 563, Color::Firebrick);
		this->drawStar(g, 1073, 44, Color::Goldenrod);
		this->drawStar(g, 1477, 51, Color::MediumSpringGreen);
		this->drawStar(g, 1281, 133, Color::Turquoise);
		this->drawStar(g, 1122, 282, Color::DarkSalmon);
		this->drawStar(g, 1319, 350, Color::YellowGreen);
		this->drawStar(g, 1152, 495, Color::CornflowerBlue);
		this->drawStar(g, 1373, 551, Color::BlueViolet);
		this->drawStar(g, 1524, 445, Color::Thistle);
	}

	private: void drawStar(Graphics^ g, int x, int y, Color c) {

		Brush^ brush = gcnew SolidBrush(c);
		Pen^ pen = gcnew Pen(c, 3.0f);
		Point point1 = Point(x, y);
		Point point2 = Point(x - 15, y + 46);
		Point point3 = Point(x - 61, y + 50);
		Point point4 = Point(x - 26, y + 79);
		Point point5 = Point(x - 38, y + 126);
		Point point6 = Point(x, y + 95);
		Point point7 = Point(x + 38, y + 126);
		Point point8 = Point(x + 26, y + 79);
		Point point9 = Point(x + 61, y + 50);
		Point point10 = Point(x + 15, y + 46);

		array<Point>^ curvePoints = { point1, point2, point3, point4, point5, point6, point7, point8, point9, point10 };
		g->DrawPolygon(pen, curvePoints);
		g->FillPolygon(brush, curvePoints);
	}
	private: void drawRocket( int x, int y) {

		Graphics^ g = this->CreateGraphics();
		Color k = Color::FromArgb(255, 180, 230, 40);
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		Brush^ brush = gcnew SolidBrush(Color::LightBlue);
		Brush^ brush1 = gcnew SolidBrush(Color::Red);
		Brush^ brush2 = gcnew SolidBrush(k);
		Brush^ brush3 = gcnew SolidBrush(Color::DeepSkyBlue);
		Brush^ brush4 = gcnew SolidBrush(Color::Orange);
		Brush^ brush5 = gcnew SolidBrush(Color::Yellow);
		Point point1 = Point(x, y);
		Point point2 = Point(x - 69, y + 115);
		Point point3 = Point(x + 69, y + 115);
		Point point4 = Point(x - 69, y + 283);
		Point point5 = Point(x - 156, y + 359);
		Point point6 = Point(x - 156, y + 504);
		Point point7 = Point(x - 69, y + 421);
		Point point8 = Point(x + 69, y + 421);
		Point point9 = Point(x + 156, y + 504);
		Point point10 = Point(x + 156, y + 356);
		Point point11 = Point(x + 69, y + 283);
		Point point12 = Point(x - 43, y + 421);
		Point point13 = Point(x + 43, y + 421);
		Point point14 = Point(x - 85, y + 504);
		Point point15 = Point(x - 39, y + 464);
		Point point16 = Point(x - 47, y + 525);
		Point point17 = Point(x - 15, y + 466);
		Point point18 = Point(x + 10, y + 519);
		Point point19 = Point(x + 28, y + 462);
		Point point20 = Point(x + 60, y + 511);
		Point point21 = Point(x - 46, y + 456);
		Point point22 = Point(x - 21, y + 434);
		Point point23 = Point(x - 25, y + 467);
		Point point24 = Point(x - 2, y + 435);
		Point point25 = Point(x + 11, y + 464);
		Point point26 = Point(x + 13, y + 434);
		Point point27 = Point(x + 32, y + 456);
		Point point30 = Point(x - 34, y + 421);
		Point point31 = Point(x + 24, y + 421);
		array<Point>^ curvePoints = { point1, point2, point3 };
		array<Point>^ curvePoints1 = { point2, point3, point8, point7 };
		array<Point>^ curvePoints2 = { point5, point4, point7, point6 };
		array<Point>^ curvePoints3 = { point11, point10, point9, point8 };
		array<Point>^ curvePoints4 = { point12, point14, point15, point16, point17, point18, point19, point20, point13 };
		array<Point>^ curvePoints5 = { point30, point21, point22, point23, point24, point25, point26, point27, point31 };
		g->FillPolygon(brush2, curvePoints);
		g->FillPolygon(brush1, curvePoints1);
		g->FillPolygon(brush3, curvePoints2);
		g->FillPolygon(brush3, curvePoints3);
		g->FillEllipse(brush, x - 36, y + 150, 70, 70);
		g->FillEllipse(brush, x - 25, y + 250, 50, 50);
		g->FillEllipse(brush, x - 15, y + 325, 30, 30);
		g->FillPolygon(brush5, curvePoints4);
		g->FillPolygon(brush4, curvePoints5);
	}


	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		this->drawStars();
		this->drawRocket(800, this->pos);
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g = this->CreateGraphics();
		Brush^ bialy = gcnew SolidBrush(Color::White);
		g->FillRectangle(bialy, 642, this->pos, 315, 525);
		this->pos -= 10;
		this->drawRocket(800, this->pos);
	}
};
}
