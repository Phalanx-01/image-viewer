using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Liste:IComparable {
private:
	Int32 listePunkte;
	String ^listeName;
public:
	Liste() {
		listePunkte=0;
		listeName="Nobody";
	}
	virtual Int32 CompareTo(Object ^objekt) {
		Liste ^tempListe=safe_cast<Liste^>(objekt);
		if (this->listePunkte < tempListe->listePunkte)
			return 1;
		if (this->listePunkte > tempListe->listePunkte)
			return -1;
		else
			return 0;
	}
	Int32 lieferePunkte() {
		return listePunkte;
	}
	String ^liefereName() {
		return listeName;
	}
	Void setzeEintrag(Int32 punkte, String ^name) {
		listePunkte=punkte;
		listeName=name;
	}
	};	

	ref class Score {
private :
	Int32 punkte;
	static Int32 anzahl=10;
	array <Liste^> ^bestenliste;

public:
	Score() {
		punkte=0;
		bestenliste=gcnew array <Liste^>(anzahl);
		for(Int32 i=0; i<anzahl; i++)
			bestenliste[i]=gcnew Liste();
	}
	Int32 veraenderePunkte(Int32 anzahl) {
		punkte=punkte+anzahl;
		return punkte;
	}
		Void loeschePunkte() {
		punkte=0;
	}
	Boolean neuerEintrag() {
			String ^tempName;
			if (punkte > bestenliste[anzahl-1]->lieferePunkte()) {
				cpbs14c_b::nameDialog ^neuerName=gcnew cpbs14c_b::nameDialog();
				if (neuerName->ShowDialog()==Windows::Forms::DialogResult::OK)
					tempName=neuerName->liefereName();
				neuerName->Close();
				bestenliste[anzahl-1]->setzeEintrag(punkte,tempName);
				Array::Sort(bestenliste);
				return true;
			}
			else
				return false;
		}
	Void listeAusgeben(Graphics ^zeichenflaeche, RectangleF flaeche,SolidBrush ^pinsel3, SolidBrush ^pinsel2) {
		//SolidBrush ^tempPinsel=gcnew SolidBrush(Color::White);
		System::Drawing::Font ^tempSchrift=gcnew System::Drawing::Font("Arial", 12, System::Drawing::FontStyle::Bold);
		System::Drawing::StringFormat ^ausrichtung=gcnew System::Drawing::StringFormat();
		Single punkteX, nameX, y;
		punkteX=flaeche.Left+50;
		nameX=flaeche.Left+250;
		y=flaeche.Top+50;
		ausrichtung->Alignment=System::Drawing::StringAlignment::Center;
		zeichenflaeche->Clear(pinsel3->Color/*Color::Black*/);
		zeichenflaeche->DrawString("-Bestenliste-\n", tempSchrift, pinsel2,/*tempPinsel,*/ flaeche.Width/2, y, ausrichtung);
		for (Int32 i=0; i<anzahl;i++) {
			y=y+20;
			zeichenflaeche->DrawString(Convert::ToString(bestenliste[i]->lieferePunkte()), tempSchrift, pinsel2,/*tempPinsel,*/ punkteX, y);
			zeichenflaeche->DrawString(bestenliste[i]->liefereName(), tempSchrift, pinsel2,/*tempPinsel,*/ nameX, y);
		}
		//delete tempPinsel;
	}

};

	/*ref class Farbauswahl {
	private:
		String ^rahmen;
		String ^spielfeld;
	public:
		Farbauswahl() {
			rahmen=gcnew String();
			spielfeld=gcnew String();
		}
	};*/

	/*ref class Aufloesung {
private :
	Point ^pixel;
	Point ^gespeichert;

public:
	Aufloesung() {
	 pixel=gcnew Point();
	 gespeichert=gcnew Point();
	}
	Point ^gibaus() {
		return pixel;
	}
	Point ^gibein(Point eingabe) {
		pixel=eingabe;
		return pixel;
	}
    }; */
