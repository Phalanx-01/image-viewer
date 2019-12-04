#pragma once
#include "urlOeffnenDialog.h"

namespace Minibrowser {

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
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemDatei;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemBeenden;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemOeffnen;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemNavigation;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemVorwaerts;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemZurueck;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemNeuLaden;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemLadenAbbrechen;
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
	private: System::Windows::Forms::ToolStrip^  toolStripAdresse;
	private: System::Windows::Forms::ToolStrip^  toolStripNavigation;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonZurueck;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonVorwaerts;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonNeuLaden;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonLadenAbbrechen;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonLosGehts;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemAnsicht;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemNavigationsliste;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemSymbolleisten;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemSubAdresse;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemSubNavigation;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemSortieren;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemLoeschen;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripMenuItem^  hilfeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemVollbild;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  contextMenuStripItemAdresse;
	private: System::Windows::Forms::ToolStripMenuItem^  contextMenuStripItemNavigation;
	private: System::ComponentModel::IContainer^  components;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItemSortieren = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemLoeschen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItemDatei = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemOeffnen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItemBeenden = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemNavigation = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemVorwaerts = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemZurueck = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemNeuLaden = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemLadenAbbrechen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemAnsicht = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemVollbild = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemNavigationsliste = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemSymbolleisten = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemSubAdresse = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemSubNavigation = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hilfeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->toolStripAdresse = (gcnew System::Windows::Forms::ToolStrip());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStripItemAdresse = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStripItemNavigation = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButtonLosGehts = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripNavigation = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonZurueck = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonVorwaerts = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonNeuLaden = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonLadenAbbrechen = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->toolStripAdresse->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->toolStripNavigation->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->listBox1);
			this->splitContainer1->Panel1->Controls->Add(this->toolStrip1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->webBrowser1);
			this->splitContainer1->Size = System::Drawing::Size(688, 237);
			this->splitContainer1->SplitterDistance = 135;
			this->splitContainer1->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 25);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(135, 212);
			this->listBox1->TabIndex = 0;
			this->listBox1->Click += gcnew System::EventHandler(this, &Form1::listBox1_Click);
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItemSortieren, 
				this->toolStripMenuItemLoeschen});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(122, 48);
			// 
			// toolStripMenuItemSortieren
			// 
			this->toolStripMenuItemSortieren->Name = L"toolStripMenuItemSortieren";
			this->toolStripMenuItemSortieren->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItemSortieren->Text = L"&Sortieren";
			this->toolStripMenuItemSortieren->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemSortieren_Click);
			// 
			// toolStripMenuItemLoeschen
			// 
			this->toolStripMenuItemLoeschen->Name = L"toolStripMenuItemLoeschen";
			this->toolStripMenuItemLoeschen->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItemLoeschen->Text = L"&Löschen";
			this->toolStripMenuItemLoeschen->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemLoeschen_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripLabel1, 
				this->toolStripButton1});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStrip1->Size = System::Drawing::Size(135, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(91, 22);
			this->toolStripLabel1->Text = L"Navigationsliste";
			this->toolStripLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"Schließen";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(549, 237);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &Form1::webBrowser1_DocumentCompleted);
			this->webBrowser1->Navigating += gcnew System::Windows::Forms::WebBrowserNavigatingEventHandler(this, &Form1::webBrowser1_Navigating);
			this->webBrowser1->ProgressChanged += gcnew System::Windows::Forms::WebBrowserProgressChangedEventHandler(this, &Form1::webBrowser1_ProgressChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItemDatei, 
				this->toolStripMenuItemNavigation, this->toolStripMenuItemAnsicht, this->hilfeToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(688, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItemDatei
			// 
			this->toolStripMenuItemDatei->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItemOeffnen, 
				this->toolStripSeparator1, this->toolStripMenuItemBeenden});
			this->toolStripMenuItemDatei->Name = L"toolStripMenuItemDatei";
			this->toolStripMenuItemDatei->Size = System::Drawing::Size(46, 20);
			this->toolStripMenuItemDatei->Text = L"&Datei";
			// 
			// toolStripMenuItemOeffnen
			// 
			this->toolStripMenuItemOeffnen->Name = L"toolStripMenuItemOeffnen";
			this->toolStripMenuItemOeffnen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->toolStripMenuItemOeffnen->Size = System::Drawing::Size(165, 22);
			this->toolStripMenuItemOeffnen->Text = L"Ö&ffnen...";
			this->toolStripMenuItemOeffnen->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemOeffnen_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(162, 6);
			// 
			// toolStripMenuItemBeenden
			// 
			this->toolStripMenuItemBeenden->Name = L"toolStripMenuItemBeenden";
			this->toolStripMenuItemBeenden->Size = System::Drawing::Size(165, 22);
			this->toolStripMenuItemBeenden->Text = L"&Beenden";
			this->toolStripMenuItemBeenden->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemBeenden_Click);
			// 
			// toolStripMenuItemNavigation
			// 
			this->toolStripMenuItemNavigation->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItemVorwaerts, 
				this->toolStripMenuItemZurueck, this->toolStripMenuItemNeuLaden, this->toolStripMenuItemLadenAbbrechen});
			this->toolStripMenuItemNavigation->Name = L"toolStripMenuItemNavigation";
			this->toolStripMenuItemNavigation->Size = System::Drawing::Size(77, 20);
			this->toolStripMenuItemNavigation->Text = L"&Navigation";
			// 
			// toolStripMenuItemVorwaerts
			// 
			this->toolStripMenuItemVorwaerts->Enabled = false;
			this->toolStripMenuItemVorwaerts->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItemVorwaerts.Image")));
			this->toolStripMenuItemVorwaerts->Name = L"toolStripMenuItemVorwaerts";
			this->toolStripMenuItemVorwaerts->Size = System::Drawing::Size(167, 22);
			this->toolStripMenuItemVorwaerts->Text = L"&Vorwärts";
			this->toolStripMenuItemVorwaerts->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemVorwaerts_Click);
			// 
			// toolStripMenuItemZurueck
			// 
			this->toolStripMenuItemZurueck->Enabled = false;
			this->toolStripMenuItemZurueck->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItemZurueck.Image")));
			this->toolStripMenuItemZurueck->Name = L"toolStripMenuItemZurueck";
			this->toolStripMenuItemZurueck->Size = System::Drawing::Size(167, 22);
			this->toolStripMenuItemZurueck->Text = L"&Rückwärts";
			this->toolStripMenuItemZurueck->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemRueckwaerts_Click);
			// 
			// toolStripMenuItemNeuLaden
			// 
			this->toolStripMenuItemNeuLaden->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItemNeuLaden.Image")));
			this->toolStripMenuItemNeuLaden->Name = L"toolStripMenuItemNeuLaden";
			this->toolStripMenuItemNeuLaden->Size = System::Drawing::Size(167, 22);
			this->toolStripMenuItemNeuLaden->Text = L"&Neu Laden";
			this->toolStripMenuItemNeuLaden->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemNeuLaden_Click);
			// 
			// toolStripMenuItemLadenAbbrechen
			// 
			this->toolStripMenuItemLadenAbbrechen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItemLadenAbbrechen.Image")));
			this->toolStripMenuItemLadenAbbrechen->Name = L"toolStripMenuItemLadenAbbrechen";
			this->toolStripMenuItemLadenAbbrechen->Size = System::Drawing::Size(167, 22);
			this->toolStripMenuItemLadenAbbrechen->Text = L"Laden &Abbrechen";
			this->toolStripMenuItemLadenAbbrechen->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemLadenAbbrechen_Click);
			// 
			// toolStripMenuItemAnsicht
			// 
			this->toolStripMenuItemAnsicht->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItemVollbild, 
				this->toolStripMenuItemNavigationsliste, this->toolStripMenuItemSymbolleisten});
			this->toolStripMenuItemAnsicht->Name = L"toolStripMenuItemAnsicht";
			this->toolStripMenuItemAnsicht->Size = System::Drawing::Size(59, 20);
			this->toolStripMenuItemAnsicht->Text = L"&Ansicht";
			// 
			// toolStripMenuItemVollbild
			// 
			this->toolStripMenuItemVollbild->CheckOnClick = true;
			this->toolStripMenuItemVollbild->Name = L"toolStripMenuItemVollbild";
			this->toolStripMenuItemVollbild->Size = System::Drawing::Size(158, 22);
			this->toolStripMenuItemVollbild->Text = L"&Vollbild";
			this->toolStripMenuItemVollbild->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemVollbild_Click);
			// 
			// toolStripMenuItemNavigationsliste
			// 
			this->toolStripMenuItemNavigationsliste->Checked = true;
			this->toolStripMenuItemNavigationsliste->CheckOnClick = true;
			this->toolStripMenuItemNavigationsliste->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItemNavigationsliste->Name = L"toolStripMenuItemNavigationsliste";
			this->toolStripMenuItemNavigationsliste->Size = System::Drawing::Size(158, 22);
			this->toolStripMenuItemNavigationsliste->Text = L"&Navigationsliste";
			this->toolStripMenuItemNavigationsliste->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemNavigationsliste_Click);
			// 
			// toolStripMenuItemSymbolleisten
			// 
			this->toolStripMenuItemSymbolleisten->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItemSubAdresse, 
				this->toolStripMenuItemSubNavigation});
			this->toolStripMenuItemSymbolleisten->Name = L"toolStripMenuItemSymbolleisten";
			this->toolStripMenuItemSymbolleisten->Size = System::Drawing::Size(158, 22);
			this->toolStripMenuItemSymbolleisten->Text = L"&Symbolleisten";
			// 
			// toolStripMenuItemSubAdresse
			// 
			this->toolStripMenuItemSubAdresse->Checked = true;
			this->toolStripMenuItemSubAdresse->CheckOnClick = true;
			this->toolStripMenuItemSubAdresse->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItemSubAdresse->Name = L"toolStripMenuItemSubAdresse";
			this->toolStripMenuItemSubAdresse->Size = System::Drawing::Size(132, 22);
			this->toolStripMenuItemSubAdresse->Text = L"Ad&resse";
			this->toolStripMenuItemSubAdresse->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemSubAdresse_Click);
			// 
			// toolStripMenuItemSubNavigation
			// 
			this->toolStripMenuItemSubNavigation->Checked = true;
			this->toolStripMenuItemSubNavigation->CheckOnClick = true;
			this->toolStripMenuItemSubNavigation->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItemSubNavigation->Name = L"toolStripMenuItemSubNavigation";
			this->toolStripMenuItemSubNavigation->Size = System::Drawing::Size(132, 22);
			this->toolStripMenuItemSubNavigation->Text = L"Na&vigation";
			this->toolStripMenuItemSubNavigation->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemSubNavigation_Click);
			// 
			// hilfeToolStripMenuItem
			// 
			this->hilfeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->infoToolStripMenuItem});
			this->hilfeToolStripMenuItem->Name = L"hilfeToolStripMenuItem";
			this->hilfeToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->hilfeToolStripMenuItem->Text = L"Hilfe";
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->infoToolStripMenuItem->Text = L"Info...";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::infoToolStripMenuItem_Click);
			// 
			// toolStripContainer1
			// 
			this->toolStripContainer1->BottomToolStripPanelVisible = false;
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->AutoScroll = true;
			this->toolStripContainer1->ContentPanel->Controls->Add(this->splitContainer1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(688, 237);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->LeftToolStripPanelVisible = false;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->RightToolStripPanelVisible = false;
			this->toolStripContainer1->Size = System::Drawing::Size(688, 311);
			this->toolStripContainer1->TabIndex = 2;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStripAdresse);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStripNavigation);
			// 
			// toolStripAdresse
			// 
			this->toolStripAdresse->ContextMenuStrip = this->contextMenuStrip2;
			this->toolStripAdresse->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStripAdresse->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripTextBox1, 
				this->toolStripButtonLosGehts});
			this->toolStripAdresse->Location = System::Drawing::Point(3, 24);
			this->toolStripAdresse->Name = L"toolStripAdresse";
			this->toolStripAdresse->Size = System::Drawing::Size(444, 25);
			this->toolStripAdresse->TabIndex = 2;
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->contextMenuStripItemAdresse, 
				this->contextMenuStripItemNavigation});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(133, 48);
			// 
			// contextMenuStripItemAdresse
			// 
			this->contextMenuStripItemAdresse->Checked = true;
			this->contextMenuStripItemAdresse->CheckOnClick = true;
			this->contextMenuStripItemAdresse->CheckState = System::Windows::Forms::CheckState::Checked;
			this->contextMenuStripItemAdresse->Name = L"contextMenuStripItemAdresse";
			this->contextMenuStripItemAdresse->Size = System::Drawing::Size(132, 22);
			this->contextMenuStripItemAdresse->Text = L"Adresse";
			this->contextMenuStripItemAdresse->Click += gcnew System::EventHandler(this, &Form1::contextMenuStripItemAdresse_Click);
			// 
			// contextMenuStripItemNavigation
			// 
			this->contextMenuStripItemNavigation->Checked = true;
			this->contextMenuStripItemNavigation->CheckOnClick = true;
			this->contextMenuStripItemNavigation->CheckState = System::Windows::Forms::CheckState::Checked;
			this->contextMenuStripItemNavigation->Name = L"contextMenuStripItemNavigation";
			this->contextMenuStripItemNavigation->Size = System::Drawing::Size(132, 22);
			this->contextMenuStripItemNavigation->Text = L"Navigation";
			this->contextMenuStripItemNavigation->Click += gcnew System::EventHandler(this, &Form1::contextMenuStripItemNavigation_Click);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->toolStripTextBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::AllSystemSources;
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(350, 25);
			this->toolStripTextBox1->ToolTipText = L"Geben Sie eine Adresse ein";
			this->toolStripTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::toolStripTextBox1_KeyDown);
			// 
			// toolStripButtonLosGehts
			// 
			this->toolStripButtonLosGehts->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonLosGehts.Image")));
			this->toolStripButtonLosGehts->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonLosGehts->Name = L"toolStripButtonLosGehts";
			this->toolStripButtonLosGehts->Size = System::Drawing::Size(80, 22);
			this->toolStripButtonLosGehts->Text = L"Los geht´s";
			this->toolStripButtonLosGehts->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonLosGehts_Click);
			this->toolStripButtonLosGehts->MouseEnter += gcnew System::EventHandler(this, &Form1::toolStripButtonLos_MouseEnter);
			// 
			// toolStripNavigation
			// 
			this->toolStripNavigation->ContextMenuStrip = this->contextMenuStrip2;
			this->toolStripNavigation->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStripNavigation->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripButtonZurueck, 
				this->toolStripButtonVorwaerts, this->toolStripButtonNeuLaden, this->toolStripButtonLadenAbbrechen});
			this->toolStripNavigation->Location = System::Drawing::Point(3, 49);
			this->toolStripNavigation->Name = L"toolStripNavigation";
			this->toolStripNavigation->Size = System::Drawing::Size(104, 25);
			this->toolStripNavigation->TabIndex = 3;
			// 
			// toolStripButtonZurueck
			// 
			this->toolStripButtonZurueck->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonZurueck->Enabled = false;
			this->toolStripButtonZurueck->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonZurueck.Image")));
			this->toolStripButtonZurueck->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonZurueck->Name = L"toolStripButtonZurueck";
			this->toolStripButtonZurueck->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonZurueck->Text = L"Zurück";
			this->toolStripButtonZurueck->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemRueckwaerts_Click);
			// 
			// toolStripButtonVorwaerts
			// 
			this->toolStripButtonVorwaerts->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonVorwaerts->Enabled = false;
			this->toolStripButtonVorwaerts->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonVorwaerts.Image")));
			this->toolStripButtonVorwaerts->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonVorwaerts->Name = L"toolStripButtonVorwaerts";
			this->toolStripButtonVorwaerts->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonVorwaerts->Text = L"Vorwärts";
			this->toolStripButtonVorwaerts->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemVorwaerts_Click);
			// 
			// toolStripButtonNeuLaden
			// 
			this->toolStripButtonNeuLaden->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonNeuLaden->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonNeuLaden.Image")));
			this->toolStripButtonNeuLaden->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonNeuLaden->Name = L"toolStripButtonNeuLaden";
			this->toolStripButtonNeuLaden->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonNeuLaden->Text = L"Neu Laden";
			this->toolStripButtonNeuLaden->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemNeuLaden_Click);
			// 
			// toolStripButtonLadenAbbrechen
			// 
			this->toolStripButtonLadenAbbrechen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonLadenAbbrechen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonLadenAbbrechen.Image")));
			this->toolStripButtonLadenAbbrechen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonLadenAbbrechen->Name = L"toolStripButtonLadenAbbrechen";
			this->toolStripButtonLadenAbbrechen->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonLadenAbbrechen->Text = L"Laden Abbrechen";
			this->toolStripButtonLadenAbbrechen->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItemLadenAbbrechen_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripProgressBar1, 
				this->toolStripStatusLabel1, this->toolStripStatusLabel2});
			this->statusStrip1->Location = System::Drawing::Point(0, 289);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(688, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Visible = false;
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(0, 17);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 311);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->toolStripAdresse->ResumeLayout(false);
			this->toolStripAdresse->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->toolStripNavigation->ResumeLayout(false);
			this->toolStripNavigation->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
				 
				 toolStripTextBox1->Text=webBrowser1->Url->ToString();
		
				if (listBox1->FindStringExact(toolStripTextBox1->Text,0)==-1) //==-1 ganz wichtig! weil ==false entspricht ==0 und somit wird der erste Eintrag nicht ausgeschlossen und kann somit immer wieder Eingetragen werden.
					 listBox1->Items->Add(webBrowser1->Url);
				 Text="Minibrowser - "+webBrowser1->Document->Title;


				 if (webBrowser1->CanGoBack) {
					 toolStripMenuItemZurueck->Enabled=true;
					 toolStripButtonZurueck->Enabled=true;
				 }
				 else {
					 toolStripMenuItemZurueck->Enabled=false;
					 toolStripButtonZurueck->Enabled=false;
				 }
				 if (webBrowser1->CanGoForward) {
					 toolStripMenuItemVorwaerts->Enabled=true;
					 toolStripButtonVorwaerts->Enabled=true;
				 }
				 else {
					 toolStripMenuItemVorwaerts->Enabled=false;
					 toolStripButtonVorwaerts->Enabled=false;
				 }
			 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripMenuItemBeenden_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void toolStripMenuItemOeffnen_Click(System::Object^  sender, System::EventArgs^  e) {

			 String ^adresse;
			 
			 urlOeffnenDialog ^oeffnenForm = gcnew urlOeffnenDialog();
			 oeffnenForm->ShowDialog();

			 if (oeffnenForm->DialogResult == Windows::Forms::DialogResult::OK) {

				 adresse = oeffnenForm->liefereAdresse();
				 oeffnenForm->Close();

				  //if (adresse!=String::Empty)
					 webBrowser1->Navigate(adresse);
			 }

		 }
