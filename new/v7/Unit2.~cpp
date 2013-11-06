//---------------------------------------------------------------------------
#include <math.h> 
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
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

