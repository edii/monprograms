//---------------------------------------------------------------------------
#include <math.h> 
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
     Form2->Visible = false;   
     Form1->Visible = true;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
   Form3->Visible = true;
   Form2->Visible = false;

   Form3->TypeThesis->ItemIndex = Form3->DBTypeThis->Text - 1;
   Form3->DBCodeNameSpecialty->ItemIndex = StrToInt(Form3->DBcns->Text);
   Form3->DBFieldScience->ItemIndex = StrToInt(Form3->DBfs->Text);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::createItemsClick(TObject *Sender)
{
   Form3->Visible = false;
   Form2->Visible = false;
   Form1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Close1Click(TObject *Sender)
{
    Form1->Close();
    Form2->Close();
    Form3->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Open1Click(TObject *Sender)
{
    // return 1;
}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormCreate(TObject *Sender)
{
        if(Form2->QF2->Active) {
               Form2->QF2->Active = false;
        } else {
                Form2->QF2->Active = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::UpdateClick(TObject *Sender)
{
       Form2->QF2->Active = false;
       Form2->QF2->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Export1Click(TObject *Sender)
{
        Form4->ADOQuery1->Active = false;
        Form4->ADOQuery1->Active = true;

        Form4->Visible = true;        
}
//---------------------------------------------------------------------------

