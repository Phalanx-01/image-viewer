#pragma once
#include "formMax.h"

namespace Bildbetrachter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label1;
	public: 

		formMax ^fensterBilderschau;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPageEinzel;
	private: System::Windows::Forms::TabPage^  tabPageSchau;
	private: System::Windows::Forms::Button^  buttonBeenden;
	private: System::Windows::Forms::Button^  buttonOeffnen;
	private: System::Windows::Forms::Button^  buttonAnzeigen;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBoxNeuesFenster;

	private: System::Windows::Forms::CheckBox^  checkBoxOptGroesse;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  buttonBeenden1;
	private: System::Windows::Forms::Button^  buttonStarten;
	private: System::Windows::Forms::Button^  buttonAuswaehlen;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;




	protected: 



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageEinzel = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxNeuesFenster = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxOptGroesse = (gcnew System::Windows::Forms::CheckBox());
			this->buttonBeenden = (gcnew System::Windows::Forms::Button());
			this->buttonOeffnen = (gcnew System::Windows::Forms::Button());
			this->buttonAnzeigen = (gcnew System::Windows::Forms::Button());
			this->tabPageSchau = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->buttonBeenden1 = (gcnew System::Windows::Forms::Button());
			this->buttonStarten = (gcnew System::Windows::Forms::Button());
			this->buttonAuswaehlen = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPageEinzel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabPageSchau->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPageEinzel);
			this->tabControl1->Controls->Add(this->tabPageSchau);
			this->tabControl1->Location = System::Drawing::Point(-5, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(293, 265);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Enter += gcnew System::EventHandler(this, &Form1::tabControl1_Enter_1);
			// 
			// tabPageEinzel
			// 
			this->tabPageEinzel->Controls->Add(this->pictureBox1);
			this->tabPageEinzel->Controls->Add(this->textBox1);
			this->tabPageEinzel->Controls->Add(this->checkBoxNeuesFenster);
			this->tabPageEinzel->Controls->Add(this->checkBoxOptGroesse);
			this->tabPageEinzel->Controls->Add(this->buttonBeenden);
			this->tabPageEinzel->Controls->Add(this->buttonOeffnen);
			this->tabPageEinzel->Controls->Add(this->buttonAnzeigen);
			this->tabPageEinzel->Location = System::Drawing::Point(4, 22);
			this->tabPageEinzel->Name = L"tabPageEinzel";
			this->tabPageEinzel->Padding = System::Windows::Forms::Padding(3);
			this->tabPageEinzel->Size = System::Drawing::Size(285, 239);
			this->tabPageEinzel->TabIndex = 0;
			this->tabPageEinzel->Text = L"Einzelbild";
			this->tabPageEinzel->UseVisualStyleBackColor = true;
			this->tabPageEinzel->Click += gcnew System::EventHandler(this, &Form1::tabPageEinzel_Click);
			this->tabPageEinzel->Enter += gcnew System::EventHandler(this, &Form1::tabPageEinzel_Enter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 179);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->Location = System::Drawing::Point(13, 188);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 20);
			this->textBox1->TabIndex = 3;
			// 
			// checkBoxNeuesFenster
			// 
			this->checkBoxNeuesFenster->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkBoxNeuesFenster->AutoSize = true;
			this->checkBoxNeuesFenster->Location = System::Drawing::Point(112, 214);
			this->checkBoxNeuesFenster->Name = L"checkBoxNeuesFenster";
			this->checkBoxNeuesFenster->Size = System::Drawing::Size(95, 17);
			this->checkBoxNeuesFenster->TabIndex = 5;
			this->checkBoxNeuesFenster->Text = L"Neues Fenster";
			this->checkBoxNeuesFenster->UseVisualStyleBackColor = true;
			this->checkBoxNeuesFenster->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxNeuesFenster_CheckedChanged);
			// 
			// checkBoxOptGroesse
			// 
			this->checkBoxOptGroesse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkBoxOptGroesse->AutoSize = true;
			this->checkBoxOptGroesse->Location = System::Drawing::Point(13, 214);
			this->checkBoxOptGroesse->Name = L"checkBoxOptGroesse";
			this->checkBoxOptGroesse->Size = System::Drawing::Size(99, 17);
			this->checkBoxOptGroesse->TabIndex = 4;
			this->checkBoxOptGroesse->Text = L"Optimale Größe";
			this->checkBoxOptGroesse->UseVisualStyleBackColor = true;
			this->checkBoxOptGroesse->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxOptGroesse_CheckedChanged);
			// 
			// buttonBeenden
			// 
			this->buttonBeenden->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonBeenden->Location = System::Drawing::Point(197, 64);
			this->buttonBeenden->Name = L"buttonBeenden";
			this->buttonBeenden->Size = System::Drawing::Size(75, 23);
			this->buttonBeenden->TabIndex = 2;
			this->buttonBeenden->Text = L"Beenden";
			this->buttonBeenden->UseVisualStyleBackColor = true;
			this->buttonBeenden->Click += gcnew System::EventHandler(this, &Form1::buttonBeenden_Click);
			// 
			// buttonOeffnen
			// 
			this->buttonOeffnen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonOeffnen->Location = System::Drawing::Point(197, 35);
			this->buttonOeffnen->Name = L"buttonOeffnen";
			this->buttonOeffnen->Size = System::Drawing::Size(75, 23);
			this->buttonOeffnen->TabIndex = 1;
			this->buttonOeffnen->Text = L"Öffnen";
			this->buttonOeffnen->UseVisualStyleBackColor = true;
			this->buttonOeffnen->Click += gcnew System::EventHandler(this, &Form1::buttonOeffnen_Click);
			// 
			// buttonAnzeigen
			// 
			this->buttonAnzeigen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAnzeigen->Location = System::Drawing::Point(198, 6);
			this->buttonAnzeigen->Name = L"buttonAnzeigen";
			this->buttonAnzeigen->Size = System::Drawing::Size(75, 23);
			this->buttonAnzeigen->TabIndex = 0;
			this->buttonAnzeigen->Text = L"Anzeigen";
			this->buttonAnzeigen->UseVisualStyleBackColor = true;
			this->buttonAnzeigen->Click += gcnew System::EventHandler(this, &Form1::buttonAnzeigen_Click);
			// 
			// tabPageSchau
			// 
			this->tabPageSchau->Controls->Add(this->label1);
			this->tabPageSchau->Controls->Add(this->numericUpDown1);
			this->tabPageSchau->Controls->Add(this->listBox1);
			this->tabPageSchau->Controls->Add(this->buttonBeenden1);
			this->tabPageSchau->Controls->Add(this->buttonStarten);
			this->tabPageSchau->Controls->Add(this->buttonAuswaehlen);
			this->tabPageSchau->Location = System::Drawing::Point(4, 22);
			this->tabPageSchau->Name = L"tabPageSchau";
			this->tabPageSchau->Padding = System::Windows::Forms::Padding(3);
			this->tabPageSchau->Size = System::Drawing::Size(285, 239);
			this->tabPageSchau->TabIndex = 1;
			this->tabPageSchau->Text = L"Bilderschau";
			this->tabPageSchau->UseVisualStyleBackColor = true;
			this->tabPageSchau->Enter += gcnew System::EventHandler(this, &Form1::tabPageSchau_Enter);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(207, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Sek.";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->Location = System::Drawing::Point(242, 93);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {60, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(37, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(195, 121);
			this->listBox1->TabIndex = 0;
			// 
			// buttonBeenden1
			// 
			this->buttonBeenden1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonBeenden1->Location = System::Drawing::Point(204, 64);
			this->buttonBeenden1->Name = L"buttonBeenden1";
			this->buttonBeenden1->Size = System::Drawing::Size(75, 23);
			this->buttonBeenden1->TabIndex = 3;
			this->buttonBeenden1->Text = L"Beenden";
			this->buttonBeenden1->UseVisualStyleBackColor = true;
			this->buttonBeenden1->Click += gcnew System::EventHandler(this, &Form1::buttonBeenden_Click);
			// 
			// buttonStarten
			// 
			this->buttonStarten->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonStarten->Location = System::Drawing::Point(204, 35);
			this->buttonStarten->Name = L"buttonStarten";
			this->buttonStarten->Size = System::Drawing::Size(75, 23);
			this->buttonStarten->TabIndex = 2;
			this->buttonStarten->Text = L"Starten";
			this->buttonStarten->UseVisualStyleBackColor = true;
			this->buttonStarten->Click += gcnew System::EventHandler(this, &Form1::buttonStarten_Click);
			// 
			// buttonAuswaehlen
			// 
			this->buttonAuswaehlen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAuswaehlen->Location = System::Drawing::Point(204, 6);
			this->buttonAuswaehlen->Name = L"buttonAuswaehlen";
			this->buttonAuswaehlen->Size = System::Drawing::Size(75, 23);
			this->buttonAuswaehlen->TabIndex = 1;
			this->buttonAuswaehlen->Text = L"Auswählen";
			this->buttonAuswaehlen->UseVisualStyleBackColor = true;
			this->buttonAuswaehlen->Click += gcnew System::EventHandler(this, &Form1::buttonAuswaehlen_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Grafikdateien|*.bmp;*.gif;*.jpg;*.png;*.tif;*.wmf;| BMP-Dateien|*.bmp;| GIF-Datei" 
				L"en|*.gif;| WMF-Dateien|*.wmf;";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->Filter = L"Grafikdateien|*.bmp;*.gif;*.jpg;*.png;*.tif;*.wmf;| BMP-Dateien|*.bmp;| GIF-Datei" 
				L"en|*.gif;| WMF-Dateien|*.wmf;";
			this->openFileDialog2->Multiselect = true;
			this->openFileDialog2->Title = L"Auswahl für die Bilderschau";
			this->openFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog2_FileOk);
			// 
			// timer1
			// 
			this->timer1->Interval = 4000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Bildbetrachter";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tabControl1->ResumeLayout(false);
			this->tabPageEinzel->ResumeLayout(false);
			this->tabPageEinzel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabPageSchau->ResumeLayout(false);
			this->tabPageSchau->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonBeenden_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void buttonAnzeigen_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text!=String::Empty) {
				 if (IO::File::Exists(textBox1->Text)) {

					 if (checkBoxNeuesFenster->Checked) {
						 pictureBox1->Load(textBox1->Text);
						 formMax ^neuesFormular = gcnew formMax();
						 neuesFormular->Text = "Große Darstellung - " + (textBox1->Text);
						 neuesFormular->bildLaden(textBox1->Text);
						 neuesFormular->ShowDialog();
					 }
					 else
					 pictureBox1->Load(textBox1->Text);
				 }

				 else
					 MessageBox::Show("Die Datei existiert nicht!","Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void checkBoxOptGroesse_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBoxOptGroesse->Checked)
				 pictureBox1->SizeMode=PictureBoxSizeMode::Zoom;
			 else
				 pictureBox1->SizeMode=PictureBoxSizeMode::Normal;
		 }
private: System::Void buttonOeffnen_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->ShowDialog();
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 textBox1->Text=openFileDialog1->FileName;
			 buttonAnzeigen_Click(sender, e);
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void buttonAuswaehlen_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog2->ShowDialog();
		 }
