#pragma once

namespace cpbs14c_b {

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

			spielfeldLinienBreite=10;
			schlaegerGroesse=50;
			ballPosition.richtungX = true;
			ballPosition.richtungY = true;
			ballPosition.winkel = 0;
			//pinsel = gcnew SolidBrush(Color::White);
			pinsel2 = gcnew SolidBrush(Color::Black);
			pinsel3 = gcnew SolidBrush(Color::White);
			zeichenflaeche=spielfeld->CreateGraphics();
			spielfeld->BackColor=pinsel3->Color;//Color::Black;

			setzeSpielfeld();
			neuerBall();

			spielPause=true;
			//aktuelleSpielzeit=timerSpiel->Interval/1000;

			timerBall->Enabled=false;
			timerSpiel->Enabled=false;
			timerSekunde->Enabled=false;

			schrift=gcnew System::Drawing::Font("Arial",12,System::Drawing::FontStyle::Bold);

			pauseToolStripMenuItem->Enabled=false;

			spielpunkte=gcnew Score();

			punkteMehr=1;
			punkteWeniger=-5;
			winkelZufall=5;

			//zweiteGroesse=gcnew Aufloesung();
			neueGroesse=Point(0,0);
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

		Void setzeSpielfeld() {
				spielfeldGroesse=spielfeld->ClientRectangle;
				spielfeldMaxX = spielfeldGroesse.Right-spielfeldLinienBreite;
				spielfeldMinX = spielfeldGroesse.Left+spielfeldLinienBreite+1;
				spielfeldMaxY = spielfeldGroesse.Bottom-spielfeldLinienBreite;
				spielfeldMinY = spielfeldGroesse.Top+spielfeldLinienBreite;
		}

		Void zeichneSpielfeld() {
			//pinsel->Color = Color::White;
			zeichenflaeche->FillRectangle(pinsel2,0,0,spielfeldMaxX,spielfeldLinienBreite);
			zeichenflaeche->FillRectangle(pinsel2,spielfeldMaxX,0,spielfeldLinienBreite,spielfeldMaxY+spielfeldLinienBreite);
			zeichenflaeche->FillRectangle(pinsel2,0,spielfeldMaxY,spielfeldMaxX,spielfeldLinienBreite);
			//pinsel->Color = Color::Gray;
			zeichenflaeche->FillRectangle(pinsel2,spielfeldMaxX/2,spielfeldMinY,spielfeldLinienBreite,spielfeldMaxY-spielfeldLinienBreite);
		}

		Void zeichneBall(Point position) {
			Random ^zufall=gcnew Random();
			ball->Location=position;
			if ((position.X+10)>=spielfeldMaxX)
				ballPosition.richtungX=false;
			if ((position.Y+10)>=spielfeldMaxY)
				ballPosition.richtungY=true;
			else
				if (position.Y<=spielfeldMinY)
					ballPosition.richtungY=false;
			if ((position.X==spielfeldMinX) && ((schlaeger->Top<=position.Y) && (schlaeger->Bottom>=position.Y))) {
				if(ballPosition.richtungX==false)
					zeichnePunkte(Convert::ToString(spielpunkte->veraenderePunkte(punkteMehr)));
				ballPosition.richtungX=true;
				ballPosition.winkel=zufall->Next(winkelZufall);
			}
			if (position.X < spielfeldMinX) {
				zeichnePunkte(Convert::ToString(spielpunkte->veraenderePunkte(punkteWeniger)));
				Threading::Thread::Sleep(1000);
				zeichneBall(Point(spielfeldMinX,position.Y));
				ballPosition.richtungX=true;
			}
		}

		Void zeichneSchlaeger(Int32 Y) {
			if (((Y+schlaegerGroesse)<spielfeldMaxY) && (Y>spielfeldMinY))
				schlaeger->Top=Y;
		}

		Void neuerBall() {
			ball->Width=10;
			ball->Height=10;
			schlaeger->Width=spielfeldLinienBreite;
			schlaeger->Height=schlaegerGroesse;
			ball->BackColor=pinsel2->Color;//Color::White;
			schlaeger->BackColor=pinsel2->Color;//Color::White;
			schlaeger->Left=2;
			zeichneSchlaeger((spielfeldMaxY/2)-(schlaegerGroesse/2));
			zeichneBall(Point(spielfeldMinX,spielfeldMaxY/2));
		}

