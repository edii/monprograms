//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Label5Click(TObject *Sender)
{
   ShellExecute(Handle, "open", "http://mon.gov.ua", NULL, NULL, SW_SHOWNORMAL);     
}
//---------------------------------------------------------------------------