private: System::Void toolStripMenuItemVorwaerts_Click(System::Object^  sender, System::EventArgs^  e) {

			// if (webBrowser1->CanGoForward)
				 webBrowser1->GoForward();
		 }
private: System::Void toolStripMenuItemRueckwaerts_Click(System::Object^  sender, System::EventArgs^  e) {

			// if (webBrowser1->CanGoBack)
				 webBrowser1->GoBack();
		 }
private: System::Void toolStripMenuItemNeuLaden_Click(System::Object^  sender, System::EventArgs^  e) {

			 webBrowser1->Refresh();
		 }
private: System::Void toolStripMenuItemLadenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e) {

			 webBrowser1->Stop();
		 }
private: System::Void toolStripButtonLosGehts_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (toolStripTextBox1->Text!=String::Empty)
				 webBrowser1->Navigate(toolStripTextBox1->Text);
		 }
private: System::Void toolStripTextBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if (e->KeyCode==Keys::Enter)
				 toolStripButtonLosGehts_Click(sender,e);
		 }
private: System::Void toolStripButtonLos_MouseEnter(System::Object^  sender, System::EventArgs^  e) {

			 toolStripButtonLosGehts->ToolTipText="Los geht´s zu " + toolStripTextBox1->Text;
		 }
private: System::Void toolStripMenuItemNavigationsliste_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (toolStripMenuItemNavigationsliste->Checked) {
				 splitContainer1->Panel1Collapsed=false;
				 toolStripMenuItemVollbild->Checked=false;
			 }
			 else {
				 splitContainer1->Panel1Collapsed=true;
				 if (toolStripMenuItemSubAdresse->Checked==false && toolStripMenuItemSubNavigation->Checked==false)
					 toolStripMenuItemVollbild->Checked=true;
			 }
		 }