		Void zeichneZeit(String ^restzeit) {
			//pinsel->Color=spielfeld->BackColor;
			zeichenflaeche->FillRectangle(pinsel3,spielfeldMaxX-50,spielfeldMinY+20,30,20);
			//pinsel->Color=Color::White;
			zeichenflaeche->DrawString(restzeit,schrift,pinsel2,Point(spielfeldMaxX-50,spielfeldMinY+20));
		}

		Boolean neuesSpiel() {
			Boolean ergebnis;
			if (MessageBox::Show("Neues Spiel starten?","Neues Spiel",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==Windows::Forms::DialogResult::Yes) {
				aktuelleSpielzeit=120;
				zeichneSpielfeld();
				neuerBall();
				zeichneZeit(Convert::ToString(aktuelleSpielzeit));
				ergebnis=true;
				pauseToolStripMenuItem->Enabled=true;
				spielpunkte->loeschePunkte();
				zeichnePunkte("0");
			}
			else
				ergebnis=false;
			return ergebnis;
		}

		Void zeichnePunkte(String ^punkte) {
			//pinsel->Color=spielfeld->BackColor;
			zeichenflaeche->FillRectangle(pinsel3,spielfeldMaxX-50,spielfeldMinY+40,30,20);
			//pinsel->Color=Color::White;
			zeichenflaeche->DrawString(punkte,schrift,pinsel2,Point(spielfeldMaxX-50,spielfeldMinY+40));
		}

		Void setzeEinstellungen (Int32 schlaeger, Int32 mehr, Int32 weniger, Int32 winkel) {

			schlaegerGroesse=schlaeger;
			punkteMehr=mehr;
			punkteWeniger=weniger;
			winkelZufall=winkel;
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;


			ref struct spielball {
				Boolean richtungX;
				Boolean richtungY;
				Int32 winkel;
			};
			Graphics ^zeichenflaeche;
			Rectangle spielfeldGroesse;
			Int32 spielfeldMaxX, spielfeldMaxY, spielfeldMinX, spielfeldMinY;
			Int32 spielfeldLinienBreite;
			Int32 schlaegerGroesse, schlaegerPosition;
			spielball ballPosition;
			//SolidBrush ^pinsel;
			SolidBrush ^pinsel2;
			SolidBrush ^pinsel3;
			Boolean spielPause;
			Int32 aktuelleSpielzeit;
			System::Drawing::Font ^schrift;
			Score ^spielpunkte;
			Int32 punkteMehr,punkteWeniger;
			Int32 winkelZufall;
			Point neueGroesse;
			//Aufloesung ^zweiteGroesse;
			public:
		

	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  spielToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  beendenToolStripMenuItem;
	private: System::Windows::Forms::Panel^  spielfeld;
	private: System::Windows::Forms::Panel^  ball;
	private: System::Windows::Forms::Panel^  schlaeger;
private: System::Windows::Forms::Timer^  timerBall;
private: System::Windows::Forms::Timer^  timerSpiel;
private: System::Windows::Forms::Timer^  timerSekunde;
private: System::Windows::Forms::ToolStripMenuItem^  pauseToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^  neuesSpielToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  bestenlisteToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  einstellungenToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  spielfeldToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  schwierigkeitsgradToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  sehrEinfachToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  einfachToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  mittelToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  schwerToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  sehrSchwerToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->spielToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->neuesSpielToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pauseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bestenlisteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->beendenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->einstellungenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spielfeldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->schwierigkeitsgradToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sehrEinfachToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->einfachToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mittelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->schwerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sehrSchwerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spielfeld = (gcnew System::Windows::Forms::Panel());
			this->ball = (gcnew System::Windows::Forms::Panel());
			this->schlaeger = (gcnew System::Windows::Forms::Panel());
			this->timerBall = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerSpiel = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerSekunde = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->spielfeld->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->spielToolStripMenuItem, 
				this->einstellungenToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(634, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// spielToolStripMenuItem
			// 
			this->spielToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->neuesSpielToolStripMenuItem, 
				this->pauseToolStripMenuItem, this->bestenlisteToolStripMenuItem, this->toolStripSeparator1, this->beendenToolStripMenuItem});
			this->spielToolStripMenuItem->Name = L"spielToolStripMenuItem";
			this->spielToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->spielToolStripMenuItem->Text = L"Spiel";
			// 
			// neuesSpielToolStripMenuItem
			// 
			this->neuesSpielToolStripMenuItem->Name = L"neuesSpielToolStripMenuItem";
			this->neuesSpielToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->neuesSpielToolStripMenuItem->Text = L"Neues &Spiel";
			this->neuesSpielToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::neuesSpielToolStripMenuItem_Click);
			// 
			// pauseToolStripMenuItem
			// 
			this->pauseToolStripMenuItem->Name = L"pauseToolStripMenuItem";
			this->pauseToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->pauseToolStripMenuItem->Text = L"&Pause";
			this->pauseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pauseToolStripMenuItem_Click);
			// 
			// bestenlisteToolStripMenuItem
			// 
			this->bestenlisteToolStripMenuItem->Name = L"bestenlisteToolStripMenuItem";
			this->bestenlisteToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->bestenlisteToolStripMenuItem->Text = L"&Bestenliste";
			this->bestenlisteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bestenlisteToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(132, 6);
			// 
			// beendenToolStripMenuItem
			// 
			this->beendenToolStripMenuItem->Name = L"beendenToolStripMenuItem";
			this->beendenToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->beendenToolStripMenuItem->Text = L"&Beenden";
			this->beendenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::beendenToolStripMenuItem_Click);
			// 
			// einstellungenToolStripMenuItem
			// 
			this->einstellungenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->spielfeldToolStripMenuItem, 
				this->schwierigkeitsgradToolStripMenuItem});
			this->einstellungenToolStripMenuItem->Name = L"einstellungenToolStripMenuItem";
			this->einstellungenToolStripMenuItem->Size = System::Drawing::Size(90, 20);
			this->einstellungenToolStripMenuItem->Text = L"Einstellungen";
			// 
			// spielfeldToolStripMenuItem
			// 
			this->spielfeldToolStripMenuItem->Name = L"spielfeldToolStripMenuItem";
			this->spielfeldToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->spielfeldToolStripMenuItem->Text = L"Spiel&feld";
			this->spielfeldToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::spielfeldToolStripMenuItem_Click);
			// 
			// schwierigkeitsgradToolStripMenuItem
			// 
			this->schwierigkeitsgradToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->sehrEinfachToolStripMenuItem, 
				this->einfachToolStripMenuItem, this->mittelToolStripMenuItem, this->schwerToolStripMenuItem, this->sehrSchwerToolStripMenuItem});
			this->schwierigkeitsgradToolStripMenuItem->Name = L"schwierigkeitsgradToolStripMenuItem";
			this->schwierigkeitsgradToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->schwierigkeitsgradToolStripMenuItem->Text = L"&Schwierigkeitsgrad";
			// 
			// sehrEinfachToolStripMenuItem
			// 
			this->sehrEinfachToolStripMenuItem->Name = L"sehrEinfachToolStripMenuItem";
			this->sehrEinfachToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->sehrEinfachToolStripMenuItem->Text = L"Sehr einfach";
			this->sehrEinfachToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sehrEinfachToolStripMenuItem_Click);
			// 
			// einfachToolStripMenuItem
			// 
			this->einfachToolStripMenuItem->Checked = true;
			this->einfachToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->einfachToolStripMenuItem->Name = L"einfachToolStripMenuItem";
			this->einfachToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->einfachToolStripMenuItem->Text = L"Einfach";
			this->einfachToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::einfachToolStripMenuItem_Click);
			// 
			// mittelToolStripMenuItem
			// 
			this->mittelToolStripMenuItem->Name = L"mittelToolStripMenuItem";
			this->mittelToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->mittelToolStripMenuItem->Text = L"Mittel";
			this->mittelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mittelToolStripMenuItem_Click);
			// 
			// schwerToolStripMenuItem
			// 
			this->schwerToolStripMenuItem->Name = L"schwerToolStripMenuItem";
			this->schwerToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->schwerToolStripMenuItem->Text = L"Schwer";
			this->schwerToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::schwerToolStripMenuItem_Click);
			// 
			// sehrSchwerToolStripMenuItem
			// 
			this->sehrSchwerToolStripMenuItem->Name = L"sehrSchwerToolStripMenuItem";
			this->sehrSchwerToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->sehrSchwerToolStripMenuItem->Text = L"Sehr schwer";
			this->sehrSchwerToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sehrSchwerToolStripMenuItem_Click);
			// 
			// spielfeld
			// 
			this->spielfeld->Controls->Add(this->ball);
			this->spielfeld->Controls->Add(this->schlaeger);
			this->spielfeld->Dock = System::Windows::Forms::DockStyle::Fill;
			this->spielfeld->Location = System::Drawing::Point(0, 24);
			this->spielfeld->Name = L"spielfeld";
			this->spielfeld->Size = System::Drawing::Size(634, 427);
			this->spielfeld->TabIndex = 1;
			this->spielfeld->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::spielfeld_Paint);
			// 
			// ball
			// 
			this->ball->Location = System::Drawing::Point(383, 165);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(200, 100);
			this->ball->TabIndex = 1;
			// 
			// schlaeger
			// 
			this->schlaeger->Location = System::Drawing::Point(109, 154);
			this->schlaeger->Name = L"schlaeger";
			this->schlaeger->Size = System::Drawing::Size(200, 100);
			this->schlaeger->TabIndex = 0;
			this->schlaeger->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::schlaeger_MouseMove);
			// 
			// timerBall
			// 
			this->timerBall->Enabled = true;
			this->timerBall->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timerSpiel
			// 
			this->timerSpiel->Interval = 120000;
			this->timerSpiel->Tick += gcnew System::EventHandler(this, &Form1::timerSpiel_Tick);
			// 
			// timerSekunde
			// 
			this->timerSekunde->Interval = 1000;
			this->timerSekunde->Tick += gcnew System::EventHandler(this, &Form1::timerSekunde_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 451);
			this->Controls->Add(this->spielfeld);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pong";
			this->TopMost = true;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->spielfeld->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void beendenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 Close();
			 }
