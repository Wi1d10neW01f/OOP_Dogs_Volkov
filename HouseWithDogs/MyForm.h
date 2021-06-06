#pragma once

namespace HouseWithDogs {

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
	private: System::Windows::Forms::PictureBox^ PIC;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->PIC = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC))->BeginInit();
			this->SuspendLayout();
			// 
			// PIC
			// 
			this->PIC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC.Image")));
			this->PIC->Location = System::Drawing::Point(12, 12);
			this->PIC->Name = L"PIC";
			this->PIC->Size = System::Drawing::Size(428, 408);
			this->PIC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC->TabIndex = 0;
			this->PIC->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(447, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 432);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PIC);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//constants
		String^ path = "C:\\Users\\admin\\Desktop\\Pictures";



		//

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
