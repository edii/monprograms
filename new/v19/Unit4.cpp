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
TForm4 *Form4;

//char str[] listingRes[1000];
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}


void __fastcall TForm4::Button1Click(TObject *Sender)
{

Form4->SaveDialog1->Title = "Save As";
if(Form4->ItemsFiles->Lines->Count > 0) {

        if (Form4->SaveDialog1->Execute()) {
                Form4->ItemsFiles->Lines->SaveToFile(SaveDialog1->FileName);
                Form4->ItemsFiles->Modified = false;
        }

} else {
 ShowMessage("�������� ����������� � �������!");
}

}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormCreate(TObject *Sender)
{
        Form4->ADOQuery1->Active = true;        
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button3Click(TObject *Sender)
{
      AnsiString r_tt_name,
                 applicant_surname,
                 applicant_name,
                 applicant_patronymic,
                 job_seeker,
                 name_institutions_job,
                 thesis_theme,
                 r_fs_name,
                 r_cns_name,
                 call_specialized_academic_council,
                 name_institutions_protect,
                 address_institutions_protected,
                 phone_institutions_protected,
                 supervisor,
                 oficial,
                 adopted,
                 web_result;

      Form4->ItemsFiles->Lines->Clear();

      r_tt_name = "�������� ��������� �������;";
      r_tt_name += Form4->ADOQuery1->FieldByName("tt_name")->AsString+";";

      applicant_surname = "������� ���������;";
      applicant_surname += Form4->ADOQuery1->FieldByName("applicant_surname")->AsString+";";

      applicant_name = "��� ���������;";
      applicant_name += Form4->ADOQuery1->FieldByName("applicant_name")->AsString+";";

      applicant_patronymic = "�� ������� ���������;";
      applicant_patronymic += Form4->ADOQuery1->FieldByName("applicant_patronymic")->AsString+";";


      job_seeker = "������ ���������;";
      job_seeker += Form4->ADOQuery1->FieldByName("job_seeker")->AsString+";";

      //������������ ��������, � ��� ������ ��������
      name_institutions_job = "������������ ��������, � ��� ������ ��������;";
      name_institutions_job += "\""+Trim(Form4->ADOQuery1->FieldByName("name_institutions_job")->AsString)+"\";";

      // ���� ����������
      thesis_theme = "���� ����������;";
      thesis_theme += Form4->ADOQuery1->FieldByName("thesis_theme")->AsString+";";

      // ���� � ����� ������� ������������
      r_cns_name = "���� � ����� ������� ������������;";
      r_cns_name += "\""+Form4->ADOQuery1->FieldByName("name")->AsString+"\";";

      // ������ �����
      r_fs_name = "������ �����;";
      r_fs_name += Form4->ADOQuery1->FieldByName("fs_name")->AsString+";";

      // ���� ������������� ����� ����
      call_specialized_academic_council = "���� ������������� ����� ����;";
      call_specialized_academic_council += "\""+Trim(Form4->ADOQuery1->FieldByName("call_specialized_academic_council")->AsString)+"\";";

      // ������������ ��������, � ��� ���������� ������
      name_institutions_protect = "������������ ��������, � ��� ���������� ������;";
      name_institutions_protect += "\""+Trim(Form4->ADOQuery1->FieldByName("name_institutions_protect")->AsString)+"\";";

      // ������ ��������, � ��� ���������� ������
      address_institutions_protected = "������ ��������, � ��� ���������� ������;";
      address_institutions_protected += "\""+Trim(Form4->ADOQuery1->FieldByName("address_institutions_protected")->AsString)+"\";";

      // ������� ��������, � ��� ���������� ������
      phone_institutions_protected = "������� ��������, � ��� ���������� ������;";
      phone_institutions_protected += Form4->ADOQuery1->FieldByName("phone_institutions_protected")->AsString+";";

      // �������� ������� (������������)
      supervisor = "�������� ������� (������������);";
      supervisor += Form4->ADOQuery1->FieldByName("supervisor")->AsString+";";

      // �������� ��������
      oficial = "�������� ��������;";
      oficial += "\""+Trim(Form4->ADOQuery1->FieldByName("oficial")->AsString)+"\";";

      // �������� ���������� �� �������
      adopted = "�������� ���������� �� �������;";
      adopted += Form4->ADOQuery1->FieldByName("date_adopted")->AsString+" �������� � "+Form4->ADOQuery1->FieldByName("number_protocol_adopted")->AsString+";";


      // set listin by memo1
      Form4->ItemsFiles->Lines->Add( r_tt_name );
      Form4->ItemsFiles->Lines->Add( applicant_surname );
      Form4->ItemsFiles->Lines->Add( applicant_name );
      Form4->ItemsFiles->Lines->Add( applicant_patronymic );
      Form4->ItemsFiles->Lines->Add( job_seeker );
      Form4->ItemsFiles->Lines->Add( name_institutions_job );
      Form4->ItemsFiles->Lines->Add( thesis_theme );
      Form4->ItemsFiles->Lines->Add( r_cns_name );
      Form4->ItemsFiles->Lines->Add( r_fs_name );
      Form4->ItemsFiles->Lines->Add( call_specialized_academic_council );
      Form4->ItemsFiles->Lines->Add( name_institutions_protect );
      Form4->ItemsFiles->Lines->Add( address_institutions_protected );
      Form4->ItemsFiles->Lines->Add( phone_institutions_protected );
      Form4->ItemsFiles->Lines->Add( supervisor );
      Form4->ItemsFiles->Lines->Add( oficial );
      Form4->ItemsFiles->Lines->Add( adopted );

      //ItemsFilesWeb
      web_result = "";
      web_result += Form4->ADOQuery1->FieldByName("type_this")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("applicant_surname")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("applicant_name")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("applicant_patronymic")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("job_seeker")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("name_institutions_job")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("thesis_theme")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("code_name_specialty")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("field_science")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("call_specialized_academic_council")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("name_institutions_protect")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("address_institutions_protected")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("phone_institutions_protected")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("supervisor")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("oficial")->AsString+";";

      web_result += Form4->ADOQuery1->FieldByName("date_adopted")->AsString+";";
      web_result += Form4->ADOQuery1->FieldByName("number_protocol_adopted")->AsString+";";

      Form4->ItemsFilesWeb->Lines->Add( web_result );

      // show button
      Form4->Button1->Visible = true;
      Form4->Button2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{

Form4->SaveDialog1->Title = "Save As";
if(Form4->ItemsFilesWeb->Lines->Count > 0) {

        if (Form4->SaveDialog1->Execute()) {
                Form4->ItemsFilesWeb->Lines->SaveToFile(SaveDialog1->FileName);
                Form4->ItemsFilesWeb->Modified = false;
        }

} else {
 ShowMessage("�������� ����������� � �������!");
}

}
//---------------------------------------------------------------------------

