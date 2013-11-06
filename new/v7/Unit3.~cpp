//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sLabel"
#pragma link "sMonthCalendar"
#pragma link "sPanel"
#pragma resource "*.dfm"
TForm3 *Form3;

int type_thises, result;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormCreate(TObject *Sender)
{
     Form3->DBRadioGroup1->ItemIndex = Form3->DBTypeThis->Text - 1;
     Form3->DBCodeNameSpecialty->ItemIndex = StrToInt(Form3->DBcns->Text) - 1;
     Form3->DBFieldScience->ItemIndex = StrToInt(Form3->DBfs->Text) - 1;

}
//---------------------------------------------------------------------------

void __fastcall TForm3::F3clickDatePublicationClick(TObject *Sender)
{
        AnsiString days = Form3->DatePublications->Day;
        AnsiString month = Form3->DatePublications->Month;
        AnsiString years = Form3->DatePublications->Year;

        AnsiString result = days + "." + month + "." + years;

        Form3->setDatePublications->Text = result;
        Form2->MON->Edit();
        Form2->MON->Fields->Fields[16]->Value = Form3->setDatePublications->Text;

}
//---------------------------------------------------------------------------


void __fastcall TForm3::DBFieldScienceChange(TObject *Sender)
{
      Form3->DBfs->Text = IntToStr( Form3->DBFieldScience->ItemIndex );
      Form2->MON->Edit();
      Form2->MON->Fields->Fields[9]->Value = IntToStr( Form3->DBFieldScience->ItemIndex + 1 ) ;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::F3SaveClick(TObject *Sender)
{
        // save DB
        Form2->MON->Edit();
        Form2->MON->Post();
        Form2->MON->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBRadioGroup1Change(TObject *Sender)
{
        /*
        type_thises = Form3->DBRadioGroup1->ItemIndex;

                switch( type_thises ) {
                        case 0:
                                result = 1;
                        break;
                        case 1:
                                result = 2;
                        break;
                }

       ShowMessage( result );

       Form3->DBRadioGroup1->ItemIndex = result;
       */
}
//-------------------------------------------------------------------------


void __fastcall TForm3::DBCodeNameSpecialtyChange(TObject *Sender)
{
      Form3->DBcns->Text = IntToStr( Form3->DBCodeNameSpecialty->ItemIndex );
      Form2->MON->Edit();
      Form2->MON->Fields->Fields[8]->Value = IntToStr( Form3->DBCodeNameSpecialty->ItemIndex + 1 ) ;
      //// save DB
      //Form2->MON->Edit();
      //Form2->MON->Post();
      //Form2->MON->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Close1Click(TObject *Sender)
{
        Form1->Close();
        Form2->Close();
        Form3->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm3::createItemsClick(TObject *Sender)
{
   Form3->Visible = false;
   Form2->Visible = false;
   Form1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Open1Click(TObject *Sender)
{
    Form1->Visible = false;
    Form3->Visible = false;
    Form2->Visible = true;
}
//---------------------------------------------------------------------------

