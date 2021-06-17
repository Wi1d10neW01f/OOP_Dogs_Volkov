#pragma once
#include "dog.h"
#include "DecorDog.h"
#include "WatchDog.h"
#include <random>
#include <Windows.h>
#include <time.h>
namespace HouseWithDogs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
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
	private: System::Windows::Forms::Button^ BUT_Sim;
	private: System::Windows::Forms::Label^ LBL_AgrDD;
	private: System::Windows::Forms::Label^ LBL_AgrWD;
	protected:
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ LBL_HungryWD;
	private: System::Windows::Forms::Label^ LBL_HungryDD;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ LBL_VolumeWD;
	private: System::Windows::Forms::Label^ LBL_VolumeDD;
	private: System::Windows::Forms::Button^ BUT_CheckEat;
	private: System::Windows::Forms::Button^ BUT_CheckAgr;
	private: System::Windows::Forms::Button^ But_CheckVol;
	private: System::Windows::Forms::Button^ Debug__;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->PIC = (gcnew System::Windows::Forms::PictureBox());
			this->BUT_Sim = (gcnew System::Windows::Forms::Button());
			this->LBL_AgrDD = (gcnew System::Windows::Forms::Label());
			this->LBL_AgrWD = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LBL_HungryWD = (gcnew System::Windows::Forms::Label());
			this->LBL_HungryDD = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->LBL_VolumeWD = (gcnew System::Windows::Forms::Label());
			this->LBL_VolumeDD = (gcnew System::Windows::Forms::Label());
			this->BUT_CheckEat = (gcnew System::Windows::Forms::Button());
			this->BUT_CheckAgr = (gcnew System::Windows::Forms::Button());
			this->But_CheckVol = (gcnew System::Windows::Forms::Button());
			this->Debug__ = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC))->BeginInit();
			this->SuspendLayout();
			// 
			// PIC
			// 
			this->PIC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC.Image")));
			this->PIC->Location = System::Drawing::Point(13, 13);
			this->PIC->Name = L"PIC";
			this->PIC->Size = System::Drawing::Size(577, 456);
			this->PIC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC->TabIndex = 0;
			this->PIC->TabStop = false;
			// 
			// BUT_Sim
			// 
			this->BUT_Sim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->BUT_Sim->Location = System::Drawing::Point(596, 12);
			this->BUT_Sim->Name = L"BUT_Sim";
			this->BUT_Sim->Size = System::Drawing::Size(164, 47);
			this->BUT_Sim->TabIndex = 1;
			this->BUT_Sim->Text = L"Simulation";
			this->BUT_Sim->UseVisualStyleBackColor = true;
			this->BUT_Sim->Click += gcnew System::EventHandler(this, &MyForm::BUT_Sim_Click);
			// 
			// LBL_AgrDD
			// 
			this->LBL_AgrDD->AutoSize = true;
			this->LBL_AgrDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_AgrDD->Location = System::Drawing::Point(12, 472);
			this->LBL_AgrDD->Name = L"LBL_AgrDD";
			this->LBL_AgrDD->Size = System::Drawing::Size(54, 20);
			this->LBL_AgrDD->TabIndex = 2;
			this->LBL_AgrDD->Text = L"100%";
			// 
			// LBL_AgrWD
			// 
			this->LBL_AgrWD->AutoSize = true;
			this->LBL_AgrWD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_AgrWD->Location = System::Drawing::Point(12, 496);
			this->LBL_AgrWD->Name = L"LBL_AgrWD";
			this->LBL_AgrWD->Size = System::Drawing::Size(54, 20);
			this->LBL_AgrWD->TabIndex = 3;
			this->LBL_AgrWD->Text = L"100%";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(72, 472);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"«лость DecorDog";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(72, 496);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"«лость WatchDog";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(321, 496);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"—ытость WatchDog";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(321, 472);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"—ытость DecorDog";
			// 
			// LBL_HungryWD
			// 
			this->LBL_HungryWD->AutoSize = true;
			this->LBL_HungryWD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_HungryWD->Location = System::Drawing::Point(261, 496);
			this->LBL_HungryWD->Name = L"LBL_HungryWD";
			this->LBL_HungryWD->Size = System::Drawing::Size(54, 20);
			this->LBL_HungryWD->TabIndex = 7;
			this->LBL_HungryWD->Text = L"100%";
			// 
			// LBL_HungryDD
			// 
			this->LBL_HungryDD->AutoSize = true;
			this->LBL_HungryDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_HungryDD->Location = System::Drawing::Point(261, 472);
			this->LBL_HungryDD->Name = L"LBL_HungryDD";
			this->LBL_HungryDD->Size = System::Drawing::Size(54, 20);
			this->LBL_HungryDD->TabIndex = 6;
			this->LBL_HungryDD->Text = L"100%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(582, 496);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(188, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"√ромкость WatchDog";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(582, 472);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(185, 20);
			this->label10->TabIndex = 12;
			this->label10->Text = L"√ромкость DecorDog";
			// 
			// LBL_VolumeWD
			// 
			this->LBL_VolumeWD->AutoSize = true;
			this->LBL_VolumeWD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_VolumeWD->Location = System::Drawing::Point(522, 496);
			this->LBL_VolumeWD->Name = L"LBL_VolumeWD";
			this->LBL_VolumeWD->Size = System::Drawing::Size(48, 20);
			this->LBL_VolumeWD->TabIndex = 11;
			this->LBL_VolumeWD->Text = L"0 дЅ";
			// 
			// LBL_VolumeDD
			// 
			this->LBL_VolumeDD->AutoSize = true;
			this->LBL_VolumeDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_VolumeDD->Location = System::Drawing::Point(522, 472);
			this->LBL_VolumeDD->Name = L"LBL_VolumeDD";
			this->LBL_VolumeDD->Size = System::Drawing::Size(48, 20);
			this->LBL_VolumeDD->TabIndex = 10;
			this->LBL_VolumeDD->Text = L"0 дЅ";
			// 
			// BUT_CheckEat
			// 
			this->BUT_CheckEat->Location = System::Drawing::Point(597, 66);
			this->BUT_CheckEat->Name = L"BUT_CheckEat";
			this->BUT_CheckEat->Size = System::Drawing::Size(163, 23);
			this->BUT_CheckEat->TabIndex = 14;
			this->BUT_CheckEat->Text = L"Check Eating";
			this->BUT_CheckEat->UseVisualStyleBackColor = true;
			this->BUT_CheckEat->Visible = false;
			this->BUT_CheckEat->Click += gcnew System::EventHandler(this, &MyForm::BUT_CheckEat_Click);
			// 
			// BUT_CheckAgr
			// 
			this->BUT_CheckAgr->Location = System::Drawing::Point(597, 96);
			this->BUT_CheckAgr->Name = L"BUT_CheckAgr";
			this->BUT_CheckAgr->Size = System::Drawing::Size(163, 23);
			this->BUT_CheckAgr->TabIndex = 15;
			this->BUT_CheckAgr->Text = L"Check Agressive";
			this->BUT_CheckAgr->UseVisualStyleBackColor = true;
			this->BUT_CheckAgr->Visible = false;
			this->BUT_CheckAgr->Click += gcnew System::EventHandler(this, &MyForm::BUT_CheckAgr_Click);
			// 
			// But_CheckVol
			// 
			this->But_CheckVol->Location = System::Drawing::Point(597, 126);
			this->But_CheckVol->Name = L"But_CheckVol";
			this->But_CheckVol->Size = System::Drawing::Size(163, 23);
			this->But_CheckVol->TabIndex = 16;
			this->But_CheckVol->Text = L"Check Volume";
			this->But_CheckVol->UseVisualStyleBackColor = true;
			this->But_CheckVol->Visible = false;
			this->But_CheckVol->Click += gcnew System::EventHandler(this, &MyForm::But_CheckVol_Click);
			// 
			// Debug__
			// 
			this->Debug__->Location = System::Drawing::Point(597, 156);
			this->Debug__->Name = L"Debug__";
			this->Debug__->Size = System::Drawing::Size(163, 23);
			this->Debug__->TabIndex = 17;
			this->Debug__->Text = L"Debug";
			this->Debug__->UseVisualStyleBackColor = true;
			this->Debug__->Click += gcnew System::EventHandler(this, &MyForm::Debug___Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 535);
			this->Controls->Add(this->Debug__);
			this->Controls->Add(this->But_CheckVol);
			this->Controls->Add(this->BUT_CheckAgr);
			this->Controls->Add(this->BUT_CheckEat);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->LBL_VolumeWD);
			this->Controls->Add(this->LBL_VolumeDD);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->LBL_HungryWD);
			this->Controls->Add(this->LBL_HungryDD);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LBL_AgrWD);
			this->Controls->Add(this->LBL_AgrDD);
			this->Controls->Add(this->BUT_Sim);
			this->Controls->Add(this->PIC);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//constants and objects
		String ^ path = "..\\Pictures\\";
		DecorDog^ DD = gcnew DecorDog();
		WatchDog^ WD = gcnew WatchDog();
		const int TimeSleep = 550;
		//buttons
	private: System::Void BUT_CheckEat_Click(System::Object ^ sender, System::EventArgs ^ e) {
		DD->hungry = 0;
		WD->hungry = 0;
		LBL_HungryDD->Text = DD->hungry.ToString();
		LBL_HungryDD->Refresh();
		DD->eating = 1;
		WD->eating = 1;
		startEating();
	}
	private: System::Void BUT_CheckAgr_Click(System::Object ^ sender, System::EventArgs ^ e) {
		array<int>^ random = gcnew array<int>(12);
		Random^ k = gcnew Random();
		for (int i = 0; i < 12; i++) {
			random[i] = k->Next(25, 50);
		}
		WD->agressive = random[0];
		WD->changeVolume(WD->agressive);
		WD->hungry = random[1];
		DD->agressive = random[2];
		DD->changeVolume(DD->agressive);
		DD->hungry =  random[3];
		WD->unknown = 0;
		WD->grandmaster = 0;
		WD->eating = 0;
		DD->unknown = 0;
		DD->grandmaster = 0;
		DD->eating = 0;
		changeVolumeDD(DD->volume);
		changeVolumeWD(WD->volume);
		LBL_AgrDD->Text = DD->agressive.ToString();
		LBL_AgrWD->Text = WD->agressive.ToString();
		LBL_HungryDD->Text = DD->hungry.ToString();
		LBL_HungryWD->Text = WD->hungry.ToString();
		LBL_AgrDD->Refresh();
		LBL_AgrWD->Refresh();
		LBL_HungryDD->Refresh();
		LBL_HungryWD->Refresh();

		spawnUnknown();
	}
	private: System::Void But_CheckVol_Click(System::Object ^ sender, System::EventArgs ^ e) {

	}
	private: System::Void BUT_Sim_Click(System::Object ^ sender, System::EventArgs ^ e) {
		DD->agressive = randomMinMax(40, 15);
		DD->hungry = randomMinMax(80, 60);
		DD->volume = 1;
		DD->grandmaster = 0;
		DD->eating = 0;
		DD->unknown = 0;
		WD->agressive = randomMinMax(40, 15);
		WD->hungry = randomMinMax(80, 60);
		WD->volume = 1;
		WD->grandmaster = 0;
		WD->eating = 0;
		WD->unknown = 0;
		changeLBLs();
		int countOfSim = 25;
		for (int i = 0; i < countOfSim; i++) {
			Simulation();
		}
		
	}
			 //functions
			 void changeVolumeDD(int volume) {
				 switch (volume) {
				 case 2:
					 LBL_VolumeDD->Text = "50 дЅ";
					 break;
				 case 3: 
					 LBL_VolumeDD->Text = "80 дЅ";
					 break;
				 case 1:
					 LBL_VolumeDD->Text = "20 дЅ";
					 break;
				 }
				 LBL_VolumeDD->Refresh();
			 }
			 void changeVolumeWD(int volume) {
				 switch (volume) {
				 case 2:
					 LBL_VolumeWD->Text = "70 дЅ";
					 break;
				 case 3:
					 LBL_VolumeWD->Text = "90 дЅ";
					 break;
				 case 1:
					 LBL_VolumeWD->Text = "30 дЅ";
					 break;
				 }
				 LBL_VolumeWD->Refresh();
			 }
			 void startEating() {
				 while (DD->eating || WD->eating) {
					 if (DD->eating && WD->eating) {
						 DD->eat();
						 WD->eat();
						 PIC->Image = Image::FromFile(path + "Eat\\0.png");
					 }
					 else if (DD->eating) {
						 DD->eat();
						 PIC->Image = Image::FromFile(path + "Eat\\1.png");
					 }
					 else if (WD->eating) {
						 WD->eat();
						 PIC->Image = Image::FromFile(path + "Eat\\2.png");
					 }
					 LBL_HungryDD->Text = DD->hungry.ToString();
					 LBL_HungryWD->Text = WD->hungry.ToString();
					 LBL_HungryWD->Refresh();
					 LBL_HungryDD->Refresh();
					 PIC->Refresh();
					 Thread::Sleep(TimeSleep);
				 }
				 PIC->Image = Image::FromFile(path + "chill.png");
			 }
			 void spawnUnknown() {
				 Random^ k = gcnew Random();
				 int a = k->Next(0, 301);
				 if (a < 101) {
					 spawnMen();
				 }
				 else if (a > 200) {
					 spawnCourier();
				 }
				 else {
					 spawnChild();
				 }
				 PIC->Image = Image::FromFile(path + "chill.png");
			 }
			 void changeLBLs() {
				 LBL_AgrDD->Text = DD->agressive.ToString();
				 LBL_AgrWD->Text = WD->agressive.ToString();
				 LBL_HungryDD->Text = DD->hungry.ToString();
				 LBL_HungryWD->Text = WD->hungry.ToString();
				 LBL_AgrDD->Refresh();
				 LBL_AgrWD->Refresh();
				 LBL_HungryDD->Refresh();
				 LBL_HungryWD->Refresh();
				 changeVolumeDD(1);
				 changeVolumeWD(1);
			 }

			 void spawnMen() {
				 DD->checkUnknown(1, 0, DD->hungry);
				 WD->checkUnknown(1, 0, WD->hungry);
				 LBL_AgrDD->Text = DD->agressive.ToString();
				 LBL_AgrDD->Refresh();
				 LBL_AgrWD->Text = WD->agressive.ToString();
				 LBL_AgrWD->Refresh();
				 for (int i = 0; i < 5; i++) {
					 if (i < 4) {
						 PIC->Image = Image::FromFile(path + "Unknown\\" + i.ToString() + ".png");
						 WD->changeVolume(WD->agressive);
						 DD->changeVolume(WD->agressive);
						 changeVolumeDD(DD->volume);
						 changeVolumeWD(WD->volume);
					 }
					 if (WD->agressive == 90 && i == 4) {
						 WD->changeVolume(WD->agressive);
						 changeVolumeWD(WD->volume);
						 DD->changeVolume(WD->agressive);
						 changeVolumeDD(DD->volume);
						 PIC->Image = Image::FromFile(path + "Unknown\\" + i.ToString() + ".png");
					 }
					 PIC->Refresh();
					 Thread::Sleep(TimeSleep);
				 }
			 }
			 void spawnCourier() {
				 DD->checkUnknown(1, 1, DD->hungry);
				 WD->checkUnknown(1, 1, WD->hungry);
				 LBL_AgrDD->Text = DD->agressive.ToString();
				 LBL_AgrDD->Refresh();
				 LBL_AgrWD->Text = WD->agressive.ToString();
				 LBL_AgrWD->Refresh();
				 for (int i = 0; i < 4; i++) {
					 WD->changeVolume(WD->agressive);
					 changeVolumeWD(WD->volume); 
					 DD->changeVolume(WD->agressive);
					 changeVolumeWD(DD->volume);
					 PIC->Image = Image::FromFile(path + "PizzaTime\\" + i.ToString() + ".png");
					 PIC->Refresh();
					 if(i==2)
						 WD->GrandSpawn();
						 DD->GrandSpawn();
					 Thread::Sleep(TimeSleep);
				 }
			 }
			 void spawnChild() {
				 int a = randomMinMax(0, 1);
				 DD->checkUnknown(1, 0, DD->hungry);
				 WD->checkUnknown(1, 0, WD->hungry);
				 DD->Agressive = 25;
				 LBL_AgrDD->Text = DD->agressive.ToString();
				 LBL_AgrDD->Refresh();
				 LBL_AgrWD->Text = WD->agressive.ToString();
				 LBL_AgrWD->Refresh();
				 WD->changeVolume(WD->agressive);
				 changeVolumeWD(WD->volume);
				 PIC->Image = Image::FromFile(path + a.ToString() + ".png");
				 PIC->Refresh();
				 Thread::Sleep(TimeSleep);
			 }
			 void spawnMaster() {
				 DD->grandmaster = 1;
				 WD->grandmaster = 1;
				 DD->GrandSpawn();
				 WD->GrandSpawn();
				 LBL_AgrWD->Text = DD->agressive.ToString();
				 LBL_AgrWD->Text = WD->agressive.ToString();
				 PIC->Image = Image::FromFile(path + "1.png");
				 if(DD->agressive >50){WD->agressive=35;}
				 if(WD->agressive >50){DD->agressive=35;}
				 if(DD->agressive <0){WD->agressive=5;}
				 if(WD->agressive <0){DD->agressive=5;}
				 Thread::Sleep(TimeSleep);
			 }
			 int randomMinMax(int Max, int Min) {
				 return(rand() % (Max - Min) + Min);
			 }
			 //main function
			 void Simulation() {
				 spawnUnknown();
				 if (randomMinMax(3, 1) == 1||WD->agressive>80||DD->agressive>80)
					 spawnMaster();
				 startEating();
				 DD->hungry -= 15;
				 WD->hungry -= 5;
				 //I KNOW WHO WILL SPAWN, WUAHAHAHAH
				 //Mb its needed to delete, but pust' budet;
			 }
	private: System::Void Debug___Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
