//---------------------------------------------------------------------------
#include <math.h> 
#include <stdio.h>
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
#pragma link "sCustomComboEdit"
#pragma link "sMaskEdit"
#pragma link "sTooledit"
#pragma resource "*.dfm"
TForm1 *Form1;

int type_thises, result;

AnsiString nij, csac, nip, aip, of, dateNow, npa, supervisor;

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

        Form2->Update->Click();

        //Form2->QF2->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::createItemsClick(TObject *Sender)
{
        AnsiString date_adopted;
       try  {

                if(Application->MessageBox("��������?","ϳ�����������!",MB_YESNO) == IDYES) {

                Form2->MON->Insert();

                date_adopted = Form1->date_adopted->Text.c_str();
                //Form2->MON->Fields->Fields[18]->Value = Form1->date_adopted->Text;
                Form2->MON->Fields->Fields[18]->Value = Form1->date_adopted->Text;

            // settings params
                type_thises = Form1->TypeThesis->ItemIndex;

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
                        nij = StringReplace(nij, "\"", "'", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[6]->Value = nij;
                }


                Form2->MON->Fields->Fields[7]->Value = Form1->ThesisTheme->Text;

                if(IntToStr( Form1->CodeNameSpecialty->ItemIndex ) < 1 || IntToStr( Form1->FieldScience->ItemIndex ) < 1) {
                     if(IntToStr( Form1->CodeNameSpecialty->ItemIndex ) < 1) {
                         Application->MessageBox("������� ���� ����� ���� '���� � ����� ������� ������������'!",
				"�������!", NULL);
                     }

                     if(IntToStr( Form1->FieldScience->ItemIndex ) < 1) {
                         Application->MessageBox("������� ���� ����� '������ �����'!",
				"�������!", NULL);
                     }

                     return;
                }

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
                        csac = StringReplace(csac, "\"", "'", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
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
                        nip = StringReplace(nip, "\"", "'", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
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
                        aip = StringReplace(aip, "\"", "'", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[12]->Value = aip;
                }


                Form2->MON->Fields->Fields[13]->Value = Form1->PhoneintitutionsProtect->Text;


                // supervisor
                supervisor = " ";
                Form2->MON->Fields->Fields[14]->Value = " ";
                if(Form1->Supervisor->Lines->Count > 0) {
                        for(int i = 0; i < Form1->Supervisor->Lines->Count; i++) {
                                supervisor +=  Form1->Supervisor->Lines->Strings[ i ]+"\n";
                        }
                        supervisor = StringReplace(supervisor, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        supervisor = StringReplace(supervisor, "\"", "'", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[14]->Value = supervisor;
                }

                // Form2->MON->Fields->Fields[14]->Value = Form1->Supervisor->Text;

                 // of
                of = " ";
                Form2->MON->Fields->Fields[15]->Value = " ";
                if(Form1->Oficial->Lines->Count > 0) {
                        for(int i = 0; i < Form1->Oficial->Lines->Count; i++) {
                                of +=  Form1->Oficial->Lines->Strings[ i ]+"\n";
                        }
                        of = StringReplace(of, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        of = StringReplace(of, "\"", "'", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[15]->Value = of;
                }

                Form2->MON->Fields->Fields[16]->Value = Form1->setDatePublication->Text;

                 // npa
                npa = " ";
                Form2->MON->Fields->Fields[17]->Value = " ";
                if(Form1->number_protocol_adopted->Lines->Count > 0) {
                        for(int i = 0; i < Form1->number_protocol_adopted->Lines->Count; i++) {
                                npa +=  Form1->number_protocol_adopted->Lines->Strings[ i ]+"\n";
                        }
                        npa = StringReplace(npa, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        npa = StringReplace(npa, "\"", "'", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);
                        Form2->MON->Fields->Fields[17]->Value = npa;
                }

                /*
                if(Form1->date_adopted->Text == "") {
                        ShowMessage("������ ���� ����� ���� �������� ����������!");
                        break;
                        // return;

                } else {
                    Form1->date_adopted->Text = "";
                }
                */

                // save DB
                                Form2->MON->Post();
                                Form2->MON->Refresh();

                                // clear fields
                                Form1->ApplicantSurname->Text = "";
                                Form1->ApplicantName->Text = "";
                                Form1->ApplicantPatronymic->Text = "";
                                Form1->JobSeeker->Text = "";
                                Form1->ThesisTheme->Text = "";
                                Form1->PhoneintitutionsProtect->Text = 0;
                                // Form1->Supervisor->Text = "";

                                TDateTime today;
	                        today = Now();
                                Form1->setDatePublication->Text = DateToStr(today);
                                Form1->date_adopted->Text = "";

                                Form1->CodeNameSpecialty->ItemIndex = 0;
                                Form1->FieldScience->ItemIndex = 0;

                                Form1->Supervisor->Lines->Clear();

                                Form1->NameInstitutionsJob->Lines->Clear();
                                Form1->CallSpecializedAcademicCouncil->Lines->Clear();
                                Form1->NameInstitutionsProtect->Lines->Clear();
                                Form1->AddressInstitutionsProtect->Lines->Clear();
                                Form1->Oficial->Lines->Clear();
                                Form1->number_protocol_adopted->Lines->Clear();

                        }



       } catch( Exception *ex ) {
                AnsiString ErrorMessageHint, messange_e;

                messange_e = ex->Message;
                ShowMessage( messange_e );
                // string1.Pos(substring1);

                if(messange_e.Pos("date_adopted"))
                {
                        if(Sender->ClassName().operator AnsiString() == AnsiString("TMaskEdit"))
                        {
                                TMaskEdit *me = (TMaskEdit *)Sender;
                                me->Clear();
                                me->Refresh();
                                Perform(WM_NEXTDLGCTL, 0, 0);
                                ErrorMessageHint = "";
                        }
                        else ErrorMessageHint = "������� ����������� �������� '���� �������� ����������'. ��������� ESC!";
                } else if(messange_e.Pos("PhoneintitutionsProtect"))
                {
                        if(Sender->ClassName().operator AnsiString() == AnsiString("TMaskEdit"))
                        {
                                TMaskEdit *me = (TMaskEdit *)Sender;
                                me->Clear();
                                me->Refresh();
                                Perform(WM_NEXTDLGCTL, 0, 0);
                                ErrorMessageHint = "";
                        }
                        else ErrorMessageHint = "������� ����������� �������� '������� ��������, � ��� ���������� ������'. ��������� ESC!";
                }  else {
                      ErrorMessageHint = "";
                }

                if(ErrorMessageHint != "") {
                        Application->MessageBox(ErrorMessageHint.c_str(),
				"�������!", NULL);
                 }  else {

                 }

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




void __fastcall TForm1::Export1Click(TObject *Sender)
{
        Form4->ADOQuery1->Active = false;
        Form4->ADOQuery1->Active = true;

        Form4->Visible = true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        TDateTime today;
	today = Now();
        dateNow = DateToStr(today);
        if(Form1->setDatePublication->Text == 0) {
                Form1->setDatePublication->Text = dateNow;
        }


}

//---------------------------------------------------------------------------

void __fastcall TForm1::PhoneintitutionsProtectKeyPress(TObject *Sender,
      char &Key)
{
        if(!((Key >= '0' && Key <= '9') || Key == VK_BACK)) Key = 0x00;         
}
//---------------------------------------------------------------------------













void __fastcall TForm1::N1Click(TObject *Sender)
{
        Form5->Visible = true;        
}
//---------------------------------------------------------------------------


