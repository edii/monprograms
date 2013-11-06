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
#pragma link "sLabel"
#pragma link "sMonthCalendar"
#pragma link "sPanel"
#pragma resource "*.dfm"
TForm1 *Form1;

int type_thises, result;

AnsiString nij, csac, nip, aip, of;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Open1Click(TObject *Sender)
{
        Form1->Visible = false;
        Form2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::createItemsClick(TObject *Sender)
{
      if(Application->MessageBox("Выполнить?","Подтверждение!",MB_YESNO) == IDYES) {
                // settings params
                type_thises = Form1->TypeThesis->ItemIndex;

                switch( type_thises ) {
                        case 0:
                                result = 1;
                        break;
                        case 1:
                                result = 2;
                        break;
                }

                Form2->MON->Insert();
                // settings fields
                Form2->MON->Fields->Fields[1]->Value = IntToStr( result );
                Form2->MON->Fields->Fields[2]->Value = Form1->ApplicantSurname->Text;

                Form2->MON->Fields->Fields[3]->Value = Form1->ApplicantName->Text;
                Form2->MON->Fields->Fields[4]->Value = Form1->ApplicantPatronymic->Text;

                Form2->MON->Fields->Fields[5]->Value = Form1->JobSeeker->Text;


                nij = " ";
                Form2->MON->Fields->Fields[6]->Value = " ";
                if(Form1->NameInstitutionsJob->Lines->Count > 0) {
                        for(int i = 0; i < Form1->NameInstitutionsJob->Lines->Count; i++) {
                                nij +=  Form1->NameInstitutionsJob->Lines->Strings[ i ]+"\n";
                        }
                        nij = StringReplace(nij, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[6]->Value = nij;
                }

               
                Form2->MON->Fields->Fields[7]->Value = Form1->ThesisTheme->Text;
                Form2->MON->Fields->Fields[8]->Value = IntToStr( Form1->CodeNameSpecialty->ItemIndex );

                Form2->MON->Fields->Fields[9]->Value = IntToStr( Form1->FieldScience->ItemIndex );


                //csac
                csac = " ";
                Form2->MON->Fields->Fields[10]->Value = " ";
                if(Form1->CallSpecializedAcademicCouncil->Lines->Count > 0) {
                        for(int i = 0; i < Form1->CallSpecializedAcademicCouncil->Lines->Count; i++) {
                                csac +=  Form1->CallSpecializedAcademicCouncil->Lines->Strings[ i ]+"\n";
                        }
                        csac = StringReplace(csac, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[10]->Value = csac;
                }

                //nip
                nip = " ";
                Form2->MON->Fields->Fields[11]->Value = " ";
                if(Form1->NameInstitutionsProtect->Lines->Count > 0) {
                        for(int i = 0; i < Form1->NameInstitutionsProtect->Lines->Count; i++) {
                                nip +=  Form1->NameInstitutionsProtect->Lines->Strings[ i ]+"\n";
                        }
                        nip = StringReplace(nip, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[11]->Value = nip;
                }

                // aip
                aip = " ";
                Form2->MON->Fields->Fields[12]->Value = " ";
                if(Form1->AddressInstitutionsProtect->Lines->Count > 0) {
                        for(int i = 0; i < Form1->AddressInstitutionsProtect->Lines->Count; i++) {
                                aip +=  Form1->AddressInstitutionsProtect->Lines->Strings[ i ]+"\n";
                        }
                        aip = StringReplace(aip, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[12]->Value = aip;
                }


                Form2->MON->Fields->Fields[13]->Value = Form1->PhoneintitutionsProtect->Text;

                Form2->MON->Fields->Fields[14]->Value = Form1->Supervisor->Text;

                 // of
                of = " ";
                Form2->MON->Fields->Fields[15]->Value = " ";
                if(Form1->Oficial->Lines->Count > 0) {
                        for(int i = 0; i < Form1->Oficial->Lines->Count; i++) {
                                of +=  Form1->Oficial->Lines->Strings[ i ]+"\n";
                        }
                        of = StringReplace(of, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[15]->Value = of;
                }

                Form2->MON->Fields->Fields[16]->Value = Form1->setDatePublication->Text;
                // save DB
                Form2->MON->Post();
                Form2->MON->Refresh();

        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
 AnsiString days = Form1->DatePublications->Day;
 AnsiString month = Form1->DatePublications->Month;
 AnsiString years = Form1->DatePublications->Year;

 AnsiString result = days + "." + month + "." + years;

 Form1->setDatePublication->Text = result;
 /*
 Form1->Result->Caption += " / ";
 Form1->Result->Caption += Form1->DatePublications->Month;
 Form1->Result->Caption += " / ";
 Form1->Result->Caption += Form1->DatePublications->Year;
 */
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Close1Click(TObject *Sender)
{
        Form1->Close();
        Form2->Close();
        Form3->Close();
}
//---------------------------------------------------------------------------