private: System::Void openFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 
			 array <String^> ^dateien = openFileDialog2->FileNames;
			 if (listBox1->Items->Count != 0)
				 listBox1->Items->Clear();
			 for each (String ^datei in dateien)
				 listBox1->Items->Add(datei);
		 }
private: System::Void tabPageEinzel_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void buttonStarten_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->Items->Count == 0) {

				 MessageBox::Show("Sie müssen erst Dateien auswählen!","Fehler");

				 return;
			 }

			 if (listBox1->SelectedIndex == -1)
				 listBox1->SelectedIndex = 0;

			 fensterBilderschau = gcnew formMax();
			 fensterBilderschau->bildLaden(listBox1->SelectedItem->ToString());
			 fensterBilderschau->Text="Bilderschau - Bild " + (listBox1->SelectedIndex+1) + " von " + (listBox1->Items->Count) + "  " +(listBox1->SelectedItem->ToString());
			 fensterBilderschau->ControlBox=false;
			 fensterBilderschau->Show();
			 timer1->Start();
			 timer1->Interval =Convert::ToInt32(numericUpDown1->Value*1000);
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->SelectedIndex < listBox1->Items->Count-1) {
				 listBox1->SelectedIndex++;
				 fensterBilderschau->bildLaden(listBox1->SelectedItem->ToString());
				 fensterBilderschau->Text="Bilderschau - Bild " + (listBox1->SelectedIndex+1) + " von " + (listBox1->Items->Count) + "  " +(listBox1->SelectedItem->ToString());
				 System::Media::SystemSounds::Asterisk->Play();
			 }
			 else {
				 listBox1->SelectedIndex = -1;
				 timer1->Stop();
				 fensterBilderschau->Close();
			 }
		 }
private: System::Void tabPageEinzel_Enter(System::Object^  sender, System::EventArgs^  e) {
			 
			 AcceptButton = buttonAnzeigen;
		 }
private: System::Void tabPageSchau_Enter(System::Object^  sender, System::EventArgs^  e) {

			 AcceptButton = buttonStarten;
		 }
private: System::Void tabControl1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabControl1_Enter_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBoxNeuesFenster_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

