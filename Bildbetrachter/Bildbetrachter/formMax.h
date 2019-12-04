#pragma once

namespace Bildbetrachter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für formMax
	/// </summary>
	public ref class formMax : public System::Windows::Forms::Form
	{
	public:
		formMax(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			
		}

		Void bildLaden(String ^bildname) {
			pictureBoxFormMax->Load(bildname);
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~formMax()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBoxFormMax;
	protected: 

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
			this->pictureBoxFormMax = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxFormMax))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBoxFormMax
			// 
			this->pictureBoxFormMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxFormMax->Location = System::Drawing::Point(-1, 1);
			this->pictureBoxFormMax->Name = L"pictureBoxFormMax";
			this->pictureBoxFormMax->Size = System::Drawing::Size(286, 262);
			this->pictureBoxFormMax->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxFormMax->TabIndex = 0;
			this->pictureBoxFormMax->TabStop = false;
			this->pictureBoxFormMax->Click += gcnew System::EventHandler(this, &formMax::pictureBoxFormMax_Click);
			// 
			// formMax
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pictureBoxFormMax);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"formMax";
			this->Text = L"Große Darstellung";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &formMax::formMax_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxFormMax))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBoxFormMax_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void formMax_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
