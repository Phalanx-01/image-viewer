#pragma once

namespace Minibrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für urlOeffnenDialog
	/// </summary>
	public ref class urlOeffnenDialog : public System::Windows::Forms::Form
	{
	public:
		urlOeffnenDialog(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

		String ^liefereAdresse() {
			return textBox1->Text;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~urlOeffnenDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelOeffnen;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonOeffnen;
	private: System::Windows::Forms::Button^  buttonAbbrechen;


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
			this->labelOeffnen = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOeffnen = (gcnew System::Windows::Forms::Button());
			this->buttonAbbrechen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelOeffnen
			// 
			this->labelOeffnen->AutoSize = true;
			this->labelOeffnen->Location = System::Drawing::Point(12, 19);
			this->labelOeffnen->Name = L"labelOeffnen";
			this->labelOeffnen->Size = System::Drawing::Size(42, 13);
			this->labelOeffnen->TabIndex = 3;
			this->labelOeffnen->Text = L"Öffnen:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &urlOeffnenDialog::textBox1_TextChanged);
			// 
			// buttonOeffnen
			// 
			this->buttonOeffnen->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonOeffnen->Enabled = false;
			this->buttonOeffnen->Location = System::Drawing::Point(15, 48);
			this->buttonOeffnen->Name = L"buttonOeffnen";
			this->buttonOeffnen->Size = System::Drawing::Size(75, 23);
			this->buttonOeffnen->TabIndex = 1;
			this->buttonOeffnen->Text = L"Öffnen";
			this->buttonOeffnen->UseVisualStyleBackColor = true;
			// 
			// buttonAbbrechen
			// 
			this->buttonAbbrechen->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonAbbrechen->Location = System::Drawing::Point(185, 48);
			this->buttonAbbrechen->Name = L"buttonAbbrechen";
			this->buttonAbbrechen->Size = System::Drawing::Size(75, 23);
			this->buttonAbbrechen->TabIndex = 2;
			this->buttonAbbrechen->Text = L"Abbrechen";
			this->buttonAbbrechen->UseVisualStyleBackColor = true;
			this->buttonAbbrechen->Click += gcnew System::EventHandler(this, &urlOeffnenDialog::buttonAbbrechen_Click);
			// 
			// urlOeffnenDialog
			// 
			this->AcceptButton = this->buttonOeffnen;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonAbbrechen;
			this->ClientSize = System::Drawing::Size(268, 78);
			this->ControlBox = false;
			this->Controls->Add(this->buttonAbbrechen);
			this->Controls->Add(this->buttonOeffnen);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->labelOeffnen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"urlOeffnenDialog";
			this->Text = L"Öffnen";
			this->Load += gcnew System::EventHandler(this, &urlOeffnenDialog::urlOeffnenDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAbbrechen_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void urlOeffnenDialog_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (textBox1->Text!=String::Empty)
				 buttonOeffnen->Enabled=true;
			 else
				 buttonOeffnen->Enabled=false;
		 }
};
}
