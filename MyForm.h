#pragma once

namespace Browser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1427, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(91, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"�����:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1276, 22);
			this->textBox1->TabIndex = 2;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(12, 37);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1490, 481);
			this->webBrowser1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(36, 28);
			this->button2->TabIndex = 4;
			this->button2->Text = L"<<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(55, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(36, 28);
			this->button3->TabIndex = 5;
			this->button3->Text = L">>";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1514, 530);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Browser";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->url_back = Convert::ToString(this->webBrowser1->Url);
		this->webBrowser1->Navigate(this->textBox1->Text);
		this->Text = "Browser-" + this->textBox1->Text;
	}
		   public:
			   String^ url_back;
			   String^ url_fd;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->url_fd = Convert::ToString(this->webBrowser1->Url);
		this->webBrowser1->Navigate(this->url_back);
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->url_back = Convert::ToString(this->webBrowser1->Url);
	this->webBrowser1->Navigate(this->url_fd);
}
};
}
