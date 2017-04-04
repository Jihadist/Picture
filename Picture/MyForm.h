#pragma once
#include <string> 

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Text;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>

	public ref class Psycho : public System::Windows::Forms::Form
	{
		//Bitmap bitmap();
	public:
		Psycho(void)
		{
			InitializeComponent();


			//
			//TODO: добавьте код конструктора
			//
			//Bitmap^ bitmap = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Psycho()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(438, 438);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Psycho::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Psycho::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Psycho::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(456, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(456, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(456, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Visible = false;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Psycho::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(456, 154);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(456, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Top left X";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(457, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Top Left Y";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(457, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Bottom left X";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(456, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Bottom left Y";
			this->label4->Visible = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->Location = System::Drawing::Point(456, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"On";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Psycho::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->Location = System::Drawing::Point(456, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Off";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Psycho::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(497, 427);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"debug";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Psycho::button3_Click);
			// 
			// Psycho
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 462);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Psycho";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &Psycho::Psycho_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool banner = true; //Banner of reversing
		bool debinfo = false;
		int D = 36;
		int index = D;
		int color;
		unsigned char Zoom = 1; //Zoom factor
		int Interval = 50; //Interval
		int CorXRecMid1, CorXRecMid2, CorYRecMid1, CorYRecMid2; //Upper middle rectangle
		int CorXLowRecMid1, CorXLowRecMid2, CorYLowRecMid1, CorYLowRecMid2; //Lower middle rectangle
		int CorXRecLeft1, CorYRecLeft1, CorXRecLeft2, CorYRecLeft2;      //Left upper rectangles
		int CorXRecRight1, CorYRecRight1, CorXRecRight2, CorYRecRight2;  //Right upper rectangles
		int CorXLowRecLeft1, CorYLowRecLeft1, CorXLowRecLeft2, CorYLowRecLeft2;      //Left lower Rectangles
		int CorXLowRecRight1, CorYLowRecRight1, CorXLowRecRight2, CorYLowRecRight2;  //Right lower Rectangles
																					 //Pen^ EllipsePen = gcnew Pen(Color::Lime, 2);
		void ColorEllipse(int CorX1, int CorY1, int index, int color)         //Modelation of ellipses
		{

			Pen^ EllipsePen = gcnew Pen(Color::Lime, 2);
			if (color % 3 == 0)
				Pen^ EllipsePen = gcnew Pen(Color::Lime, 2);
			if (color % 3 == 1)
				Pen^ EllipsePen = gcnew Pen(Color::Yellow, 2);
			if (color % 3 == 2)
				Pen^ EllipsePen = gcnew Pen(Color::Red, 2);
			Graphics^ c = pictureBox1->CreateGraphics();
			Color White = Color::FromArgb(255, Color::White);
			SolidBrush^ EllipseBrush = gcnew SolidBrush(White);
			c->FillEllipse(EllipseBrush, CorX1, CorY1, index, index);
			c->DrawEllipse(EllipsePen, CorX1, CorY1, index, index);

		}

		void ColorRectangle(int CorX1, int CorY1, int index)        //Modelation of rectangles
		{
			Pen^ RectanglePen = gcnew Pen(Color::Black, 2);
			Graphics^ r = pictureBox1->CreateGraphics();
			Color Black = Color::FromArgb(255, Color::Black);
			SolidBrush^ RectangleBrush = gcnew SolidBrush(Black);
			r->FillRectangle(RectangleBrush, CorX1, CorY1, index, index);

		}


	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {



	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		//Graphics for lines

		Graphics^ m = pictureBox1->CreateGraphics();
		Pen^ LinePen = gcnew Pen(Color::Black, 2);
		pictureBox1->Refresh();
		//Zoom validation

		if (D >= 100) {
			banner = false;
		}
		else
			if (D <= 0)
			{
				banner = true;
			}
		if (banner == false) {
			D -= Zoom;

		}
		else
			D += Zoom;

		//Start painting

		//High middle rectangle
		CorXRecMid1 = pictureBox1->Width / 2 - D;
		CorYRecMid1 = pictureBox1->Height / 2 - 2 * D;
		Point HMRecPoint = Point(CorXRecMid1 + D, CorYRecMid1 - D); //High middle rectangle point
		Point MHRecPoint = Point(CorXRecMid1 + D, CorYRecMid1 + D); //Midpoint of high middle rectangle
		ColorRectangle(CorXRecMid1, CorYRecMid1, 2 * D);
		ColorEllipse(CorXRecMid1, CorYRecMid1, 2 * D, 3);

		//Low middle rectangle
		CorXLowRecMid1 = CorXRecMid1;
		CorYLowRecMid1 = CorYRecMid1 + 2 * D;
		Point LMRecPoint = Point(CorXLowRecMid1 + D, CorYLowRecMid1 + 3 * D); //Low middle rectangle point
		Point MLRecPoint = Point(CorXLowRecMid1 + D, CorYLowRecMid1 + D); //Midpoint of low middle rectangle
		ColorRectangle(CorXLowRecMid1, CorYLowRecMid1, 2 * D);
		ColorEllipse(CorXLowRecMid1, CorYLowRecMid1, 2 * D, 3);


		//Left rectangles
		CorXRecLeft1 = CorXRecMid1;
		CorYRecLeft1 = CorYLowRecMid1 - 2 * D;

		CorXLowRecLeft1 = CorXLowRecMid1; //
		CorYLowRecLeft1 = CorYLowRecMid1; //
		index = D;
		while (index != 0)
		{
			CorXRecLeft1 = CorXRecLeft1 - index;
			CorYRecLeft1 = CorYRecLeft1 + index;

			CorXLowRecLeft1 = CorXLowRecLeft1 - index;

			ColorRectangle(CorXRecLeft1, CorYRecLeft1, index);
			ColorRectangle(CorXLowRecLeft1, CorYLowRecLeft1, index);
			ColorEllipse(CorXRecLeft1, CorYRecLeft1, index, index);
			ColorEllipse(CorXLowRecLeft1, CorYLowRecLeft1, index, index);

			if (index == 1)
			{
				CorXRecLeft2 = CorXRecLeft1 + index - 1;
				CorYRecLeft2 = pictureBox1->Height / 2;
				Point HLRecPoint = Point(CorXRecLeft1, CorYRecLeft2); //High Left Rectangle Point

																	  //CorXLowRecLeft2 = CorXLowRecLeft1 + index;
																	  //CorYLowRecLeft2 = pictureBox1->Height / 2;
																	  //Point LLRecPoint = Point(CorXLowRecLeft1, CorYLowRecLeft1); //Low left rectangle point

				textBox1->Text = CorXRecLeft1.ToString();
				textBox2->Text = CorYRecLeft2.ToString();
				textBox3->Text = CorXLowRecLeft1.ToString();
				textBox4->Text = CorYLowRecLeft1.ToString();

				m->DrawLine(LinePen, HLRecPoint, HMRecPoint);
				m->DrawLine(LinePen, HLRecPoint, MHRecPoint);
				m->DrawLine(LinePen, HLRecPoint, LMRecPoint);
				m->DrawLine(LinePen, HLRecPoint, MLRecPoint);
			}
			index /= 2;

		}

		//Right rectangles
		index = D;
		CorXRecRight1 = CorXRecMid1;
		CorYRecRight1 = CorYRecMid1;

		CorXLowRecRight1 = CorXLowRecMid1;
		CorYLowRecRight1 = CorYLowRecMid1;

		while (index != 0)
		{
			CorXRecRight1 = CorXRecRight1 + 2 * index;
			CorYRecRight1 = CorYRecRight1 + index;

			CorXLowRecRight1 = CorXLowRecRight1 + 2 * index;

			ColorRectangle(CorXRecRight1, CorYRecRight1, index);
			ColorRectangle(CorXLowRecRight1, CorYLowRecRight1, index);
			ColorEllipse(CorXRecRight1, CorYRecRight1, index, index);
			ColorEllipse(CorXLowRecRight1, CorYLowRecRight1, index, index);
			if (index == 1)
			{
				CorXRecRight2 = CorXRecRight1 + index + 1;
				CorYRecRight2 = pictureBox1->Height / 2;

				//CorXLowRecRight2 = CorXLowRecRight1 + index;
				//CorYLowRecRight2 = pictureBox1->Height / 2;
				Point HRRecPoint = Point(CorXRecRight2, CorYRecRight2); //High Right Rectangle Point

																		//Point LRRecPoint = Point(CorXLowRecRight2, CorYLowRecRight1); //Low right rectangle point
				m->DrawLine(LinePen, HRRecPoint, HMRecPoint);
				m->DrawLine(LinePen, HRRecPoint, MHRecPoint);
				m->DrawLine(LinePen, HRRecPoint, LMRecPoint);
				m->DrawLine(LinePen, HRRecPoint, MLRecPoint);


			}
			index /= 2;
		}


	}
	private: System::Void Psycho_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = true;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (debinfo == false)
		{
			textBox1->Visible = true;
			label1->Visible = true;
			textBox2->Visible = true;
			label2->Visible = true;
			textBox3->Visible = true;
			label3->Visible = true;
			textBox4->Visible = true;
			label4->Visible = true;
			debinfo = true;
		}
		else
		{
			textBox1->Visible = false;
			label1->Visible = false;
			textBox2->Visible = false;
			label2->Visible = false;
			textBox3->Visible = false;
			label3->Visible = false;
			textBox4->Visible = false;
			label4->Visible = false;
			debinfo = false;
		}
	}
	};
}