private: System::Void toolStripMenuItemSubAdresse_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (toolStripMenuItemSubAdresse->Checked) {
				 toolStripAdresse->Visible=true;
				 toolStripMenuItemVollbild->Checked=false;
				 contextMenuStripItemAdresse->Checked=true;
			 }
			 else {
				 toolStripAdresse->Visible=false;
				 if (toolStripMenuItemNavigationsliste->Checked==false && toolStripMenuItemSubNavigation->Checked==false)
					 toolStripMenuItemVollbild->Checked=true;
				 contextMenuStripItemAdresse->Checked=false;
			 }
			 
		 }
private: System::Void toolStripMenuItemSubNavigation_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (toolStripMenuItemSubNavigation->Checked) {
				 toolStripNavigation->Visible=true;
				 toolStripMenuItemVollbild->Checked=false;
				 contextMenuStripItemNavigation->Checked=true;
			 }
			 else {
				 toolStripNavigation->Visible=false;
				 if (toolStripMenuItemNavigationsliste->Checked==false && toolStripMenuItemSubAdresse->Checked==false)
					 toolStripMenuItemVollbild->Checked=true;
				 contextMenuStripItemNavigation->Checked=false;
			 }
		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {

			 toolStripMenuItemNavigationsliste->Checked=false;
			 splitContainer1->Panel1Collapsed=true;
			 if (toolStripMenuItemNavigationsliste->Checked==false && toolStripMenuItemSubNavigation->Checked==false &&
				 toolStripMenuItemSubAdresse->Checked==false)
					 toolStripMenuItemVollbild->Checked=true;
		 }
