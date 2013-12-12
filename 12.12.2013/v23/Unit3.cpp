//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sLabel"
#pragma link "sMonthCalendar"
#pragma link "sPanel"
#pragma link "sGroupBox"
#pragma link "sCustomComboEdit"
#pragma link "sMaskEdit"
#pragma link "sTooledit"
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
    // Form3->DBRadioGroup1->ItemIndex = Form3->DBTypeThis->Text - 1;

     //ShowMessage(Form3->DBcns->Text);

     //DBcns
     //Form3->DBCodeNameSpecialty->ItemIndex = StrToInt(Form3->DBcns->Text);
     //Form3->DBFieldScience->ItemIndex = StrToInt(Form3->DBfs->Text);

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
        Form2->MON->Post();

}
//---------------------------------------------------------------------------


void __fastcall TForm3::DBFieldScienceChange(TObject *Sender)
{
      Form2->DBNavigator1->BtnClick(nbEdit);
      Form3->DBfs->Text = IntToStr( Form3->DBFieldScience->ItemIndex );
      //Form2->DBNavigator1->BtnClick(nbPost);

      //Form2->MON->Edit();
      //Form2->MON->Fields->Fields[9]->Value = IntToStr( Form3->DBFieldScience->ItemIndex ) ;
      //Form2->MON->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::F3SaveClick(TObject *Sender)
{
        if(IntToStr( Form3->DBCodeNameSpecialty->ItemIndex ) < 1 || IntToStr( Form3->DBFieldScience->ItemIndex ) < 1) {
                     if(IntToStr( Form3->DBCodeNameSpecialty->ItemIndex ) < 1) {
                         Application->MessageBox("Виберіть будь ласка дату 'Шифр і назва наукової спеціальності'!",
				"Помилка!", NULL);
                     }

                     if(IntToStr( Form3->DBFieldScience->ItemIndex ) < 1) {
                         Application->MessageBox("Виберіть будь ласка 'Галузь науки'!",
				"Помилка!", NULL);
                     }

                     // return;
                }


         // save DB
         //Form2->MON->Edit();
         //Form2->MON->Open();
         //Form2->MON->Edit();

         Form2->DBNavigator1->BtnClick(nbEdit);
         Form2->DBNavigator1->BtnClick(nbPost);

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
     Form2->DBNavigator1->BtnClick(nbEdit);
     Form3->DBcns->Text = IntToStr( Form3->DBCodeNameSpecialty->ItemIndex );
     // Form2->MON->Edit();
     // Form2->MON->Fields->Fields[8]->Value = IntToStr( Form3->DBCodeNameSpecialty->ItemIndex ) ;
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

        Form2->QF2->Active = false;
        Form2->QF2->Active = true;

    Form1->Visible = false;
    Form3->Visible = false;
    Form2->Visible = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Export1Click(TObject *Sender)
{
        Form4->ADOQuery1->Active = false;
        Form4->ADOQuery1->Active = true;

        Form4->Visible = true;        
}
//---------------------------------------------------------------------------





void __fastcall TForm3::TypeThesisClick(TObject *Sender)
{
        // settings params

         type_thises = Form3->TypeThesis->ItemIndex;




         switch( type_thises ) {
                case 0:
                        result = 1;
                break;
                case 1:
                        result = 2;
                break;
                default:
                        result = 1;
                break;
         }


         Form2->DBNavigator1->BtnClick(nbEdit);
         // settings fields
         Form3->DBTypeThis->Text =  IntToStr( result );
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N1Click(TObject *Sender)
{
        Form5->Visible = true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm3::date_adoptedChange(TObject *Sender)
{
 Form2->DBNavigator1->BtnClick(nbEdit);
 Form3->DBda->Text = DateToStr(Form3->date_adopted->Date);
}
//---------------------------------------------------------------------------

