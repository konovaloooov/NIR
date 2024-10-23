#pragma once

namespace simplecalculations {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ xInput;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ yInput;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtOutput;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider3;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->xInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->yInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(103, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(355, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// xInput
			// 
			this->xInput->Location = System::Drawing::Point(156, 252);
			this->xInput->Name = L"xInput";
			this->xInput->Size = System::Drawing::Size(100, 31);
			this->xInput->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(96, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"x = ";
			// 
			// yInput
			// 
			this->yInput->Location = System::Drawing::Point(358, 252);
			this->yInput->Name = L"yInput";
			this->yInput->Size = System::Drawing::Size(100, 31);
			this->yInput->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(297, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 31);
			this->label2->TabIndex = 4;
			this->label2->Text = L"y = ";
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(223, 322);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(235, 34);
			this->txtOutput->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(96, 323);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 31);
			this->label3->TabIndex = 6;
			this->label3->Text = L"F(x, y) = ";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(208, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 58);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 467);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->yInput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->xInput);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Простые вычисления";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputNumber_x;
		long long InputNumber_y;
		bool result_x = Int64::TryParse(this->xInput->Text, InputNumber_x); //переводим строку из TextBox в число
		bool result_y = Int64::TryParse(this->yInput->Text, InputNumber_y);
		if (!result_x && !result_y) {
		errorProvider1->SetError(xInput, "x - не целое число");
		errorProvider2->SetError(yInput, "y - не целое число");
		}
		else if (!result_x) //ввели не число
			errorProvider1->SetError(xInput, "x - не целое число");
		else if(!result_y)
			errorProvider2->SetError(yInput, "y - не целое число");
		
		else {//число
			if (InputNumber_x + InputNumber_y < 0)
				errorProvider3->SetError(txtOutput, "Отрицательное подкоренное выражение");
			else if (InputNumber_x + InputNumber_y == 0) {
				errorProvider3->SetError(txtOutput, "Деление на ноль");
			}
			else{ //все нормально
				double OutputNumber = calculation(InputNumber_x, InputNumber_y);//результат
				this->txtOutput->Text = System::Convert::ToString(OutputNumber);//записываем в поле вывода
			}
		}
	}
	void ClearAll() {//очистка полей
		this->txtOutput->Text = "";
		errorProvider1->SetError(xInput, String::Empty);
		errorProvider2->SetError(yInput, String::Empty);
		errorProvider3->SetError(txtOutput, String::Empty);

	}
};
}