private: System::Void listBox1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (listBox1->SelectedIndex!=-1)
				 webBrowser1->Navigate(listBox1->SelectedItem->ToString());
		 }
private: System::Void toolStripMenuItemSortieren_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (toolStripMenuItemSortieren->Checked)
				 listBox1->Sorted=true;
			 else
				 listBox1->Sorted=false;
		 }
		 
private: System::Void toolStripMenuItemLoeschen_Click(System::Object^  sender, System::EventArgs^  e) {

			 listBox1->Items->Clear();
		 }
private: System::Void webBrowser1_Navigating(System::Object^  sender, System::Windows::Forms::WebBrowserNavigatingEventArgs^  e) {

			 toolStripProgressBar1->Visible=true;
		 }
private: System::Void webBrowser1_ProgressChanged(System::Object^  sender, System::Windows::Forms::WebBrowserProgressChangedEventArgs^  e) {

			 if (e->CurrentProgress!=-1)
			 toolStripStatusLabel1->Text="Lade " + e->CurrentProgress + " Bytes von " + e->MaximumProgress;

			 toolStripProgressBar1->Maximum=Convert::ToInt32(e->MaximumProgress);
			 toolStripProgressBar1->Value=Convert::ToInt32(e->CurrentProgress);

			 if (e->CurrentProgress==e->MaximumProgress) {
				 toolStripStatusLabel1->Text="Seite geladen";
				 toolStripProgressBar1->Visible=false;
			 }
		 }
