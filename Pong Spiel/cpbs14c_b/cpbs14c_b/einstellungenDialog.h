#pragma once
#include "stdafx.h"

namespace cpbs14c_b {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für einstellungenDialog
	/// </summary>
	public ref class einstellungenDialog : public System::Windows::Forms::Form
	{
	public:
		einstellungenDialog(void)
		{
			InitializeComponent();

			spielfeldLinienBreite=5;
			schlaegerGroesse=25;
			ballPosition=Point(5,5);
			//pinsel=gcnew SolidBrush(panelRahmenfarbe->BackColor);//Color::Black);
			zeichenflaeche=panelVorschau->CreateGraphics();
			//panelVorschau->BackColor=panelSpielfeldfarbe->BackColor;//Color::Black;

			setzeSpielfeld();
			//neueBallSchlaeger();

			//zweiteGroesse=gcnew Aufloesung();

			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	private:
		/*ref struct spielball {
			Boolean richtungX;
			Boolean richtungY;
			Int32 winkel;
		};*/

		Graphics ^zeichenflaeche;
		Rectangle spielfeldGroesse;
		Int32 spielfeldMaxX, spielfeldMaxY, spielfeldMinX, spielfeldMinY;
		Int32 spielfeldLinienBreite;
		Int32 schlaegerGroesse, schlaegerPosition;
		//spielball ballPosition;
		Point ballPosition;
		SolidBrush ^pinsel;
		
	private: System::Windows::Forms::ColorDialog^  colorDialog2;
	private: System::Windows::Forms::Panel^  panelVorschau;
	private: System::Windows::Forms::Panel^  schlaeger;
	private: System::Windows::Forms::Panel^  ball;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	public: 

		Point liefereWert() {
			Point rueckgabe;
			if(radioButton320->Checked==true)
				rueckgabe=Point(320,200);
			if(radioButton640->Checked==true)
				rueckgabe=Point(640,480);
			if(radioButton1024->Checked==true) 
				rueckgabe=Point(1024,768);
			if(radioButtonMaximal->Checked==true)
				rueckgabe=Point(Screen::PrimaryScreen->Bounds.Width, Screen::PrimaryScreen->Bounds.Height);
			return rueckgabe;
		}
		
		Void setzeWert(Point aufloesung) {
			if(aufloesung==Point(320,200))
				radioButton320->Checked=true;
			if(aufloesung==Point(640,480))
				radioButton640->Checked=true;
			if(aufloesung==Point(1024,768))
				radioButton1024->Checked=true;
			if(aufloesung==Point(1366,768))
				radioButtonMaximal->Checked=true;
			if(aufloesung==Point(0,0))
				radioButton640->Checked=true;
		}
		
		Color liefereRahmenfarbe () {
			Color rueckgabe;
			rueckgabe=panelRahmenfarbe->BackColor;
			return rueckgabe;
		}

		Color liefereSpielfeldfarbe () {
			Color rueckgabe;
			rueckgabe=panelSpielfeldfarbe->BackColor;
			return rueckgabe;
		}

		Void setzeRahmenfarbe(Color Farbe) {
			panelRahmenfarbe->BackColor=Farbe;
		}

		Void setzeSpielfeldfarbe(Color Farbe) {
			panelSpielfeldfarbe->BackColor=Farbe;
		}

		Void setzeSpielfeld() {
			spielfeldGroesse=panelVorschau->ClientRectangle;

			spielfeldMaxX=spielfeldGroesse.Right-spielfeldLinienBreite;
			spielfeldMinX=spielfeldGroesse.Left+spielfeldLinienBreite+1;
			spielfeldMaxY=spielfeldGroesse.Bottom-spielfeldLinienBreite;
			spielfeldMinY=spielfeldGroesse.Top+spielfeldLinienBreite;
		}

		Void zeichneSpielfeld() {
			//pinsel->Color=panelRahmenfarbe->BackColor;//Color::Green;
			zeichenflaeche->FillRectangle(pinsel,0,0,spielfeldMaxX,spielfeldLinienBreite);
			zeichenflaeche->FillRectangle(pinsel,spielfeldMaxX,0,spielfeldLinienBreite, spielfeldMaxY+spielfeldLinienBreite);
			zeichenflaeche->FillRectangle(pinsel,0,spielfeldMaxY,spielfeldMaxX,spielfeldLinienBreite);
		}

		Void zeichneBall(Point position) {
			ball->Location=position;
		}

		Void zeichneSchlaeger(Int32 Y) {
			schlaeger->Top=Y;
		}

		Void neueBallSchlaeger() {
			ball->Width=5;
			ball->Height=5;
			schlaeger->Width=spielfeldLinienBreite;
			schlaeger->Height=schlaegerGroesse;
			ball->BackColor=panelRahmenfarbe->BackColor;//Color::Green;
			schlaeger->BackColor=panelRahmenfarbe->BackColor;//Color::Green;
			schlaeger->Left=2;
			zeichneSchlaeger((spielfeldMaxY/2)-(schlaegerGroesse/2));
			zeichneBall(Point(spielfeldMinX+5, spielfeldMaxY/2));
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~einstellungenDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButtonMaximal;

	private: System::Windows::Forms::RadioButton^  radioButton1024;

	private: System::Windows::Forms::RadioButton^  radioButton640;

	private: System::Windows::Forms::RadioButton^  radioButton320;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panelSpielfeldfarbe;
	private: System::Windows::Forms::Panel^  panelRahmenfarbe;




	private: System::Windows::Forms::Button^  buttonSpielfeldfarbe;

	private: System::Windows::Forms::Button^  buttonRahmenfarbe;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;



	protected: 

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonMaximal = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1024 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton640 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton320 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSpielfeldfarbe = (gcnew System::Windows::Forms::Button());
			this->buttonRahmenfarbe = (gcnew System::Windows::Forms::Button());
			this->panelSpielfeldfarbe = (gcnew System::Windows::Forms::Panel());
			this->panelRahmenfarbe = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panelVorschau = (gcnew System::Windows::Forms::Panel());
			this->schlaeger = (gcnew System::Windows::Forms::Panel());
			this->ball = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panelVorschau->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonMaximal);
			this->groupBox1->Controls->Add(this->radioButton1024);
			this->groupBox1->Controls->Add(this->radioButton640);
			this->groupBox1->Controls->Add(this->radioButton320);
			this->groupBox1->Location = System::Drawing::Point(3, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(351, 37);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Größe";
			// 
			// radioButtonMaximal
			// 
			this->radioButtonMaximal->AutoSize = true;
			this->radioButtonMaximal->Location = System::Drawing::Point(282, 14);
			this->radioButtonMaximal->Name = L"radioButtonMaximal";
			this->radioButtonMaximal->Size = System::Drawing::Size(63, 17);
			this->radioButtonMaximal->TabIndex = 3;
			this->radioButtonMaximal->Text = L"Maximal";
			this->radioButtonMaximal->UseVisualStyleBackColor = true;
			// 
			// radioButton1024
			// 
			this->radioButton1024->AutoSize = true;
			this->radioButton1024->Location = System::Drawing::Point(191, 14);
			this->radioButton1024->Name = L"radioButton1024";
			this->radioButton1024->Size = System::Drawing::Size(71, 17);
			this->radioButton1024->TabIndex = 2;
			this->radioButton1024->Text = L"1024*768";
			this->radioButton1024->UseVisualStyleBackColor = true;
			// 
			// radioButton640
			// 
			this->radioButton640->AutoSize = true;
			this->radioButton640->Location = System::Drawing::Point(100, 14);
			this->radioButton640->Name = L"radioButton640";
			this->radioButton640->Size = System::Drawing::Size(65, 17);
			this->radioButton640->TabIndex = 1;
			this->radioButton640->Text = L"640*480";
			this->radioButton640->UseVisualStyleBackColor = true;
			// 
			// radioButton320
			// 
			this->radioButton320->AutoSize = true;
			this->radioButton320->Location = System::Drawing::Point(9, 14);
			this->radioButton320->Name = L"radioButton320";
			this->radioButton320->Size = System::Drawing::Size(65, 17);
			this->radioButton320->TabIndex = 0;
			this->radioButton320->Text = L"320*200";
			this->radioButton320->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(12, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Übernehmen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &einstellungenDialog::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(271, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Abbrechen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &einstellungenDialog::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonSpielfeldfarbe);
			this->groupBox2->Controls->Add(this->buttonRahmenfarbe);
			this->groupBox2->Controls->Add(this->panelSpielfeldfarbe);
			this->groupBox2->Controls->Add(this->panelRahmenfarbe);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(3, 55);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(351, 74);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Farben";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &einstellungenDialog::groupBox2_Enter);
			// 
			// buttonSpielfeldfarbe
			// 
			this->buttonSpielfeldfarbe->Location = System::Drawing::Point(88, 43);
			this->buttonSpielfeldfarbe->Name = L"buttonSpielfeldfarbe";
			this->buttonSpielfeldfarbe->Size = System::Drawing::Size(26, 19);
			this->buttonSpielfeldfarbe->TabIndex = 5;
			this->buttonSpielfeldfarbe->Text = L"...";
			this->buttonSpielfeldfarbe->UseVisualStyleBackColor = true;
			this->buttonSpielfeldfarbe->Click += gcnew System::EventHandler(this, &einstellungenDialog::buttonSpielfeldfarbe_Click);
			// 
			// buttonRahmenfarbe
			// 
			this->buttonRahmenfarbe->Location = System::Drawing::Point(88, 19);
			this->buttonRahmenfarbe->Name = L"buttonRahmenfarbe";
			this->buttonRahmenfarbe->Size = System::Drawing::Size(26, 19);
			this->buttonRahmenfarbe->TabIndex = 4;
			this->buttonRahmenfarbe->Text = L"...";
			this->buttonRahmenfarbe->UseVisualStyleBackColor = true;
			this->buttonRahmenfarbe->Click += gcnew System::EventHandler(this, &einstellungenDialog::button3_Click);
			// 
			// panelSpielfeldfarbe
			// 
			this->panelSpielfeldfarbe->BackColor = System::Drawing::Color::White;
			this->panelSpielfeldfarbe->Location = System::Drawing::Point(62, 44);
			this->panelSpielfeldfarbe->Name = L"panelSpielfeldfarbe";
			this->panelSpielfeldfarbe->Size = System::Drawing::Size(20, 17);
			this->panelSpielfeldfarbe->TabIndex = 3;
			this->panelSpielfeldfarbe->BackColorChanged += gcnew System::EventHandler(this, &einstellungenDialog::panelSpielfeldfarbe_BackColorChanged);
			// 
			// panelRahmenfarbe
			// 
			this->panelRahmenfarbe->BackColor = System::Drawing::Color::Black;
			this->panelRahmenfarbe->Location = System::Drawing::Point(62, 21);
			this->panelRahmenfarbe->Name = L"panelRahmenfarbe";
			this->panelRahmenfarbe->Size = System::Drawing::Size(20, 17);
			this->panelRahmenfarbe->TabIndex = 2;
			this->panelRahmenfarbe->BackColorChanged += gcnew System::EventHandler(this, &einstellungenDialog::panelRahmenfarbe_BackColorChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Spielfeld";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rahmen";
			this->label1->Click += gcnew System::EventHandler(this, &einstellungenDialog::label1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->panelVorschau);
			this->groupBox3->Location = System::Drawing::Point(3, 135);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(351, 100);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Vorschau";
			// 
			// panelVorschau
			// 
			this->panelVorschau->Controls->Add(this->schlaeger);
			this->panelVorschau->Controls->Add(this->ball);
			this->panelVorschau->Location = System::Drawing::Point(6, 13);
			this->panelVorschau->Name = L"panelVorschau";
			this->panelVorschau->Size = System::Drawing::Size(339, 81);
			this->panelVorschau->TabIndex = 0;
			this->panelVorschau->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &einstellungenDialog::panelVorschau_Paint);
			// 
			// schlaeger
			// 
			this->schlaeger->Location = System::Drawing::Point(210, 18);
			this->schlaeger->Name = L"schlaeger";
			this->schlaeger->Size = System::Drawing::Size(84, 41);
			this->schlaeger->TabIndex = 1;
			// 
			// ball
			// 
			this->ball->Location = System::Drawing::Point(29, 21);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(79, 38);
			this->ball->TabIndex = 0;
			// 
			// einstellungenDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 278);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"einstellungenDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Einstellungen";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &einstellungenDialog::einstellungenDialog_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->panelVorschau->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void einstellungenDialog_Load(System::Object^  sender, System::EventArgs^  e) {

			   /*if (zweiteGroesse->gibaus()==Point(640,480))
					 radioButton320->Checked=true; */
				 panelVorschau->BackColor=panelSpielfeldfarbe->BackColor;
				 pinsel=gcnew SolidBrush(panelRahmenfarbe->BackColor);
				 neueBallSchlaeger();
				 zeichneSpielfeld();
			 }
			 
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 Close();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 Point liefereWert();
	}
			 
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (colorDialog1->ShowDialog()==Windows::Forms::DialogResult::OK) {
				 panelRahmenfarbe->BackColor=colorDialog1->Color;
			 }
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void buttonSpielfeldfarbe_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (colorDialog2->ShowDialog()==Windows::Forms::DialogResult::OK) {
				 panelSpielfeldfarbe->BackColor=colorDialog2->Color;
			 }
		 }
private: System::Void panelVorschau_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

			 zeichneSpielfeld();
		 }
private: System::Void panelRahmenfarbe_BackColorChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 einstellungenDialog_Load(sender,e);
		 }
private: System::Void panelSpielfeldfarbe_BackColorChanged(System::Object^  sender, System::EventArgs^  e) {

			 einstellungenDialog_Load(sender,e);
		 }
};
}
