#pragma once

namespace factorial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblInput;
	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::TextBox^ txtOutput;
	protected:

	protected:



	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::TextBox^ txtInput;
	private: System::Windows::Forms::Button^ btnCalculate;


	private: System::ComponentModel::IContainer^ components;

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
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Location = System::Drawing::Point(146, 133);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(51, 25);
			this->lblInput->TabIndex = 0;
			this->lblInput->Text = L"N = ";
			this->lblInput->Click += gcnew System::EventHandler(this, &MyForm::lblInput_Click);
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(63, 218);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(51, 25);
			this->lblOutput->TabIndex = 1;
			this->lblOutput->Text = L"N! =";
			this->lblOutput->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(120, 215);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(265, 38);
			this->txtOutput->TabIndex = 3;
			this->txtOutput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(100, 308);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(275, 72);
			this->btnCalculate->TabIndex = 4;
			this->btnCalculate->Text = L"¬ычислить";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(203, 130);
			this->txtInput->Multiline = true;
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(78, 38);
			this->txtInput->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 431);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->lblInput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"‘акториал";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblInput_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	void ClearAll() {//очистка полей
		this->txtOutput->Text = "";
		errorProvider1->SetError(txtInput, String::Empty);
	}
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long InputNumber;
		bool result = Int64::TryParse(this->txtInput->Text, InputNumber); //переводим строку из TextBox вчисло
			if (!result) //dвели не число
				errorProvider1->SetError(txtInput, "¬ведено не целое число");
			else {//число
				if (InputNumber > 20)
					this->txtOutput->Text = "—лишком большое число";
				else {
					long long OutputNumber = fact(InputNumber);//результат
					if (OutputNumber == -1) //отрицательное число
						errorProvider1->SetError(txtInput, "¬ведено отрицательное число");
					else //все нормально
						this->txtOutput->Text = System::Convert::ToString(OutputNumber);//записываем в полевывода
				}
			}
	}
	};
}
