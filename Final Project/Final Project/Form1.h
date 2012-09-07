#pragma once


namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		int denominator;
		int numerator;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
			 Random random;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"balloons.png";
			this->pictureBox1->Location = System::Drawing::Point(287, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 70);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(214, 388);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(214, 414);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Throw Dart";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(318, 348);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(8, 32);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImageLocation = L"line.png";
			this->pictureBox3->Location = System::Drawing::Point(1, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(630, 32);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 446);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Balloons";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: void createBalloons() {
			 int fraction = random.Next(10);
			 switch (fraction) {
				 case 1:
					 this->numerator = 1;
					 this->denominator = 5;
					 break;
				 case 2:
					 this->numerator = 1;
					 this->denominator = 4;
					 break;
				 case 3:
					 this->numerator = 1;
					 this->denominator = 3;
					 break;
				 case 4:
					 this->numerator = 2;
					 this->denominator = 5;
					 break;
				 case 5:
					 this->numerator = 1;
					 this->denominator = 2;
					 break;
				 case 6:
					 this->numerator = 3;
					 this->denominator = 5;
					 break;
				 case 7:
					 this->numerator = 2;
					 this->denominator = 3;
					 break;
				 case 8:
					 this->numerator = 3;
					 this->denominator = 4;
					 break;
				 case 9:
					 this->numerator = 4;
					 this->denominator = 5;
			 }
			 this->textBox1->Text = "1";
			 this->textBox2->Text = "2";
			 this->pictureBox1->Location = System::Drawing::Point((int)((float)(this->numerator) / this->denominator * 630), 38);
			 this->pictureBox1->ImageLocation = L"balloons.png";
			 this->Update();
		 }
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->createBalloons();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			 System::Int32 result;
			 if (!(Int32::TryParse(this->textBox1->Text, result)) || !(Int32::TryParse(this->textBox2->Text, result)) || Int32::Parse(this->textBox2->Text) == 0) {
				 return;
			 }
			 this->pictureBox2->Location = System::Drawing::Point((int)((float)(Int32::Parse(this->textBox1->Text)) / Int32::Parse(this->textBox2->Text) * 630 + 28), 348);
			 this->pictureBox2->Show();
			 this->Update();
			 for (int i = 0; i < 125; i++) {
				this->pictureBox2->Location -= System::Drawing::Size(0, 2);
				this->Update();
				Sleep(1);
			 }
			 if (Math::Abs(Single::Parse(this->textBox1->Text) / Single::Parse(this->textBox2->Text) - (float)this->numerator / this->denominator) < 0.05) {
				this->pictureBox1->Load("pop.png");
				this->pictureBox2->Hide();
				this->Update();
				System::Media::SoundPlayer("pop.wav").Play();
				Sleep(2000);
				this->createBalloons();
			 } else {
				for (int i = 0; i < 65; i++) {
					this->pictureBox2->Location -= System::Drawing::Size(0, 2);
					this->Update();
					Sleep(1);
				}
			 }
		 }
};
}

