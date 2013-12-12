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
AnsiString a_s = Form4->ADOQuery1->FieldByName("applicant_surname")->AsString;
AnsiString a_n = Form4->ADOQuery1->FieldByName("applicant_name")->AsString;
AnsiString a_p = Form4->ADOQuery1->FieldByName("applicant_patronymic")->AsString;

AnsiString csac = Trim(Form4->ADOQuery1->FieldByName("call_specialized_academic_council")->AsString);
//applicant_patronymic
AnsiString res_send = a_s+a_n+a_p+csac+"_1.csv";
res_send = StringReplace(res_send, " ", "_", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);

Form4->SaveDialog1->FileName = res_send;

Form4->SaveDialog1->Title = "Save As";
if(Form4->ItemsFiles->Lines->Count > 0) {

        if (Form4->SaveDialog1->Execute()) {
                Form4->ItemsFiles->Lines->SaveToFile(SaveDialog1->FileName);
                Form4->ItemsFiles->Modified = false;
        }

} else {
 ShowMessage("Выберите диссертацию с таблицы!");
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

      r_tt_name = "Здобуття наукового ступеня;";
      r_tt_name += Form4->ADOQuery1->FieldByName("tt_name")->AsString+";";

      applicant_surname = "Прізвище здобувача;";
      applicant_surname += Form4->ADOQuery1->FieldByName("applicant_surname")->AsString+";";

      applicant_name = "Ім’я здобувача;";
      applicant_name += Form4->ADOQuery1->FieldByName("applicant_name")->AsString+";";

      applicant_patronymic = "По батькові здобувача;";
      applicant_patronymic += Form4->ADOQuery1->FieldByName("applicant_patronymic")->AsString+";";


      job_seeker = "Посада здобувача;";
      job_seeker += Form4->ADOQuery1->FieldByName("job_seeker")->AsString+";";

      //Найменування установи, в якій працює здобувач
      name_institutions_job = "Найменування установи, в якій працює здобувач;";
      name_institutions_job += "\""+Trim(Form4->ADOQuery1->FieldByName("name_institutions_job")->AsString)+"\";";

      // Тема дисертації
      thesis_theme = "Тема дисертації;";
      thesis_theme += Form4->ADOQuery1->FieldByName("thesis_theme")->AsString+";";

      // Шифр і назва наукової спеціальності
      r_cns_name = "Шифр і назва наукової спеціальності;";
      r_cns_name += "\""+Form4->ADOQuery1->FieldByName("name")->AsString+"\";";

      // Прийнято дисертацію до захисту
      adopted = "Прийнято дисертацію до захисту;";
      adopted += Form4->ADOQuery1->FieldByName("date_adopted")->AsString+" протокол № "+"\""+Trim(Form4->ADOQuery1->FieldByName("number_protocol_adopted")->AsString)+"\""+";";


      // Галузь науки
      r_fs_name = "Галузь науки;";
      r_fs_name += Form4->ADOQuery1->FieldByName("fs_name")->AsString+";";

      // Шифр спеціалізованої вченої ради
      call_specialized_academic_council = "Шифр спеціалізованої вченої ради;";
      call_specialized_academic_council += "\""+Trim(Form4->ADOQuery1->FieldByName("call_specialized_academic_council")->AsString)+"\";";

      // Найменування установи, в якій відбудеться захист
      name_institutions_protect = "Найменування установи, в якій відбудеться захист;";
      name_institutions_protect += "\""+Trim(Form4->ADOQuery1->FieldByName("name_institutions_protect")->AsString)+"\";";

      // Адреса установи, в якій відбудеться захист
      address_institutions_protected = "Адреса установи, в якій відбудеться захист;";
      address_institutions_protected += "\""+Trim(Form4->ADOQuery1->FieldByName("address_institutions_protected")->AsString)+"\";";

      // Телефон установи, в якій відбудеться захист
      phone_institutions_protected = "Телефон установи, в якій відбудеться захист;";
      phone_institutions_protected += Form4->ADOQuery1->FieldByName("phone_institutions_protected")->AsString+";";

      // Науковий керівник (консультатнт)
      supervisor = "Науковий керівник (консультатнт);";
      supervisor += "\""+Trim(Form4->ADOQuery1->FieldByName("supervisor")->AsString)+"\";";

      // Офіційні опоненти
      oficial = "Офіційні опоненти;";
      oficial += "\""+Trim(Form4->ADOQuery1->FieldByName("oficial")->AsString)+"\";";



      // set listin by memo1
      Form4->ItemsFiles->Lines->Add( r_tt_name );
      Form4->ItemsFiles->Lines->Add( applicant_surname );
      Form4->ItemsFiles->Lines->Add( applicant_name );
      Form4->ItemsFiles->Lines->Add( applicant_patronymic );
      Form4->ItemsFiles->Lines->Add( job_seeker );
      Form4->ItemsFiles->Lines->Add( name_institutions_job );
      Form4->ItemsFiles->Lines->Add( thesis_theme );
      Form4->ItemsFiles->Lines->Add( r_cns_name );
      Form4->ItemsFiles->Lines->Add( adopted );
      Form4->ItemsFiles->Lines->Add( r_fs_name );
      Form4->ItemsFiles->Lines->Add( call_specialized_academic_council );
      Form4->ItemsFiles->Lines->Add( name_institutions_protect );
      Form4->ItemsFiles->Lines->Add( address_institutions_protected );
      Form4->ItemsFiles->Lines->Add( phone_institutions_protected );
      Form4->ItemsFiles->Lines->Add( supervisor );
      Form4->ItemsFiles->Lines->Add( oficial );

      // nij = StringReplace(nij, ";", "", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);

      //ItemsFilesWeb
      web_result = "";
      web_result += Form4->ADOQuery1->FieldByName("type_this")->AsString+";";             // 0  (int)
      web_result += Form4->ADOQuery1->FieldByName("applicant_surname")->AsString+";";     // 1
      web_result += Form4->ADOQuery1->FieldByName("applicant_name")->AsString+";";        // 2
      web_result += Form4->ADOQuery1->FieldByName("applicant_patronymic")->AsString+";";  // 3
      web_result += Form4->ADOQuery1->FieldByName("job_seeker")->AsString+";";            // 4
      web_result += Form4->ADOQuery1->FieldByName("name_institutions_job")->AsString+";"; // 5
      web_result += Form4->ADOQuery1->FieldByName("thesis_theme")->AsString+";";          // 6
      web_result += Form4->ADOQuery1->FieldByName("code_name_specialty")->AsString+";";   // 7  (int)
      web_result += Form4->ADOQuery1->FieldByName("field_science")->AsString+";";         // 8  (int)
      web_result += Form4->ADOQuery1->FieldByName("call_specialized_academic_council")->AsString+";"; // 9
      web_result += Form4->ADOQuery1->FieldByName("name_institutions_protect")->AsString+";";       // 10
      web_result += Form4->ADOQuery1->FieldByName("address_institutions_protected")->AsString+";";  // 11
      web_result += Form4->ADOQuery1->FieldByName("phone_institutions_protected")->AsString+";";    // 12
      web_result += Form4->ADOQuery1->FieldByName("supervisor")->AsString+";";       // 13
      web_result += Form4->ADOQuery1->FieldByName("oficial")->AsString+";";          // 14

      web_result += Form4->ADOQuery1->FieldByName("date_adopted")->AsString+";";     // 15
      web_result += Form4->ADOQuery1->FieldByName("number_protocol_adopted")->AsString+";"; // 16

      web_result += Form4->ADOQuery1->FieldByName("data_publications")->AsString+";"; // 17

      web_result = StringReplace(web_result, "\n", "<br />", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);

      Form4->ItemsFilesWeb->Lines->Add( web_result );

      // show button
      Form4->Button1->Visible = true;
      Form4->Button2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{


AnsiString a_s = Form4->ADOQuery1->FieldByName("applicant_surname")->AsString;
AnsiString a_n = Form4->ADOQuery1->FieldByName("applicant_name")->AsString;
AnsiString a_p = Form4->ADOQuery1->FieldByName("applicant_patronymic")->AsString;

AnsiString csac = Trim(Form4->ADOQuery1->FieldByName("call_specialized_academic_council")->AsString);
//applicant_patronymic
AnsiString res_send = a_s+a_n+a_p+csac+"_2.csv";
res_send = StringReplace(res_send, " ", "_", TReplaceFlags()<<rfReplaceAll<<rfIgnoreCase);

Form4->SaveDialog1->FileName = res_send;

Form4->SaveDialog1->Title = "Save As";
if(Form4->ItemsFilesWeb->Lines->Count > 0) {

        if (Form4->SaveDialog1->Execute()) {
                Form4->ItemsFilesWeb->Lines->SaveToFile(SaveDialog1->FileName);
                Form4->ItemsFilesWeb->Modified = false;
        }

} else {
 ShowMessage("Выберите диссертацию с таблицы!");
}

}
//---------------------------------------------------------------------------

