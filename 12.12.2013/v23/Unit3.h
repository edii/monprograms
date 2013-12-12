//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sLabel.hpp"
#include "sMonthCalendar.hpp"
#include "sPanel.hpp"
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include "sGroupBox.hpp"
#include "sCustomComboEdit.hpp"
#include "sMaskEdit.hpp"
#include "sTooledit.hpp"
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox2;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TsMonthCalendar *DatePublications;
        TButton *F3clickDatePublication;
        TDBEdit *DBEdit5;
        TDBMemo *DBMemo2;
        TDBMemo *DBMemo3;
        TDBEdit *setDatePublications;
        TDBEdit *DBcns;
        TDBEdit *DBfs;
        TButton *F3Save;
        TDBEdit *DBTypeThis;
        TMainMenu *MainMenu1;
        TMenuItem *Edit1;
        TMenuItem *Open1;
        TMenuItem *Close1;
        TMenuItem *createItems;
        TMenuItem *Export1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TMenuItem *N1;
        TRadioGroup *TypeThesis;
        TMainMenu *MainMenu2;
        TMenuItem *MenuItem1;
        TMenuItem *MenuItem2;
        TMenuItem *MenuItem3;
        TMenuItem *MenuItem4;
        TMenuItem *MenuItem5;
        TMenuItem *MenuItem6;
        TsGroupBox *sGroupBox1;
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TComboBox *DBCodeNameSpecialty;
        TComboBox *DBFieldScience;
        TDBMemo *DBMemo6;
        TGroupBox *GroupBox3;
        TLabel *Label2;
        TLabel *Label1;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBMemo *DBMemo1;
        TDBEdit *DBEdit7;
        TDBMemo *DBMemo7;
        TLabel *Label8;
        TDBMemo *DBMemo5;
        TGroupBox *GroupBox1;
        TDBMemo *DBMemo4;
        TsDateEdit *date_adopted;
        TDBEdit *DBda;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall F3clickDatePublicationClick(TObject *Sender);
        void __fastcall DBFieldScienceChange(TObject *Sender);
        void __fastcall F3SaveClick(TObject *Sender);
        void __fastcall DBRadioGroup1Change(TObject *Sender);
        void __fastcall DBCodeNameSpecialtyChange(TObject *Sender);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall createItemsClick(TObject *Sender);
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Export1Click(TObject *Sender);
        void __fastcall TypeThesisClick(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall date_adoptedChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