private: System::Void schlaeger_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 
			 if (e->Button==Windows::Forms::MouseButtons::Left)
				 zeichneSchlaeger(e->Y+schlaeger->Top);
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			 Int32 neuX, neuY;

			 if (ballPosition.richtungX == true)
				 neuX=ball->Left+10;
			 else
				 neuX=ball->Left-10;

			 if (ballPosition.richtungY == true)
				 neuY=ball->Top-ballPosition.winkel;
			 else
				 neuY=ball->Top+ballPosition.winkel;

			 zeichneBall(Point(neuX,neuY));
		 }
private: System::Void spielfeld_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 zeichneZeit(Convert::ToString(aktuelleSpielzeit));
			 zeichneSpielfeld();
		 }
private: System::Void timerSekunde_Tick(System::Object^  sender, System::EventArgs^  e) {
			 aktuelleSpielzeit=aktuelleSpielzeit-1;
			 zeichneZeit(Convert::ToString(aktuelleSpielzeit));
		 }
private: System::Void pauseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (spielPause==false) {
				 timerBall->Enabled=false;
				 timerSekunde->Enabled=false;
				 timerSpiel->Enabled=false;
				 pauseToolStripMenuItem->Checked=true;
				 this->Text="Pong -- Das Spiel ist angehalten!";
				 spielPause=true;
				 spielfeldToolStripMenuItem->Enabled=true;
				 schwierigkeitsgradToolStripMenuItem->Enabled=true;
			 }
			 else {
				 timerSpiel->Interval=aktuelleSpielzeit*1000;
				 timerBall->Enabled=true;
				 timerSpiel->Enabled=true;
				 timerSekunde->Enabled=true;
				 pauseToolStripMenuItem->Checked=false;
				 this->Text="Pong";
				 spielPause=false;
				 spielfeldToolStripMenuItem->Enabled=false;
				 schwierigkeitsgradToolStripMenuItem->Enabled=false;
			 }
		 }
