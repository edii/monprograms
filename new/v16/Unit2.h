//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TADOConnection *ADOConnection1;
        TADOTable *MON;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TButton *Button2;
        TDBGrid *DBGrid2;
        TMainMenu *MainMenu1;
        TMenuItem *Edit1;
        TMenuItem *Open1;
        TMenuItem *Close1;
        TMenuItem *createItems;
        TMenuItem *Export1;
        TADOTable *CNS;
        TADOTable *TT;
        TDBGrid *DBGrid3;
        TDBGrid *DBGrid4;
        TADOTable *FS;
        TDataSource *TTsource;
        TDataSource *CNSsource;
        TDataSource *FSsource;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall createItemsClick(TObject *Sender);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall Open1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
