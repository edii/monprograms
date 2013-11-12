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
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label12;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TGroupBox *GroupBox2;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TsMonthCalendar *DatePublications;
        TButton *F3clickDatePublication;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBMemo *DBMemo1;
        TDBEdit *DBEdit5;
        TDBMemo *DBMemo2;
        TDBMemo *DBMemo3;
        TDBMemo *DBMemo4;
        TDBMemo *DBMemo5;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit7;
        TDBEdit *setDatePublications;
        TDBEdit *DBcns;
        TComboBox *DBFieldScience;
        TDBEdit *DBfs;
        TButton *F3Save;
        TDBRadioGroup *DBRadioGroup1;
        TDBEdit *DBTypeThis;
        TComboBox *DBCodeNameSpecialty;
        TMainMenu *MainMenu1;
        TMenuItem *Edit1;
        TMenuItem *Open1;
        TMenuItem *Close1;
        TMenuItem *createItems;
        TMenuItem *Export1;
        TLabel *Label13;
        TLabel *Label14;
        TDBEdit *DBEdit8;
        TDBMemo *DBMemo6;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall F3clickDatePublicationClick(TObject *Sender);
        void __fastcall DBFieldScienceChange(TObject *Sender);
        void __fastcall F3SaveClick(TObject *Sender);
        void __fastcall DBRadioGroup1Change(TObject *Sender);
        void __fastcall DBCodeNameSpecialtyChange(TObject *Sender);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall createItemsClick(TObject *Sender);
        void __fastcall Open1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
