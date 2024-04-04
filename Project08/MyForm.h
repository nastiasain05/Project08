#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>

namespace Project08 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïðîÏðîãðàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàêðèòèToolStripMenuItem;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ïðîÏðîãðàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêðèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label1->Location = System::Drawing::Point(9, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 26);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Ââåä³òü ðîçì³ð ñòåêó";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->button3->Location = System::Drawing::Point(204, 252);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(306, 40);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Îá÷èñëèòè";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->button2->Location = System::Drawing::Point(204, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(306, 40);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Âèäàëèòè åëåìåíòè";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->button1->Location = System::Drawing::Point(204, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(306, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Äîäàòè åëåìåíò ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(282, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 22);
			this->textBox1->TabIndex = 8;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(14, 125);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(161, 179);
			this->listBox1->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ïðîÏðîãðàìóToolStripMenuItem,
					this->î÷èñòèòèToolStripMenuItem, this->çàêðèòèToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(567, 28);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ïðîÏðîãðàìóToolStripMenuItem
			// 
			this->ïðîÏðîãðàìóToolStripMenuItem->Name = L"ïðîÏðîãðàìóToolStripMenuItem";
			this->ïðîÏðîãðàìóToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->ïðîÏðîãðàìóToolStripMenuItem->Text = L"Ïðî ïðîãðàìó";
			this->ïðîÏðîãðàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïðîÏðîãðàìóToolStripMenuItem_Click);
			// 
			// î÷èñòèòèToolStripMenuItem
			// 
			this->î÷èñòèòèToolStripMenuItem->Name = L"î÷èñòèòèToolStripMenuItem";
			this->î÷èñòèòèToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->î÷èñòèòèToolStripMenuItem->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèToolStripMenuItem_Click);
			// 
			// çàêðèòèToolStripMenuItem
			// 
			this->çàêðèòèToolStripMenuItem->Name = L"çàêðèòèToolStripMenuItem";
			this->çàêðèòèToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->çàêðèòèToolStripMenuItem->Text = L"Çàêðèòè";
			this->çàêðèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàêðèòèToolStripMenuItem_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(215, 312);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(62, 16);
			this->linkLabel1->TabIndex = 14;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Àí³ìàö³ÿ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 351);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"Ëàáîðàòîðíà ðîáîòà 12";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1;
		int lastAddedValue;
		bool isQueueInitialized = false;
#pragma endregion
	private: System::Void ïðîÏðîãðàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(" Ñòâîðèòè ÷åðãó ö³ëèõ ÷èñåë. Îá÷èñëèòè ñóìó ïàðíèõ åëåìåíò³â ÷åðãè.", "Ëàáîðàòîðíà ðîáîòà 12.  Ùî ïîòð³áíî çðîáèòè?", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
private: System::Void î÷èñòèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	listBox1->Items->Clear();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isQueueInitialized)
	{
		isQueueInitialized = true;

	}
	int size = Convert::ToInt32(textBox1->Text);

	if  (myQueue1.Count < size)
	{
		String^ valueInput = Microsoft::VisualBasic::Interaction::InputBox("Ââåä³òü åëåìåíò ÷åðãè;", "Äîäàâàííÿ åëåìåíò", "0");

		if (valueInput == "")
		{
			return;
		}
		int inputValue = Convert::ToInt32(valueInput);
		myQueue1.Enqueue(inputValue);
		listBox1->Items->Add(inputValue.ToString());
		lastAddedValue = inputValue;

	}

	else
	{
		listBox1->Items->Add("Äîñÿãíóòî ë³ì³ò ÷èñåë");

	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1)
			{
				listBox1->Items->Add(value.ToString());
			}
		}
		else
		{
			listBox1->Items->Add("×åðãà ïîðîæíÿ");
		}
	}
	else
	{
		listBox1->Items->Add(" ×åðãà ùå íå áóëà øí³ö³ë³çîâàíà");

	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	for each (int value in myQueue1)
	{
		if (value % 2 == 0)
		{
			sum += value;
		}
	}
	MessageBox::Show(sum.ToString());
}
private: System::Void çàêðèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://drive.google.com/file/d/1AnXVod-zpLjmIuq-XZPn1i51ykJCiCWz/view?usp=sharing");
}
};
}