private: System::Void infoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 MessageBox::Show("Programmiert von Koutsouridis Loukas ", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		 }
private: System::Void toolStripMenuItemVollbild_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (toolStripMenuItemVollbild->Checked) {
				 splitContainer1->Panel1Collapsed=true;
				 toolStripAdresse->Visible=false;
				 toolStripNavigation->Visible=false;

				toolStripMenuItemNavigationsliste->Checked=false;
				toolStripMenuItemSubNavigation->Checked=false;
				toolStripMenuItemSubAdresse->Checked=false;
				contextMenuStripItemAdresse->Checked=false;
				contextMenuStripItemNavigation->Checked=false;
			 }
			 else {
				 splitContainer1->Panel1Collapsed=false;
				 toolStripAdresse->Visible=true;
				 toolStripNavigation->Visible=true;

				 toolStripMenuItemNavigationsliste->Checked=true;
;;				toolStripMenuItemSubNavigation->Checked=true;
				toolStripMenuItemSubAdresse->Checked=true;
				contextMenuStripItemAdresse->Checked=true;
				contextMenuStripItemNavigation->Checked=true;
			 }
		 }
private: System::Void contextMenuStripItemAdresse_Click(System::Object^  sender, System::EventArgs^  e) {

			if (toolStripMenuItemSubAdresse->Checked==true) {

				toolStripMenuItemSubAdresse->Checked=false;
				toolStripMenuItemSubAdresse_Click(sender,e);
			}
			else {
				toolStripMenuItemSubAdresse->Checked=true;
				toolStripMenuItemSubAdresse_Click(sender,e);
			}
		 }
private: System::Void contextMenuStripItemNavigation_Click(System::Object^  sender, System::EventArgs^  e) {
 
			if (toolStripMenuItemSubNavigation->Checked==true) {

				toolStripMenuItemSubNavigation->Checked=false;
				toolStripMenuItemSubNavigation_Click(sender,e);
			}
			else {
				toolStripMenuItemSubNavigation->Checked=true;
				toolStripMenuItemSubNavigation_Click(sender,e);
			}
		 }
};
}