private: System::Void neuesSpielToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (spielPause==false) {
				 pauseToolStripMenuItem_Click(sender,e);
				 neuesSpiel();
				 pauseToolStripMenuItem_Click(sender,e);
			 }
			 else
				 if (neuesSpiel()==true)
					 pauseToolStripMenuItem_Click(sender,e);
		 }
private: System::Void timerSpiel_Tick(System::Object^  sender, System::EventArgs^  e) {
			 pauseToolStripMenuItem_Click(sender,e);
			 if (spielpunkte->neuerEintrag()==true) {
				 ball->Hide();
				 schlaeger->Hide();
				 spielpunkte->listeAusgeben(zeichenflaeche, spielfeldGroesse, pinsel3, pinsel2);
				 Threading::Thread::Sleep(5000);
				 zeichenflaeche->Clear(spielfeld->BackColor);
				 ball->Show();
				 schlaeger->Show();
			 }
			 MessageBox::Show("Die Zeit ist um","Spielende",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 if (neuesSpiel()==true)
				pauseToolStripMenuItem_Click(sender,e);
		     else
				beendenToolStripMenuItem_Click(sender,e);
				  
		 }

private: System::Void bestenlisteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Boolean weiter=false;

			 if(spielPause==false) {
				 pauseToolStripMenuItem_Click(sender,e);
				 weiter=true;
			 }

			 ball->Hide();
			 schlaeger->Hide();
			 spielpunkte->listeAusgeben(zeichenflaeche,spielfeldGroesse,pinsel3,pinsel2);
			 Threading::Thread::Sleep(5000);
			 zeichenflaeche->Clear(spielfeld->BackColor);
			 //zeichneSpielfeld();
			 zeichnePunkte(Convert::ToString(spielpunkte->veraenderePunkte(0)));
			 ball->Show();
			 schlaeger->Show();

			 if(weiter==true)
				 pauseToolStripMenuItem_Click(sender,e);
		 
		 }
private: System::Void schwerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 timerBall->Interval=25;
			 setzeEinstellungen(50,10,-5,25);
			 schwerToolStripMenuItem->Checked=true;
			 sehrEinfachToolStripMenuItem->Checked=false;
			 einfachToolStripMenuItem->Checked=false;
			 mittelToolStripMenuItem->Checked=false;
			 sehrSchwerToolStripMenuItem->Checked=false;
		 }
private: System::Void einfachToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 timerBall->Interval=100;
			 setzeEinstellungen(50,1,-5,5);
			 schwerToolStripMenuItem->Checked=false;
			 sehrEinfachToolStripMenuItem->Checked=false;
			 einfachToolStripMenuItem->Checked=true;
			 mittelToolStripMenuItem->Checked=false;
			 sehrSchwerToolStripMenuItem->Checked=false;
		 }
private: System::Void sehrEinfachToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 timerBall->Interval=200;
			 setzeEinstellungen(100,1,-20,2);
			 schwerToolStripMenuItem->Checked=false;
			 sehrEinfachToolStripMenuItem->Checked=true;
			 einfachToolStripMenuItem->Checked=false;
			 mittelToolStripMenuItem->Checked=false;
			 sehrSchwerToolStripMenuItem->Checked=false;
		 }
private: System::Void mittelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 timerBall->Interval=50;
			 setzeEinstellungen(50,3,-5,15);
			 schwerToolStripMenuItem->Checked=false;
			 sehrEinfachToolStripMenuItem->Checked=false;
			 einfachToolStripMenuItem->Checked=false;
			 mittelToolStripMenuItem->Checked=true;
			 sehrSchwerToolStripMenuItem->Checked=false;
		 }
private: System::Void sehrSchwerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 timerBall->Interval=10;
			 setzeEinstellungen(20,20,-5,40);
			 schwerToolStripMenuItem->Checked=false;
			 sehrEinfachToolStripMenuItem->Checked=false;
			 einfachToolStripMenuItem->Checked=false;
			 mittelToolStripMenuItem->Checked=false;
			 sehrSchwerToolStripMenuItem->Checked=true;
		 }
private: System::Void spielfeldToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 einstellungenDialog ^neueWerte=gcnew einstellungenDialog();

			 neueWerte->setzeWert(neueGroesse);
			 neueWerte->setzeRahmenfarbe(pinsel2->Color);
			 neueWerte->setzeSpielfeldfarbe(pinsel3->Color);

			 if (neueWerte->ShowDialog()==Windows::Forms::DialogResult::OK) {
				 neueGroesse=neueWerte->liefereWert();	
				 pinsel2->Color=neueWerte->liefereRahmenfarbe();
				 pinsel3->Color=neueWerte->liefereSpielfeldfarbe();
				 spielfeld->BackColor=neueWerte->liefereSpielfeldfarbe();
				 neueWerte->Close();
				 this->Width=neueGroesse.X;
				 this->Height=neueGroesse.Y;
				 this->Left=(Screen::PrimaryScreen->Bounds.Width-this->Width)/2;
				 this->Top=(Screen::PrimaryScreen->Bounds.Height-this->Height)/2;
				 zeichenflaeche=spielfeld->CreateGraphics();
				 setzeSpielfeld();
				 zeichenflaeche->Clear(spielfeld->BackColor);
				 neuerBall();
				 //zeichneSpielfeld();
				 zeichnePunkte(Convert::ToString(spielpunkte->veraenderePunkte(0)));
				 //zweiteGroesse->gibein(neueGroesse);
				 //MessageBox::Show(Convert::ToString(zweiteGroesse->gibaus()));
			 }
		 }
};
}

